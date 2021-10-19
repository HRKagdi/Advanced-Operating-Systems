#include<linux/syscalls.h>
#include<linux/kernel.h>

asmlinkage long husenprint(char * msg){
	char buffer[512];
	long copy=strncpy_from_user(buffer,msg,sizeof(buffer));
	if(copy<0 || copy==sizeof(buffer)){
		return -EFAULT;
	}
	printk(KERN_INFO "Husen passed the parameter %s in the systen call \n",buffer);
	return 0;
}
