#include <sys/types.h>
#include <sys/wait.h>   //header of wait
#include <unistd.h>
#include <sys/stat.h>   // header of mkfifo
#include <cstring>      //header of strlen
#include <fcntl.h>      //header for open

//header for msggset,msgsnd,msgrcv 
#include <sys/ipc.h>     
#include <sys/msg.h>   
/////

#include <iostream>


constexpr int max_msg_size = 64;

void create_child_process(){
    std::cout << "process id is " << static_cast<int>(getpid()) << "\n";

    pid_t child = fork();   

    //child process will execute after fork() return,this will aviod keeping calling the fork();
    std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
    std::cout << "the return value is "<< child << "\n";

    if (child == 0){
        std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
        std::cout << "this is a child process\n";
    }
}

void child_process_exec(){

    //fork user pipe to communicate 
    int pipe_[2];
    char buf_pipe[32] = {0}; 
    char buf_fifo[32] = {0}; 
    int pipe_fork = pipe(pipe_);

    //create fifo
    int fifo_ret = mkfifo("./fifo", 0777);
    //open the fifo file before use the fifo to write data
    int fifo_fd = open("./fifo", O_RDWR);

    std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
    pid_t child = fork();   

    if (child > 0){

        std::string pipe_msg("pipe message");
        //the parent process send a hello to child process though pipe[1]
        write(pipe_[1], pipe_msg.c_str(), pipe_msg.size());

        //use fifo to send message to child process
        std::string fifo_msg("fifo message");
        write(fifo_fd, fifo_msg.c_str(), fifo_msg.size());
    }

    //when the process is child, create another elf file, use exec()
    if (child == 0){

        std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
        std::cout << "this is a child process\n";

        //the child process read for pipe[0]
        read(pipe_[0], buf_pipe, sizeof(buf_pipe));
        std::string msg_pipe(buf_pipe, strlen(buf_pipe));
        std::cout << "pipe message is :" << msg_pipe.c_str() << "\n";

        //read the message form fifo
        read(fifo_fd, buf_fifo, sizeof(buf_fifo));
        std::string msg_fifo(buf_fifo, strlen(buf_fifo));
        std::cout << "fifo message is :" << msg_fifo.c_str() << "\n";

        //close after use
        close(fifo_fd);

        int exec_ret = execl("/home/chen/demo_code/cpp_basic/build/fork/fork2", "fork2", "abcd",NULL);

        //once exec_ret is 1, the reset of code cannot be executeds
        std::cout << "exec_ret is " << exec_ret << "\n";
        perror("execl");
    }


    if(child > 0){

        int status;

        //use wait() to wait child process exit, the reset of code can be executed normally
        wait(&status);

        int ret = WIFEXITED(status);
        if (ret){
            std::cout << "child exit normally, exit value is " << ret << "\n";
        }
    }
}


void child_poress_msg(){

    //generator a token


    std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
    pid_t child = fork();   

    //child process will execute after fork() return,this will aviod keeping calling the fork();
    std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
    std::cout << "the return value is "<< child << "\n";

    if (child == 0){
        std::cout << "process id is " << static_cast<int>(getpid()) << "\n";
        std::cout << "this is a child process\n";
    }
    
}


int main(int argc, char** argv){

    //create_child_process();
    //child_process_exec();

    std::cout << "fork1 main return \n";

    return 0;
}