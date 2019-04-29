#include "page.h"
#include "cache.h"

int main(int argc, char **argv)
{
    struct page_cache *cac = new_page_cache();
    set_page_type(cac->page_mem, 0);
    set_page_overflow(cac->page_mem, 655432123);
    printf("type: %d\n", get_page_type(cac->page_mem));
    printf("overflow address: %lld\n", get_page_overflow(cac->page_mem));
    return 0;
}