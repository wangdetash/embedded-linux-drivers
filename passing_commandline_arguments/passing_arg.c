#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");
MODULE_DESCRIPTION("program for passing integer and string into kernel module");

int myint;
char *mystring;

module_param(myint, int, 0);
MODULE_PARM_DESC(myint, "An integer");
module_param(mystring, charp,00000);
MODULE_PARM_DESC(mystring, "A character string");

int init_module(void)
{
printk(KERN_INFO "myint is an integer: %d\n", myint);
printk(KERN_INFO "mystring is a string: %s\n", mystring);
return 0;
}

void cleanup_module(void)
{
printk(KERN_ALERT "Goodbye, world \n");
}
