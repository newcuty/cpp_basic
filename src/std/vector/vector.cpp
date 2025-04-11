#include <iostream>
#include <vector>

#include "time_echo/time_echo.hpp"

void print_array(std::vector<int>& vector){

    for(size_t i = 0; i < vector.size(); i++){

        std::cout << "vector["<< i <<  "]" << " is " << vector[i] << "\n"; 
    }
}


int main(int argc, char* argv[]){

    util::time::TimeEcho time_echo;

    std::vector<int> vec1(0);
    vec1.resize(5);

    vec1.assign(3, 10);
    //vec1.assign(4, 1);

    print_array(vec1);

    //get vector elements as array[i] do, 
    time_echo.start();
    auto ele2 = vec1.at(2);
    time_echo.end();

    time_echo.start();
    ele2 = vec1[2];
    time_echo.end();

}