#include <linux/init.h>
#include <linux/module.h>

extern int param_ex;


static int hello_import_init(void)
{
    printk("Hello, world.\tparam_import=%d\n", param_ex);
    return 0;
}

static void hello_import_exit(void)
{
    printk("ByeBye.\n");
}

module_init(hello_import_init);
module_exit(hello_import_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello import module ");
MODULE_AUTHOR("yanboyuan@bupt.edu.cn");
