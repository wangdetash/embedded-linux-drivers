//program for passing string into kernel module
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");

int i;
char *mystring;
module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "A character string");

int init_module(void)
{
printk(KERN_ALERT "Hello, world \n=============\n");
printk(KERN_ALERT "mystring is a string: %s\n", mystring);
return 0;
}


void cleanup_module(void)
{
printk(KERN_ALERT "Goodbye, world \n");
}
