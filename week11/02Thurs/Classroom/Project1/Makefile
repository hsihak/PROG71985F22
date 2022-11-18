CXX = gcc
AXX = ar

CXXFLAGS = -Wall 
AXXFLAGS = -crv
LDFLAGS = 

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))

all : Classroom

Classroom : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o Classroom $(LDFLAGS) $(OBJECTS) 

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm Classroom $(OBJECTS)

test : Classroom
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./Classroom