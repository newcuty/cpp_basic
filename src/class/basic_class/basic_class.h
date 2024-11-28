#ifndef BASIC_CLASS_H
#define BASIC_CLASS_H

#include <iostream>

class BasicClass {
public:
    explicit BasicClass();
    ~BasicClass();

    //move constructor
    BasicClass(BasicClass&& other);

    //copy constructor
    BasicClass(const BasicClass& other);

    //set data 
    void setData(int data);
    //get data
    int getData() const;

private:    
    int data_;
    const int& refe_data_ = data_;

};  //class BasicClass

#endif // BASIC_CLASS_H