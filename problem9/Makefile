CC = gcc
CFLAGS = -g -Wall

TARGET = problem9
SOURCES = main
LDFLAGS = -lm

all: $(TARGET)

$(TARGET): $(SOURCES).c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES).c $(LDFLAGS)

clean:
	$(RM) $(TARGET)
