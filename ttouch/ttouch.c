#include <linux/kernel.h>
asmlinkage long sys_ttouch(const char __user *filename) {
  printk( "\n\n Greetings from the ttouch command! \n" );
  return 100;
}

