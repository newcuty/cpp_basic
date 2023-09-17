#include <iostream>

//this is a basic enum class defination
enum Color:char{

    RED = 0x01,
    YELLOW,
    BLUE

};

int func_enum(Color& color){

    std::cout << "Color is " << color << "\n";

}

int main(int argc, char** argv){

    
    std::cout << "color RED is " << Color::RED << "\n";

    Color color1(Color::YELLOW);
    Color color2;
    func_enum(color1);

    //by default the color2 is 0;
    func_enum(color2);

}