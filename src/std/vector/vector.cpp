#include <iostream>
#include <vector>

void print_array(std::vector<int>& vector){

    for(size_t i = 0; i < vector.size(); i++){

        std::cout << "vector["<< i <<  "]" << " is " << vector[i] << "\n"; 
    }
}


int main(int argc, char* argv[]){

    std::vector<int> vec1(0);
    vec1.resize(5);

    vec1.assign(3, 10);
    //vec1.assign(4, 1);

    print_array(vec1);


}