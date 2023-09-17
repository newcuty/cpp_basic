#include <iostream>

//auto can be used in function defination
auto func(auto arg1){    
    std::cout << "this is func\n" << "i == " << arg1 << "\n";
    return -1;
}

int main(int argc, char** argv){

    //the type of var1 is int
    auto var1 = 10;

    //use the type of var1 to define var2;
    decltype(var1) var2;
    var2 = 10.0;

    //this defination is not allow, 
    //compile error:error: declaration of ‘auto var3’ has no initializer
    //auto var3;

    std::cout << "var1 is " << var1 << "\n";
    std::cout << "var2 is " << var2 << "\n";

    std::string str1("hello world");
    auto ret = func(str1);
    std::cout << "ret is " << ret << "\n";
}
