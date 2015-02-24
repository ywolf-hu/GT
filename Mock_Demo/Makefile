GT_PATH=~/workspace/gmock-1.7.0/gtest
GM_PATH=~/workspace/gmock-1.7.0

all: mock_demo.exe

%.o: %.cpp
	$(CXX) -isystem $(GT_PATH)/include -isystem $(GM_PATH)/include -c $^ -o $@

mock_demo.exe: main.o painter_unittest.o gmock.a Painter.o
	$(CXX) $^ -pthread -o $@
	./$@

clean:
	rm -rf *.o
	rm -rf *.exe
