# Name of the library file
Name = libft.a
# Compiler to use
CC = gcc
# Flags to use when compiling
CFLAGS = -Wall -Wextra -Werror
# Archiver to use
AR = ar
# Flags to use when archiving
ARFLAGS 0 -rc
# Command to use to remove files
RM = rm -f
# List of all the .c files for the library
SRCS = 
all: $(NAME)

$(NAME): $(OBJS)
		$ (CC) $(CFLAGS -o $(NAME) &(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
