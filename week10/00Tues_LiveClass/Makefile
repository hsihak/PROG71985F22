CXX = gcc
AXX = ar

CXXFLAGS = -Wall -g 
AXXFLAGS = -crv
LDFLAGS = 

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))

all : student

student : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o student $(LDFLAGS) $(OBJECTS) 

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm student $(OBJECTS)

test : student
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./student
