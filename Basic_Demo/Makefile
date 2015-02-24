GT_PATH=~/workspace/gmock-1.7.0/gtest

all: basic_demo.exe

%.o: %.cc
	$(CXX) -isystem $(GT_PATH)/include -c $^ -o $@

basic_demo.exe: main.o sample1.o sample1_unittest.o libgtest.a
	$(CXX) $^ -pthread -o $@
	./$@

clean:
	rm -rf *.o
	rm -rf *.exe
