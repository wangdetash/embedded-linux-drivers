#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");

int init_module(void)
{
	printk(KERN_INFO "hello world \n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO"good bye \n");
}
