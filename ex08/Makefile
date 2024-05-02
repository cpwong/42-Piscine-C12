NAME = test

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = ft_list.h
FILES = main \
	../ex00/ft_create_elem \
	../ex01/ft_list_push_front \
	../ex02/ft_list_size \
	../ex03/ft_list_last \
	../ex04/ft_list_push_back \
	../ex05/ft_list_push_strs \
	../ex06/ft_list_clear \
	../ex07/ft_list_at \
	ft_list_reverse


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