NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f
LIBFT	= libft/libft.a

SRCS	=	src/ft_printf.c \
			src/manager.c \
			src/flags/flag_i.c \
			src/flags/flag_x.c \
			src/flags/flag_upper_x.c \
			src/flags/flag_percent.c \
			src/flags/flag_d.c \
			src/flags/flag_c.c \
			src/flags/flag_s.c \
			src/flags/flag_u.c \
			src/flags/flag_p.c \
			src/utils/putdecimal.c \
			src/utils/puthexadecimal.c

OBJS	= $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I. -Ilibft -c $< -o $@

clean:
	$(RM) $(OBJS)
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re