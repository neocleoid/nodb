#include "cache.h"
#include "util.h"
#include <string.h>

page new_page()
{
    return (page)malloc(sizeof(byte) * PAGE_SIZE);
}

void free_page(page mem)
{
    free(mem);
}

struct page_cache *new_page_cache()
{
    struct page_cache *res = (struct page_cache *)malloc(sizeof(struct page_cache));
    res->next_page = nil;
    res->page_mem = new_page();
    res->page_proj = 0;
    return res;
}

void free_page_cache(struct page_cache *mem)
{
    free_page(mem->page_mem);
    free(mem);
}

void set_page_type(page mem, page_type page_tp)
{
    memcpy(mem + PAGE_TYPE_OFFSET, &page_tp, PAGE_TYPE_SIZE);
}

void set_page_overflow(page mem, page_addr overflow_addr)
{
    memcpy(mem + PAGE_OVERFLOW_OFFSET, &overflow_addr, PAGE_ADDR_SIZE);
}

page_type get_page_type(page mem)
{
    page_type page_tp;
    memcpy(&page_tp, mem + PAGE_TYPE_OFFSET, PAGE_TYPE_SIZE);
    return page_tp;
}

page_addr get_page_overflow(page mem)
{
    page_addr overflow_addr;
    memcpy(&overflow_addr, mem + PAGE_OVERFLOW_OFFSET, PAGE_ADDR_SIZE);
    return overflow_addr;
}