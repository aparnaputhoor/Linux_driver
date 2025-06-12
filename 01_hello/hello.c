#include<linux/module.h>
#include<linux/init.h>


int my_init(void);
void my_exit(void);

int my_init(void)
{
	printk("hello world initialise\n");
	return 0;
}

void my_exit(void)
{
	printk("hello world goodbbye\n");
}


module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
