#include <sys/types.h>
#include <unistd.h>

#include <iostream>

int main(int argc, char** argv){

    std::cout << "this is fork2 process\n";
    if(argc > 0){
        for(int i = 0; i < argc; i++){
            std::cout << "argv is " << argv[i] << "\n";
        }
    }

    std::cout << "fork2 return normally\n";
    return 0;
}