KERNEL_SRC=/root/linux-3.16.76

PWD=$(shell pwd)

obj-m += hello.o

all:
	make -C $(KERNEL_SRC) M=$(PWD) modules
	cp Module.symvers hello_import/
	cd hello_import && make

clean:
	rm -f *.ko *.o *.symvers *.cmd *.cmd.o *.mod.* *.order
	cd hello_import && make clean

install:
	insmod hello.ko
	insmod hello_import/hello_import.ko

uninstall:
	rmmod hello_import.ko
	rmmod hello.ko
