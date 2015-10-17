OPTIONS = -O0 -Wall

all : looptest

looptest : looptest.cpp
	g++ ${OPTIONS} -o looptest looptest.cpp

clean:
	rm -rf prog *~ *.o
