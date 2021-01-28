#include <iostream>

int main() 
{
    int favorite_number;
    
    std::cout << "How old are you?" << std::endl;
    std::cin >> favorite_number;

if (favorite_number > 17) 
{
    std::cout << "yes, you can vote!" << std::endl;
}

    return 0;
}