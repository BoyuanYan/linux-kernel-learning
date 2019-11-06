#include <linux/init.h>
#include <linux/module.h>

static int param=1024;

static int hello_init(void)
{
    printk("Hello, world.\tparam=%d\n", param);
    return 0;
}

static void hello_exit(void)
{
    printk("ByeBye.\tparam=%d\n", param);
}

module_init(hello_init);
module_exit(hello_exit);
module_param(param, int, S_IRUGO | S_IWUGO);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("yanboyuan@bupt.edu.cn");
