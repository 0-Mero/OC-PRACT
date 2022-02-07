# Если изменить какой-то 1 файл, то
# перебилдится  только этот файл, благодоря:
# Makefile
#
#-O0 - без оптимизации 
#-Wall - вывод все ошибок
#-g3 - 
#-c - 

main: main.o func1.o func2.o
	gcc -o main main.o func1.o func2.o

main.o: main.c header.h func1.h func2.h
	gcc -O0 -g3 -Wall -c main.c

func1.o: func1.c func1.h
	gcc -O0 -g3 -Wall -c func1.c

func2.o: func2.c func2.h
	gcc -O0 -g3 -Wall -c func2.c



some_app: some_app.o
	gcc -o some_app some_app.o

some_app.o: some_app.c
	gcc -O0 -g3 -Wall -c some_app.c

clean: 
	@echo "Clean action begins..."
	rm -rf main some_app *.o

all: some_app main

