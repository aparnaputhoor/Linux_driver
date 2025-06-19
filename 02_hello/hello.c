#include<linux/module.h>
#include<linux/init.h>


static int my_init(void);
static void my_exit(void);

static int __init my_init(void)
{
	printk("hello world initialise\n");
	return 0;
}

static void __init my_exit(void)
{
	printk("hello world goodbbye\n");
}


module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aparna");
MODULE_DESCRIPTION("A simple hello world linux kernel module");
