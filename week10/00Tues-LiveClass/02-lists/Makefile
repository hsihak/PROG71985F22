CXX = gcc
AXX = ar

CXXFLAGS = -Wall -Werror --pedantic -g 
AXXFLAGS = -crv
LDFLAGS = 

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))

all : itemlist

itemlist : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o itemlist $(LDFLAGS) $(OBJECTS) 

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm itemlist $(OBJECTS)

test : itemlist
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./itemlist
