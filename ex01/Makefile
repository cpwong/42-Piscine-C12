NAME = test

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = ft_list.h
FILES = main \
	../ex00/ft_create_elem \
	ft_list_push_front

SOURCES = $(foreach filename, $(FILES), $(filename).c)
OBJECTS = $(foreach filename, $(FILES), $(filename).o)

all: $(NAME)

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $@

# %.o: %.c $(INCLUDES)
#	$(CC) $(CFLAGS) -c $@ $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

run:	all
	./test