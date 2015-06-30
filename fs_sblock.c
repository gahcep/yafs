#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("s.gahcep");
MODULE_DESCRIPTION("Test Kernel Module");

static int __init fs_init(void)
{
    printk(KERN_INFO "Test Module is Loaded!\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit fs_cleanup(void)
{
    printk(KERN_INFO "Testing Module is Unloaded.\n");
}

module_init(fs_init);
module_exit(fs_cleanup);
