#include <stdio.h>
#include <pthread.h>
pthread_mutex_t shared_memory_lock;
int notepad_app(void) {
	pthread_mutex_lock(&shared_memory_lock);
	//Critical Section
    printf("Notepad: Opened a blank text editor.\n");
    system("notepad");
    sleep(1); 
    pthread_mutex_unlock(&shared_memory_lock);
    return 0;
}

int file_manager_app(void) {
	pthread_mutex_lock(&shared_memory_lock);
	//Critical Section
    printf("File Manager: Displaying files and directories.\n");
    system("explorer"); 
    sleep(1);
    pthread_mutex_unlock(&shared_memory_lock);
    return 0;
}

int system_info_app(void) {
	pthread_mutex_lock(&shared_memory_lock);
	//Critical Section
    printf("System Info: Displaying system specifications.\n");
    system("systeminfo"); 
    sleep(1); 
    pthread_mutex_unlock(&shared_memory_lock);
    return 0;
}