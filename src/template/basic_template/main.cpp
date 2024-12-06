#include <iostream>

//basic template class
template<typename T>
class Shape{
public:
    Shape(){};
    ~Shape(){};

    T GetMember() const{
        member_ = 10;
    }
private:
    T member_;
};

//basic template function
template<typename T>
T add(T a, T b){

    std::cout << "add called\n";
    return a + b;
}

int main(){

    Shape<int> shape_a;
    //this will leade a compile error, because member_ in read-only object,
    //so we can't call GetMember() function, and because it is a template function, if we do not call it,   
    //it will not be implemented, and there will be no compile error.
    //shape_a.GetMember();   
    
    auto sum = add<float>(1.2, 3.4);
    std::cout << "sum: " << sum << std::endl;
    std::cout << "main called\n";
}