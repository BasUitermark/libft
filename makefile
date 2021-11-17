NAME		= libft.a

DIR_SRCS	= src
DIR_OBJS	= objs

SRCS_DIRS	= $(addprefix $(DIR_SRCS)/, $(dir))
OBJS_DIRS	= $(addprefix $(DIR_OBJS)/, $(dir))
SRCS		= src/ft_abs.c \
		src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_intlen.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_islower.c \
		src/ft_isspace.c \
		src/ft_isupper.c \
		src/ft_isprint.c \
		src/ft_itoa.c \
		src/ft_itoa_u.c \
		src/ft_itoa_base.c \
		src/ft_lstnew.c \
		src/ft_lstadd_front.c \
		src/ft_lstsize.c \
		src/ft_lstlast.c \
		src/ft_lstadd_back.c \
		src/ft_lstdelone.c \
		src/ft_lstclear.c \
		src/ft_lstiter.c \
		src/ft_lstmap.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_neg.c \
		src/ft_pos.c \
		src/ft_putchar_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c \
		src/ft_putstr_fd.c \
		src/ft_split.c \
		src/ft_strchr.c \
		src/ft_strclen.c \
		src/ft_strdup.c \
		src/ft_striteri.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strmapi.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strtolower.c \
		src/ft_strtoupper.c \
		src/ft_strtrim.c \
		src/ft_substr.c \
		src/ft_tolower.c \
		src/ft_toupper.c
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR		= ar rcs
RM		= rm -f

GREEN = \033[1;32m
RED = \033[1;31m
MAGENTA = \033[1;35m
RESET = \033[0m

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
	@echo -e "$(MAGENTA)Compiling: $(RESET)$<"
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@echo -e "$(GREEN)Library $(NAME) created!$(RESET)"

all: $(NAME)

clean:
		@$(RM) $(OBJS)
		@$(RM) -r $(DIR_OBJS)
		@echo -e "$(RED)All objects removed!$(RESET)"

fclean: clean
		@$(RM) $(NAME)
		@echo -e "$(RED)Library $(NAME) removed!$(RESET)"

re:		fclean all

.PHONY: all, clean, fclean, re
