NAME = fixed_point2

INCLUDES = ./includes

MY_SOURCES = $(addprefix srcs/, \
						Fixed.cpp \
						main.cpp)

MY_OBJECTS = $(MY_SOURCES:.cpp=.o)

CFLAGS += -Wall -Wextra -Werror -std=c++98 $(addprefix -I, $(INCLUDES))

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	c++ $(CFLAGS) $(MY_SOURCES) -o $(NAME)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
