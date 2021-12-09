#Filename library
NAME		= libft.a

#Directory names
DIR_SRCS	= src
DIR_OBJS	= objs

SRCS_DIRS	= $(addprefix $(DIR_SRCS)/, $(dir))
OBJS_DIRS	= $(addprefix $(DIR_OBJS)/, $(dir))

#Sourcefiles
#Note: Only filename needed. "addprefix" and "addsuffix" add filepath and filetype.
SRCS	= $(addprefix src/, $(addsuffix .c, \
		ft_abs \
		ft_atoi \
		ft_bzero \
		ft_calloc \
		ft_intlen \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_islower \
		ft_isspace \
		ft_isupper \
		ft_isprint \
		ft_itoa \
		ft_itoa_u \
		ft_itoa_base \
		ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \
		ft_lstmap \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_neg \
		ft_pos \
		ft_putchar_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putnbr_base_fd \
		ft_putstr_fd \
		ft_split \
		ft_strchr \
		ft_strclen \
		ft_strdup \
		ft_striteri \
		ft_strjoin \
		ft_strlcat \
		ft_strlcpy \
		ft_strlen \
		ft_strmapi \
		ft_strncmp \
		ft_strnstr \
		ft_strrchr \
		ft_strtolower \
		ft_strtoupper \
		ft_strtrim \
		ft_substr \
		ft_tolower \
		ft_toupper))

#Object destination for .c files
OBJS	= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

#Variable declerations for compiling and flags
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar rcs
RM			= rm -f

#Color codes
GREEN = \033[1;32m
RED = \033[1;31m
MAGENTA = \033[1;35m
RESET = \033[0m

#Compile structure with messages
$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
<<<<<<< HEAD
	@printf "$(MAGENTA)Compiling: $(RESET)$<\n"
=======
	@echo "$(MAGENTA)Compiling: $(RESET)$<"
>>>>>>> 0a7d2a31c1620fcb954d13b10a03d309e5248fba
	@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
	@$(CC) $(CFLAGS) -c $< -o $@

#Library structure
$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@echo "$(GREEN)Library $(NAME) created!$(RESET)"

#Standard make command
all: $(NAME)

#Remove object files
clean:
		@$(RM) $(OBJS)
		@$(RM) -r $(DIR_OBJS)
		@echo "$(RED)All objects removed!$(RESET)"

#Remove object files and library file
fclean: clean
		@$(RM) $(NAME)
		@echo "$(RED)Library $(NAME) removed!$(RESET)"

#Remove object files, library file and remake library
re:		fclean all

#
.PHONY: all, clean, fclean, re
