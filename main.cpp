#include <iostream>
#include <vector>

bool IsOdd (int n){
    return (n % 2) == 1;
}

int main(){

    // intialize vector of evens and odds
    int myints[] = {2, 4, 6, 1, 3, 4, 8};
    std::vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));

    std::vector<int>::const_iterator result = find_if(vec.begin(), vec.end(), IsOdd);

    if (result == vec.end())
        std::cout << "No odd numbers" << std::endl;
    else
        std::cout << "First odd number is at position " << result - vec.begin() << std::endl;

    return 0;
}
