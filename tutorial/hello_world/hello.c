#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
    printk("Hello, world.\n");
    return 0;
}

static void hello_exit(void)
{
    printk("ByeBye\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("yanboyuan@bupt.edu.cn");
