

void init_io() {
    printf("Initializing I/O system...\n");
    sleep(2);
    printf("I/O System Initialized.\n");
}

void read_input() {
    char buffer[256];
    printf("Enter some input: ");
    fgets(buffer, 256, stdin);
    printf("You entered: %s\n", buffer);
}

void write_output(const char *message) {
    printf("Output: %s\n", message);
}
