SRC = ./src

all: ./a.out run

./a.out: libft.a/ft_isalpha.c
	gcc libft.a/ft_isalpha.c


run:
	./a.out

%.o:

clean:
	rm ./a.out
