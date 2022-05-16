CC = gcc
CFlags = -Wall
ObjFiles = evenodd.o main.o
target = evenodd_exec

all: $(target)

$(target): $(ObjFiles)	
	$(CC) $(CFlags) -o $(target) $(ObjFiles)

clean:
	rm -f $(ObjFiles) $(target) *~
