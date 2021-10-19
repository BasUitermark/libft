CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a
SRCDIR	= .

AR		= ar rcs

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
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
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

B_SRCS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c 

OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
		echo "(INFO) Library ($(NAME)) created!"

bonus: $(OBJS) $(B_OBJS)
		$(AR) $(NAME) $(OBJS) $(B_OBJS)
		echo "(INFO) Library ($(NAME)) with bonus created!"

clean:
		rm -f $(OBJS) $(B_OBJS)
		echo "(INFO) All object removed!"

fclean: clean
		rm -f $(NAME)
		echo "(INFO) Library ($(NAME)) removed!"

re:		fclean all

.PHONY: all, clean, fclean, re, bonus