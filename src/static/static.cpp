//for static key work
#include <iostream>

static int g_static_value = 1;

//when the static key word used in a normal variable changes the lifecycle of the variable;
void function_static_value(){

    //static_value initialized before main()
    static int static_value = 1;
    int normal_value = 1;

    static_value++;
    normal_value++;

    std::cout << "after plus , the value of static_value is " << static_value << "\n";
    std::cout << "after plus , the value of normal_value is " << normal_value << "\n";
}

//when ths static key word used in a function which means the function can only use in current file
static int static_function(){

    std::cout << "this is a static function\n";
    return 0;
}

int non_static_function(){

    std::cout << "this is a non-static function\n";
    return 0;
}

//when a static key word used in a class member function which means 
    //the function can be called directely without define an instance of this class
class A{
public:
    static void class_static_function(){
        std::cout << "this is class static function\n";
    }

    //when static used in class member varible which means all the class instacen exist only one this varible
    static int static_member_;         //this variable can only  initialize outside
    int normal_member = 20; 
};

int A::static_member_ = 10;

extern int test_static_function();

int main(int argc, char** argv){

    function_static_value();
    function_static_value();
    function_static_value();

    static_function();

    test_static_function();

    A::class_static_function();

    //all instance share same statice member.
    A instance1;
    instance1.static_member_ = 15;
    std::cout << "static_member_ is " << instance1.static_member_ << "\n";      //15
    A instance2;    
    instance2.static_member_ = 20;
    std::cout << "static_member_ is " << instance1.static_member_ << "\n";      //20
    std::cout << "static_member_ is " << instance2.static_member_ << "\n";      //20
}