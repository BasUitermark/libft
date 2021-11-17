CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a

AR		= ar rcs

SRCS = ft_abs.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_intlen.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isspace.c \
		ft_isupper.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_itoa_u.c \
		ft_itoa_base.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_neg.c \
		ft_pos.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strclen.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtolower.c \
		ft_strtoupper.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJS = $(SRCS:.c=.o)
OBJS_DIR = objs/
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

GREEN = \033[1;32m
RED = \033[1;31m
MAGENTA = \033[1;35m
RESET = \033[0m

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@echo "$(MAGENTA)Compiling: $(RESET)$<"
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJECTS_PREFIXED)
		@$(AR) $(NAME) $(OBJECTS_PREFIXED)
		@echo "$(GREEN)Library $(NAME) created!$(RESET)"

all: $(NAME)

clean:
		@rm -rf $(OBJS_DIR)
		@echo "$(RED)All object removed!$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(RED)Library $(NAME) removed!$(RESET)"

re:		fclean all

.PHONY: all, clean, fclean, re, bonus
