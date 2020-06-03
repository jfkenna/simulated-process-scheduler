#ifndef SORTED_H
#define SORTED_H
typedef struct Sorted_mem_pages sorted_mem_pages;
struct Sorted_mem_pages{
    unsigned long len; //number of elements
    unsigned long alloced_len; //number of elements that can fit in allocated memory
    unsigned long* page_array;
};

sorted_mem_pages** create_hash_table();
sorted_mem_pages* populate_free_memory_pool(unsigned long available_memory);
sorted_mem_pages* construct_mem_pages();
unsigned long page_array_pop_last(sorted_mem_pages* page_storage);
void page_array_insert(sorted_mem_pages* page_storage, unsigned long page_number);
void process_evict(sorted_mem_pages* free_memory_pool, sorted_mem_pages* page_storage, unsigned long n_pages_to_keep, unsigned long current_time, sorted_mem_pages* temp_evicted_pages);
void print_evict(sorted_mem_pages* temp_evicted_pages, unsigned long current_time);
void free_sorted_mem_pages(sorted_mem_pages* target);
#endif