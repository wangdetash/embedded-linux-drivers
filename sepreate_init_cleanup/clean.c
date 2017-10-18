#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");


void cleanup_module(void)
{
	printk(KERN_ALERT"good bye \n");
}
