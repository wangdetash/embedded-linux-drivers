//program for passing argument into kernel module
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");

int myint = 420;
module_param(myint, int, 0);
MODULE_PARM_DESC(myint, "An integer");

int init_module(void)
{
printk(KERN_INFO "Hello, world \n=============\n");
printk(KERN_INFO "myint is an integer: %d\n", myint);
return 0;
}


void cleanup_module(void)
{
printk(KERN_INFO "Goodbye, world \n");
}
