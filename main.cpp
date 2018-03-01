#include <iostream>
#include <vector>

#include "find_if.h"

bool IsOdd (int n){
    return (n % 2) == 1;
}

int main(){

    // intialize vector of evens and odds
    int myints[] = {2, 4, 6, 1, 3, 4, 8};
    std::vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));
    int myints2[] = {2, 4, 6};
    std::vector<int> vec2(myints2, myints2 + sizeof(myints2) / sizeof(int));

    // test first vector
    std::vector<int>::const_iterator result = find_if(vec.begin(), vec.end(), IsOdd);
    if (result == vec.end())
        std::cout << "No odd numbers in first container" << std::endl;
    else
        std::cout << "First odd number is at position " << result - vec.begin() << std::endl;

    std::cout << std::endl;

    // test second vector
    std::vector<int>::const_iterator result2 = find_if(vec2.begin(), vec2.end(), IsOdd);
    if (result2 == vec2.end())
        std::cout << "No odd numbers in second container" << std::endl;
    else
        std::cout << "First odd number is at position " << result - vec2.begin() << std::endl;

    return 0;
}
