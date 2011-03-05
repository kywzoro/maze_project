#include <linux/module.h>
#include <linux/kernel.h>

void cleanup_module()
{
    printk(KERN_INFO "Short is the life of a kernel module.\n");
}
