# **OPTIMA OS**  
> A semester project showcasing the core mechanisms of operating systems.  

## 📋 **Project Overview**  
**OPTIMA OS** is a mini operating system designed to demonstrate key functionalities of modern OSes, including:  
- **Process Management** using First-Come, First-Serve (FCFS) scheduling.  
- **Memory Management** with dynamic allocation and deallocation using `malloc`.  
- **Inter-Process Communication** through shared memory for efficient communication.  
- **Process Synchronization** using mutex locks to ensure system integrity.  
- **I/O Handling** via Windows system calls for real-time interaction.  

The interface is a Command-Line Interface (CLI) that initializes the core systems and provides users with the following menu options:  
1. Open Notepad  
2. Open File Explorer  
3. Show System Specifications  
4. Shut Down the OS  

---

## 💡 **Features**  
- **Core Systems Initialization**: Simulates OS initialization processes.  
- **Interactive CLI**: Allows user input to perform specific actions.  
- **Windows System Calls**: Opens applications and retrieves system information.  
- **Efficient Mechanisms**: Implements core OS concepts like memory and process management.  

---

## 🔧 **Getting Started**  

### **Prerequisites**  
- **Windows OS**: Required for system calls.  
- **GCC Compiler**: Ensure `gcc` is installed for compiling the code.  

### **Installation and Usage**  

Follow these steps to download, compile, and run the project:  

```bash
# Step 1: Clone the repository
git clone https://github.com/Usmansarwar143/Optima_OS.git

# Step 2: Navigate to the project directory
cd OPTIMA_OS

# Step 3: Compile the project using GCC
gcc -o optima_os main.c

# Step 4: Run the OS to initialize and interact with the interface
./optima_os
```

---

## 🛠️ **Implementation Details**  

### **Key Mechanisms**  
1. **Process Management**: Implements FCFS scheduling.  
2. **Memory Management**: Uses `malloc` for dynamic memory allocation.  
3. **Inter-Process Communication**: Shared memory implementation enables communication between processes.  
4. **Process Synchronization**: Mutex locks prevent race conditions.  
5. **I/O Handling**: Windows system calls for seamless integration with the host system.  

### **Interface**  
The CLI initializes core systems and presents a user-friendly menu:  
- **Option 1**: Launch Notepad using a system call.  
- **Option 2**: Open File Explorer.  
- **Option 3**: Display system specifications such as CPU and memory.  
- **Option 4**: Exit the program safely.  

---

## 🤝 **Acknowledgments**  
This project was developed as part of our **Semester Project** for the **Embedded Systems Course** under the guidance of:  
- **Dr. Mumtaz Kaloi** (Course Instructor)  
- **Sir Abdul Sattar Chan** (Head of Department)  

Collaborators:  
- **Usman Sarwar**  
- **Asma Channa**  

---  

---

## 🌟 **Contact**  
For queries or feedback, feel free to reach out:  
- **Usman Sarwar**: [LinkedIn](https://www.linkedin.com/in/muhammad-usman-018535253/)  
- **Asma Channa**: [LinkedIn](https://www.linkedin.com/iasmachanna)  

### Thanks For Reaching Out
