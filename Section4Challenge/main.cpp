/**************************************************************************************************************
 *  Author: Joseph Denney
 * 
 * Date: 1.28.2021
 * Release Date: None
 * 
 * ***********************************************************************************************************/



#include <iostream>

int main() {
    
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100:" << std::endl;
    
    std::cin >> favorite_number;
// everything after this commented out line will be ignored by the compiler. 

    std::cout << "Amazing! That's my favorite number too!" << std::endl;
    std::cout << "No really!! " << favorite_number << " is my favorite number" << std::endl;
    
    return 0;
    
}