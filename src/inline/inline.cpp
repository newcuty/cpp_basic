#include <iostream>

//use inline key word
inline void func_inline(){
    std::cout << "this is a inline function\n";   
}

//inline used in virtual function
class Base{

public:
    Base(){
        std::cout << "base construct\n";
    };

    inline virtual void BaseInlineFunction(){
        std::cout << "base inline function\n";
    }

    virtual ~Base(){
        std::cout << "base deconstruct\n";
    };
};

class Deriver:public Base{

public:
    Deriver(){
        std::cout << "Deriver construct\n";
    };

    inline virtual void BaseInlineFunction(){
        std::cout << "Deriver inline function\n";
    }

    ~Deriver(){
        std::cout << "Deriver deconstruct\n";
    };
};

int main(int argc, char** argv){
    func_inline();

    Base base;
    base.BaseInlineFunction();

    Base* basePtr = new Deriver();
    basePtr->BaseInlineFunction();

    delete basePtr;
    basePtr = nullptr;

}