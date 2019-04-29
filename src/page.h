#ifndef _PAGE_H_
#define _PAGE_H_

#include <inttypes.h>

#define PAGE_SIZE 1024

#define PAGE_TYPE_SIZE 1
#define PAGE_ADDR_SIZE 8

#define PAGE_TYPE_OFFSET 0
#define PAGE_OVERFLOW_OFFSET 768

#define PAGE_META_OFFSET 48
#define PAGE_RESERVE_OFFSET 776

typedef unsigned char byte;
typedef uint64_t page_addr;
typedef unsigned char page_type;
typedef byte * page;

#endif