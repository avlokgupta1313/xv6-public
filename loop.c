#include "types.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "x86.h"
#include "proc.h"
#include "spinlock.h"

int main()
{
    fork();
    fork();
    fork();
    fork();
    int j=0;
    for(int i = 0 ; i < 1E9 ; i++) j++;
    return 0;
}