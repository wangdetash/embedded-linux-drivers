#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");
MODULE_DESCRIPTION("seperate file for initialisation");

int init_module(void)
{
	printk(KERN_ALERT "hello world \n");
	return 0;
}
