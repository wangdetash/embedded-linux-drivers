obj-m:=initialize.o
obj-m+=clean.o
all:
	make -C/lib/modules/${shell uname -r}/build M=${shell pwd} modules

clean:
	make -C/lib/modules/${shell uname -r}/build M=${shell pwd} clean
