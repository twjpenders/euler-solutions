CC = gcc
CFLAGS = -g -Wall

TARGET = problem3
SOURCES = main

all: $(TARGET)

$(TARGET): $(SOURCES).c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES).c $(LDFLAGS)

clean:
	$(RM) $(TARGET)
