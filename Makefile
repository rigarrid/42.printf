### FILES AND DIRECTORIES ###

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = include

LB_PATH = libft/

PRINTF_SRC = src/

OB_PATH = obj/

PF_FILES = ft_putchar ft_putint ft_putstr ft_start ft_putnbr ft_unsigned

FILES_SRC += $(addprefix $(OB_PATH), $(PF_FILES))

FILES_OBJ = $(addprefix $(OB_PATH), $(addsuffix .o, $(PF_FILES)))

#####################
### PROGRAM RULES ###
#####################

all: libft.a $(NAME)

libft.a: $(LB_PATH)
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a $(NAME)

$(NAME): $(FILES_OBJ)
	@ar rsc $(NAME) $(FILES_OBJ)
	@echo "compiled $(NAME)"

$(OB_PATH)%.o: $(PRINTF_SRC)%.c | DIRECTORIES
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
	@echo "compiled object $@"

DIRECTORIES:
	@mkdir -p $(OB_PATH)

###################
### CLEAN RULES ###
###################

clean:
	@make clean -C libft
	@rm -rf $(OB_PATH)

fclean: clean
	@rm -rf libft/libft.a
	@rm -rf $(NAME)

re: fclean all
