# Name of the library file
NAME = libft.a
# Compiler to use
CC = cc
# Flags to use when compiling
CFLAGS = -Wall -Wextra -Werror
# Archiver to use
AR = ar
# Flags to use when archiving
ARFLAGS = -rc
# Command to use to remove files
RM = rm -f
# List of all the .c files for the library
SRC = char/ft_isalpha.c\
char/ft_isdigit.c\
char/ft_isalnum.c\
char/ft_isascii.c\
char/ft_isprint.c\
string/ft_strlen.c\
memory/ft_memset.c\
memory/ft_memmove.c\
deprecated/ft_bzero.c\
memory/ft_memcpy.c\
string/ft_strlcpy.c\
string/ft_strlcat.c\
char/ft_toupper.c\
char/ft_tolower.c\
string/ft_strchr.c\
string/ft_strrchr.c\
string/ft_strncmp.c\
memory/ft_memchr.c\
memory/ft_memcmp.c\
string/ft_strnstr.c\
conversion/ft_atoi.c\
memory/ft_calloc.c\
string/ft_strdup.c\
string/ft_substr.c\
string/ft_strjoin.c\
string/ft_strtrim.c\
string/ft_split.c\
conversion/ft_itob.c\
conversion/ft_itoa.c\
string/ft_strmapi.c\
string/ft_striteri.c\
output/ft_putchar_fd.c\
output/ft_putstr_fd.c\
output/ft_putendl_fd.c\
output/ft_putnbr_fd.c\
output/ft_putunbr_fd.c\
output/ft_puthex_fd.c\
output/ft_putoct_fd.c\
output/ft_putptr_fd.c

BONUS_SRC = lists/ft_lstnew_bonus.c\
lists/ft_lstadd_front_bonus.c\
lists/ft_lstsize_bonus.c\
lists/ft_lstlast_bonus.c\
lists/ft_lstadd_back_bonus.c\
lists/ft_lstdelone_bonus.c\
lists/ft_lstclear_bonus.c\
lists/ft_lstiter_bonus.c\
lists/ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(BONUS_OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
		rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

bonus:	$(BONUS_OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJ)
.PHONY: all re clean fclean bonus
