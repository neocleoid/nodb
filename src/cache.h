#ifndef _CACHE_H_
#define _CACHE_H_

#include "page.h"
#include <inttypes.h>

struct page_cache
{
    page page_mem;
    page_addr page_proj;
    struct page_cache *next_page;
};

page new_page();
void free_page(page mem);

struct page_cache *new_page_cache();
void free_page_cache(struct page_cache *mem);

void set_page_type(page mem, page_type page_tp);
void set_page_overflow(page mem, page_addr overflow_addr);

page_type get_page_type(page mem);
page_addr get_page_overflow(page mem);


// not related functions



#endif