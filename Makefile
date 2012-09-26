CFLAGS = -I. -I/usr/local/include -O3 -g

all: junk

junk: junk.c 
	$(CC) $(CFLAGS) -o junk junk.c $(LIBS)

install:
	/usr/bin/install junk /usr/local/bin/

clean:
	rm -f junk
