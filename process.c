#include<linux/syscalls.h>
#include<linux/kernel.h>
#include<linux/cred.h>
#include<linux/sched.h>

asmlinkage long husenprocess(void){
	struct task_struct *parent_proc=current->parent;
	printk("(Parent->pid): %d\n",parent_proc->pid);
	printk("(Parent->tgetid): %d\n",parent_proc->tgid);
	printk("(Current->pid): %d\n", current->pid);
	printk("(Current->tgetid): %d\n", current->tgid);
	return 0;
}
