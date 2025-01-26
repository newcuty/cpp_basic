//const key word
//usage:
//as a const value:the value connot be modified
//as a const T* pointer: the value of the pointer cannot be modified 
//as a T const * pointer : the pointer cannot be modified
//a function with const return value: return value is same usage as former description

//#include <cstdio>
#include <iostream>

void function_const(){

    //const value
    const int value1 = 1;
    //value1 = 2; // this is not allowed

    const int value2 = 2;
    //int* p_value = &value2;  //this is not allow


    //const T* pointer which is normal pointer
    char* str_base = "string1";
    const char* str1 = "string2";
    str1 = str_base;        //this is allowed, the pointer can point to other place
    //*str1 = "string3";      //this is not"function_header.h" allowed


    //T const* pointer  which is a const pointer
    char* const pointer1 = str_base;
    //pointer1 =  str1;           //this is not allowed
    *pointer1 = '0xA';             //this is allow, the value of pointer can modified


    //const T const* pointer which is also a const pointer 
    const char* const pointer2 = str_base; //must initialize when defined
    //ointer2 =  str1;        
    //*pointer2 = '0xA';         //both is not allowed, the value of pointer can modified

}   


void function_constexpr(){

    constexpr int index = 10;
    constexpr int  b = 20;
    //constexpr int c = a + b;    //the value of c could accumlate the result immdielate
    int c = 1 + 2;

    int array_const[index] = {0,0};
    //char array1[b] = {'c', 'a','b'};

    //std::cout << "array_const[0] is " << array_const[0] << "\n";
}

//const value used as a return value is as same as which is used in the normal value
const int function_return_const(){

    const int a = 0;
    return a;
}

//const value in class member function
class ConstClass{
public:
    const int value = 10;
    int value2 = 20;
    const int getValue() const{
        return 20;
    }

    int set_value2() const{
        //value2 = 10;    //this is not allowed, const at last means the value cannot be modified
    }

    const int get_value2(){
        return value2 + 10; //this is allowed, const return value means the value cannot be modified
    }
};

int main(int argc, char** argv){
    function_constexpr();

    ConstClass obj;
    obj.getValue();
}