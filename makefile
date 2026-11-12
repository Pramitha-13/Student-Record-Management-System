CC = gcc
TARGET = student

SRCS = main.c add.c print.c count.c save.c reverse.c deleteall.c delete.c sort.c modify.c exit.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c header.h
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
