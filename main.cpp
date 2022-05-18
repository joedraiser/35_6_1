#include <iostream>
#include <vector>

int main()
{
    for(auto ints:std::vector<int> ({1,2,3,4,5}))
        std::cout << ints;
    return 0;
}
