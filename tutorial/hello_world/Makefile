KERNEL_SRC=/root/linux-3.16.76

PWD=$(shell pwd)

obj-m += hello.o

all:
	make -C $(KERNEL_SRC) M=$(PWD) modules

clean:
	rm -f *.ko *.o *.symvers *.cmd *.cmd.o *.mod.* *.order
