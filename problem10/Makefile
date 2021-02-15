CC = gcc
CFLAGS = -g -Wall

TARGET = problem10
SOURCES = main
LDFLAGS = -lm

all: $(TARGET)

$(TARGET): $(SOURCES).c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES).c $(LDFLAGS)

clean:
	$(RM) $(TARGET)
