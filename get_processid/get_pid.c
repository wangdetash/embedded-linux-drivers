//kernel module providing process id of current process
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tashi George");

int init_module(void)
{
	printk(KERN_ALERT "The process is \"%s\" (pid %i)\n",current->comm, current->pid);
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_ALERT"removed module \n");
}
