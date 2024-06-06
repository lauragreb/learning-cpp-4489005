// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // global variable (accessable to all parts of code)

/* multi
line
comment */

int main(){
    bool my_flag; // local variable
    a = 7; 
    my_flag = false; 
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true; 
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
