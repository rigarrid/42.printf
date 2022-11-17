### FILES AND DIRECTORIES ###

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = includes/

LB_PATH = libft/

LB_LIB  = $(addprefix $(LB_PATH), libft.a)

PRINTF_SRC = src/

OB_PATH = obj/

PF_FILES = ft_putchar ft_putstr ft_start ft_putnbr ft_unsigned ft_printf ft_hex ft_voidhex

FILES_OBJ = $(addprefix $(OB_PATH), $(addsuffix .o, $(PF_FILES)))

#####################
### PROGRAM RULES ###
#####################
#@mv libft.a $(NAME)

all: $(NAME)

$(LB_LIB): $(LB_PATH)
	@make -C libft
	@cp libft/libft.a $(NAME)

$(NAME): $(LB_LIB) $(FILES_OBJ)
	@ar -rsc $(NAME) $(FILES_OBJ)
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
