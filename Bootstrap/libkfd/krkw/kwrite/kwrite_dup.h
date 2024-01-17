/*
 * Copyright (c) 2023 Félix Poulin-Bélanger. All rights reserved.
 */

#ifndef kwrite_dup_h
#define kwrite_dup_h

#include "../../../libkfd.h"

#include "../../info/static_info.h"
#include "../../common.h"

void kwrite_dup_init(struct kfd* kfd);

void kwrite_dup_allocate(struct kfd* kfd, uint64_t id);

bool kwrite_dup_search(struct kfd* kfd, uint64_t object_uaddr);

void kwrite_dup_kwrite(struct kfd* kfd, void* uaddr, uint64_t kaddr, uint64_t size);

void kwrite_dup_find_proc(struct kfd* kfd);

void kwrite_dup_deallocate(struct kfd* kfd, uint64_t id);

void kwrite_dup_free(struct kfd* kfd);

/*
 * 64-bit kwrite function.
 */

void kwrite_dup_kwrite_u64(struct kfd* kfd, uint64_t kaddr, uint64_t new_value);

#endif /* kwrite_dup_h */
