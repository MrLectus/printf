CC=gcc

CODEDIRS=. test

BINARY=$(foreach D,test,$(D)/main)

INCLUDEDIR=.

CFLAG=-Wno-format -Wall -Wall -Werror -Wextra -pedantic -std=gnu89  \
	  $(foreach D,$(INCLUDEDIR), -I$(D))

CFILES=$(foreach D,$(CODEDIRS),$(wildcard $(D)/*.c))

OBJECT=$(patsubst %.c,%.o,$(CFILES))


all: $(BINARY)

$(BINARY):  $(OBJECT)
	$(CC) $(^) -o $(@)

%.o: %.c
	$(CC) $(CFLAG) -c $(^) -o $(@)

.PHONY: test
test:
	./$(BINARY)

.PHONY: clean
clean:
	rm $(OBJECT) $(BINARY)

.PHONY: add
add: clean
	@git add $(CFILES)

.PHONY: stats
stats:
	@git diff --stat

.PHONY: memtest
memtest: $(BINARY)
	heapusage  $(BINARY)

.PHONY: betty
betty:
	betty *.c
