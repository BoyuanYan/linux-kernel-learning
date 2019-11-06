## Phase 1

* compile kernel code:
  1. `make menuconfig`
  2. `make`
  3. `make modules_install`
  4. `make install`
* kernel module : `*.ko`
* install kernel module: `insmod hello.ko`
* see kernel log: `dmesg`
* uninstall kernel module: `rmmod hello.ko`

## Phase 2

insert init parameters.

* `module_param({param_name}, {param_type}, {read/write permission})`

R/W permission: S_IRUGO, S_IWUGO, S_IXUGO, S_IRWXUGO.

configuration methods:

1. execute `insmod {module_name} {param_name}= ` when load the module.
2. `echo {param_value} > /sys/modules/{module_name}/parameters/{param_name}`

## Phase 3

```shell
insmod hello.ko
rmmod hello.ko

insmod hello.ko param=3
rmmod hello.ko

insmod hello.ko
echo 5 > /sys/module/hello/parameters/param
rmmod hello.ko
```

The output using cmd `dmesg` is:

```
[48455.014109] Hello, world.    param=1024
[48471.505941] ByeBye.  param=1024

[48516.023392] Hello, world.    param=3
[48537.862962] ByeBye.  param=3

[48552.747301] Hello, world.    param=1024
[48587.748641] ByeBye.  param=5

```
