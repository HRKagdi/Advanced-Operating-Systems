#include <linux/kernel.h>

asmlinkage long husenhello(void)
{
        printk("Welcome Back Hussain\n");
        return 0;
}
