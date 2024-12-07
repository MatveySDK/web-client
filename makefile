TARGET = ./client

SRC = \
	  ./src/main.cpp

$(TARGET):
	g++ $(SRC) -o $(TARGET) -lcurl
