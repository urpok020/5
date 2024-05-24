#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("super-duper-mega-krytaya-license");
MODULE_AUTHOR("Viktor Vybotcev");
MODULE_DESCRIPTION("My custom Hello World kernel module");

static int __init hello_init(void) {
    printk(KERN_INFO "Hello World! This is a custom kernel module by Viktor Vybotcev\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye World! Custom module under super-duper-mega-krytaya-license\n");
}
module_init(hello_init);
module_exit(hello_exit);
