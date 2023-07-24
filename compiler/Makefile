OBJECTS= ./build/compiler.o ./build/cprocess.o ./build/token.o ./build/lexer.o ./build/parser.o ./build/node.o ./build/lex_process.o ./build/helpers/buffer.o ./build/helpers/vector.o
INCLUDES= -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} ${OBJECTS} -g -o ./main

./build/compiler.o: ./compiler.c
	gcc compiler.c ${INCLUDES} -o ./build/compiler.o -c -g

./build/cprocess.o: ./cprocess.c
	gcc cprocess.c ${INCLUDES} -o ./build/cprocess.o -c -g

./build/token.o: ./token.c
	gcc token.c ${INCLUDES} -o ./build/token.o -c -g

./build/lexer.o: ./lexer.c
	gcc lexer.c ${INCLUDES} -o ./build/lexer.o -g -c

./build/parser.o: ./parser.c
	gcc parser.c ${INCLUDES} -o ./build/parser.o -g -c

./build/node.o: ./node.c
	gcc node.c ${INCLUDES} -o ./build/node.o -g -c

./build/lex_process.o: ./lex_process.c
	gcc lex_process.c ${INCLUDES} -o ./build/lex_process.o -g -c

./build/helpers/buffer.o: ./helper/buffer.c
	gcc helper/buffer.c ${INCLUDES} -o ./build/helpers/buffer.o -c -g

./build/helpers/vector.o: ./helper/vector.c
	gcc helper/vector.c ${INCLUDES} -o ./build/helpers/vector.o -c -g

clean:
	rm -f ./main
	rm -rf ${OBJECTS}
