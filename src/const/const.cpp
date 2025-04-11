//const key word
//usage:
//as a const value:the value connot be modified
//as a const T* pointer: the value of the pointer cannot be modified 
//as a T const * pointer : the pointer cannot be modified
//a function with const return value: return value is same usage as former description

//#include <cstdio>
#include <iostream>

int function_const(){

    //const value
    const int value1 = 1;
    //value1 = 2; // this is not allowed

    //const T* pointer which is normal pointer
    char* str_base = "string1";
    const char* str1 = "string2";
    str1 = str_base;        //this is allowed, the pointer can point to other place
    //*str1 = "string3";      //this is not allowed, value of str1 pointer cannot be modified


    //T const* pointer  which is a const pointer
    char* const pointer1 = str_base;
    //pointer1 =  str1;           //this is not allowed, 
    *pointer1 = '0xA';             //this is allow, the value of pointer can modified


    //const T const* pointer which is also a const pointer 
    const char* const pointer2 = str_base;
    //ointer2 =  str1;        
    // (*pointer2 = '0xA';)         //! both is not allowed, the value of pointer can modified

}   


int function_constexpr(){

    int a = 10;
    int b = 20;
    //constexpr int c = 10 + 20;    //the value of c could accumlate the result immdielate
    int c = 1 + 2;

    int array_const[a] = {0,0};
    char array1[b] = {'c', 'a','b'};

    std::cout << "array_const[0] is " << array_const[0] << "\n";
}

//const value used as a return value is as same as which is used in the normal value
const int& function_return_const(){

    const int a = 0;
    return a;
}

int main(int argc, char** argv){
    function_constexpr();
}