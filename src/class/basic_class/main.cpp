#include <iostream>
#include "basic_class.h"

int main(int argc, char** argv){

    BasicClass bc;
    bc.setData(5);

    BasicClass bc2;
    bc2.setData(20);

    BasicClass bc3 = std::move(bc2);
    std::cout << "bc3 data: " << bc3.getData() << std::endl;

    BasicClass bc4 = bc;
    int&& ref = std::move(10);
    ref = 20;

    BasicClass bc5;
    bc5.setData(30);
    bc4 = bc5;

    std::cout << "bc5 data: " << bc5.getData() << std::endl;
    std::cout << "this is a basic class demo\n";    
}