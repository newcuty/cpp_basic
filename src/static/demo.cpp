
#include <iostream>

//reference of static values;
extern int non_static_function();
extern int static_function();

//this is will lead compile  error:undefined reference to `g_static_value'
//extern int g_static_value;

int test_static_function(){

    non_static_function();
    //static_function();         //this is will lead compile  error:undefined reference to `static_function()'

    //std::cout << "g_static_value: " << g_static_value << std::endl;
    return 0;
}