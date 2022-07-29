all:            
		gcc teste_1.c -o teste_1.o
		gcc teste_2.c -o teste_2.o
		gcc teste_3.c -o teste_3.o
		gcc teste_4.c -o teste_4.o
		gcc teste_5.c -o teste_5.o


clean:
		rm -f teste_1.o
		rm -f teste_2.o
		rm -f teste_3.o
		rm -f teste_4.o
		rm -f teste_5.o

re:                clean all