NAME	=	libftprintf.a

SRCS	=	ft_atoi.c ft_parsing.c ft_init_reset_flags.c ft_isdigit.c\
			ft_itoa.c ft_itoa_hex.c ft_memset.c ft_print_char_str.c\
			ft_print_nbr.c ft_printf.c ft_putnstr.c\
			ft_allocate.c ft_str_func.c

HEADER	=	ft_printf.h

OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all

