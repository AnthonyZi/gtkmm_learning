MAKE = make
CC = gcc
CXX = g++

##################
GTKMCFLAGS = `pkg-config gtkmm-3.0 --cflags`
GTKMLIBS = `pkg-config gtkmm-3.0 --libs`

CFLAGS = -Wall -g -O3 -std=c++14
CXXFLAGS = $(CFLAGS) $(GTKMCFLAGS)
LDFLAGS = $(GTKMLIBS)


NAME = gtkmm

CSOURCE =
CPPSOURCE = $(wildcard *.cpp)

#################

OBJS += $(patsubst %.cpp, %.o, $(wildcard *.cpp))
OBJS += $(patsubst %.c, %.o, $(wildcard *.c))

%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

default : $(NAME)
	$(MAKE) $(NAME)

r :
	reset
	$(MAKE) $(NAME)

#all :
#	$(MAKE) $(NAME)	

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJS) $(LDFLAGS)

clean :
	rm -rf *.o

veryclean : clean
	rm -rf $(NAME)

depend :
	$(CXX) -MM $(CFLAGS) $(CSOURCE) $(CPPSOURCE) > Makefile.dep

-include Makefile.dep

.PHONY: all clean default depend veryclean
