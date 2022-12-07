.POSIX:

PREFIX = /usr/local
CC = cc
X11INC = -I/usr/X11R6/include/ -I/usr/local/include/libepoll-shim/
X11LIB = -L/usr/X11R6/lib/ -L/usr/local/lib/ -lepoll-shim

dwmblocks: dwmblocks.o
	$(CC) dwmblocks.o -lX11 $(X11LIB) $(X11INC) -o dwmblocks
dwmblocks.o: dwmblocks.c config.h
	$(CC) -c dwmblocks.c $(X11INC)
clean:
	rm -f *.o *.gch dwmblocks
install: dwmblocks
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks

.PHONY: clean install uninstall
