#include <iostream>
#include <map>
#include <chrono>

struct point {
    int x, y;
};

int main() {
    std::map<int, int> map_find;

    for (int i = 0; i < 10; i++) {
        map_find[i] = i;
    }

    auto itr = map_find.find(5);
    if (itr != map_find.end())
    {   
        auto start1 = std::chrono::high_resolution_clock::now();
        std::cout << "map_find[10] = " << map_find[5] << "\n";
        auto end1 = std::chrono::high_resolution_clock::now();
        auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1);
        std::cout << "Time taken by map_find[10] = " << duration1.count() << " microseconds" << std::endl;

        auto start = std::chrono::high_resolution_clock::now();
        std::cout << "map_find.itr->second = " << itr->second << "\n";
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        std::cout << "Time taken by map_find.at(10) = " << duration.count() << " microseconds" << std::endl;

    }

    auto itr = map_find.find(4);
    if (itr != map_find.end())
    {   
        auto start1 = std::chrono::high_resolution_clock::now();
        map_find.erase(itr);
        auto end1 = std::chrono::high_resolution_clock::now();
        auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1);
        std::cout << "Time taken by map_find[10] = " << duration1.count() << " microseconds" << std::endl;

        auto start = std::chrono::high_resolution_clock::now();
        std::cout << "map_find.itr->second = " << itr->second << "\n";
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        std::cout << "Time taken by map_find.at(10) = " << duration.count() << " microseconds" << std::endl;

    }

    

}