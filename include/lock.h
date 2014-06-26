#ifndef __LOCK_H__
#define __LOCK_H__
#define VOLATILE(type,var) (*(( volatile type*)(&var)))
#define LOCK_BUSY 1
typedef unsigned spinlock;
#define barrier() asm volatile("": : :"memory")
#define cpu_relax() asm volatile("pause\n": : :"memory")

static inline unsigned xchg_32(void *ptr, unsigned x)
{
    __asm__ __volatile__("xchgl %0,%1"
                         :"=r" ((unsigned) x)
                         :"m" (*(volatile unsigned *)ptr), "0" (x)
                         :"memory");
    return x;
}

static void spin_lock(spinlock *lock)
{
    while (1)
	{
	    if (!xchg_32(lock, LOCK_BUSY)) return;
	    while (*lock) cpu_relax();
	}
}

static void spin_unlock(spinlock *lock)
{
    barrier();
    *lock = 0;
}
#endif
