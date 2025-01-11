
#define RUNNING 1
#define READY 2
#define TERMINATED 3


typedef struct Process {
    int id;             
    int state;         
    char *name;        
    int (*function)(void); 
} Process;

void init_processes(Process *processes[]) {
    processes[0] = (Process *)malloc(sizeof(Process));
    processes[0]->id = 1;
    processes[0]->name = "Notepad";
    processes[0]->state = READY;
    processes[0]->function = notepad_app;

    processes[1] = (Process *)malloc(sizeof(Process));
    processes[1]->id = 2;
    processes[1]->name = "File Manager";
    processes[1]->state = READY;
    processes[1]->function = file_manager_app;

    processes[2] = (Process *)malloc(sizeof(Process));
    processes[2]->id = 3;
    processes[2]->name = "System Info";
    processes[2]->state = READY;
    processes[2]->function = system_info_app;
}