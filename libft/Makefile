NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c

OBJECTS = $(FUNCTIONS:.c=.o) 

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -crs $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	@ar -crs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
