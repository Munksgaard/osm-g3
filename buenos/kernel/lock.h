#ifndef BUENOS_KERNEL_LOCK_H
#define BUENOS_KERNEL_LOCK_H

#include "spinlock.h"
#include "lib/types.h"

typedef struct lock_t {
    spinlock_t slock;
    uint32_t is_locked;
} lock_t;

int lock_reset(lock_t *lock);
void lock_acquire(lock_t *lock);
void lock_release(lock_t *lock);

#endif
