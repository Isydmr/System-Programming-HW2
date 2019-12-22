#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <linux/kernel.h>
#include <linux/sched.h>
 
int main()
{
    int retVal;
    int PID;
    int nice_inc;
    printf("Enter PID: ");
    scanf("%d", &
    printf("Enter nice val: ");
    scan("%d", &nice_inc);
    // Call set_nice_inc (355)
    retVal = syscall(355, PID, nice_inc);
     
    return retVal;
}
