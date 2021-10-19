#include<linux/kernel.h>
#include<linux/syscalls.h>
#include<linux/cred.h>
#include<linux/sched.h>
#include<linux/uidgid.h>

SYSCALL_DEFINEO(husengetuid) {
	printk("User ID = %u\n", current_uid().val);
	return current_uid().val;
}


