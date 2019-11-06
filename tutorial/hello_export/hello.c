#include <linux/init.h>
#include <linux/module.h>

int param_ex = 2048;

static int hello_int(void)
{
    printk("Hello, world.\n");
    return 0;
}

static void hello_exit(void)
{
    printk("ByeBye.\n");
}

module_init(hello_int);
module_exit(hello_exit);

EXPORT_SYMBOL(param_ex);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("yanboyuan@bupt.edu.cn");
