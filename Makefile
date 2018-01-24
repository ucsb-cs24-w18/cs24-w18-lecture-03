CXX  = g++
CXXFLAGS = -Wall -g 

all: game

game : testGame.o dieGameImproved.o
	$(CXX) $(CXXFLAGS) $^ -o $@

testGame.o: testGame.cpp dieGameImproved.h
	$(CXX) $(CXXFLAGS) -c testGame.cpp

dieGameImproved.o: dieGameImproved.cpp dieGameImproved.h
	$(CXX) $(CXXFLAGS) -c dieGameImproved.cpp

clean: 
	rm *.o game a.out