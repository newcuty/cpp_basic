#include <iostream>


void func_for(int* array, int array_size){




}

void init_array_without_value(){

    //initilize an array without any data
    int arrA[10];

    //access arrA, the value is 0 under gcc 11.3
    std::cout << "arrA[6] is " << arrA[6] << "\n";
    std::cout << "address of arrA[6] is " << &arrA[6] << "\n";

    //access value which out of arrA range is random value
    std::cout << "arrA[11] is " << arrA[11] << "\n";
    std::cout << "address of arrA[11] is " << &arrA[11] << "\n";

    //set the value which is out of arrA range is runnable, but this behavior course core dump
    //arrA[11] = 11;
    //std::cout << "arrA[11] is " << arrA[11] << "\n";

    //access the negative index value of array, same as 
    std::cout << "arrA[-10] is " << arrA[-10] << "\n";
    arrA[-10] = 1;
    std::cout << "arrA[-10] is " << arrA[-10] << "\n";
}

void init_array_with_value(){

    //initilize an array with data when define it
    int arrA[5] = {1, 2, 3, 4, 5};

    //initilize an array with data under for loop
    int arrB[5];

    //you better use unsigned int type to define the index 
    for(size_t i = 0; i < 5; i++){
        arrB[i] = i;
    }

}


int main(int argc, char** argv){
    init_array_without_value();

}
