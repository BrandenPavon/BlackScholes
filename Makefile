include config.mk

SRC = main.cpp backtest.cpp
OBJ = ${SRC:.c=.o}


all: options main 

options:
	@echo Change in config.mk if needed:
	@echo "Version -> ${VERSION}"
	@echo "CFLAGS = ${CFLAGS}"
	@echo "LDFLAGS = ${LDFLAGS}"
	@echo "CC = ${CC}"
	@echo "--------------------------"

.c.o:
	${CC} -c -o $@ ${CFLAGS} $< 

main: ${OBJ}
	${CC} -o $@ ${OBJ} ${CFLAGS} ${LDFLAGS}
clean:
	rm main *.o
