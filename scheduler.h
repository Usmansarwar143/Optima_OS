void scheduler(Process *processes[], int num_processes) {
    int current_process = 0;

    while (1) {
        int active_processes = 0;

        for (int i = 0; i < num_processes; i++) {
            if (processes[i]->state == READY || processes[i]->state == RUNNING) {
                active_processes++;
            }
        }

        if (active_processes == 0) {
            break; 
        }

        // First Come First Serve (FCFS) Algorithm
        if (processes[current_process]->state == READY) {
            processes[current_process]->state = RUNNING;
            printf("Running: %s\n", processes[current_process]->name);
            processes[current_process]->function();
            processes[current_process]->state = TERMINATED;
            printf("%s has terminated.\n", processes[current_process]->name);
        }
        current_process = (current_process + 1) % num_processes;
    }
}