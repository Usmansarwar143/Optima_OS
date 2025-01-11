char shared_memory[256];

void init_memory() {
    printf("Initializing memory management...\n");
    sleep(2);
    printf("Memory Management Initialized.\n");
}
void *allocate_memory(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    return ptr;
}
void deallocate_memory(void *ptr) {
    free(ptr);
}