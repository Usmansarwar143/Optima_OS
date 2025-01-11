#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<pthread.h>

#include "memory.h"
#include "kernel.h"
#include "io.h"
#include "runfiles.h"
#include "process.h"
#include "scheduler.h"
#include "filesystem.h"

int main() {
	
	init_kernel();
    sleep(1);
    init_memory();
    sleep(1);
    init_file_system();
    sleep(1);
    init_io();
    printf("\n\n OPTIMA is getting Things Ready For you..........");
    sleep(3);
    
	system("cls");
    Process *processes[3];
    init_processes(processes);

    while (1) {
    	int choice;
        printf("\n====================================================================\n");
	    printf("\n=======================   ASSALAMUALAIKUM    =======================\n");
	    printf("\n======================= WELCOME TO OPTIMA OS =======================\n");
	    printf("\n====================================================================\n");
	    printf("\n====================================================================\n\n\n");
	    printf("Run Your Required plateform:\n");
	    printf("1. Open Notepad\n");
	    printf("2. Open File Manager\n");
	    printf("3. View System Information\n");
	    printf("4. Shutdown the OS\n");
	    printf("Your choice: ");
	    scanf("%d", &choice);
		
		switch(choice){
			case 1:
				if (processes[0]->state == TERMINATED) {
                printf("Error: Process already terminated.\n");
            	} else {
                scheduler(&processes[0], 1);
            	}
				break;
			case 2:
				if (processes[1]->state == TERMINATED) {
                printf("Error: Process already terminated.\n");
            	} else {
                scheduler(&processes[1], 1); 
            	}
            	break;
            case 3:
            	if (processes[2]->state == TERMINATED) {
                printf("Error: Process already terminated.\n");
            	} else {
                scheduler(&processes[2], 1); 
            	}
            	break;
            case 4:
            	printf("Shutting down OPTIMA OS...\n");
	            printf("ALLAH HAFIZ..............");
	            sleep(2);
	            system("cls");
	            exit(0);
	            break;
	        default:
	        	printf("Invalid choice! Try again.\n");
            	system("cls");
				break;
		}

    }
	
	pthread_mutex_destroy(&shared_memory_lock);
    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        deallocate_memory(processes[i]);
    }

    return 0;
}
