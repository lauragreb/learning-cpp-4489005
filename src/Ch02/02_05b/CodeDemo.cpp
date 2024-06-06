// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8; //int
    auto b = 12345678901; //long
    auto c = 3.14f; //float
    auto d = 3.14; //double
    auto e = true; //boolean
    auto f = 'd';   //character
    auto g = "C++ rocks!"; //pointer to const char (string)

    std::cout << "The type of a is " << typeid(a).name() << std::endl;
    std::cout << "The type of b is " << typeid(b).name() << std::endl;
    std::cout << "The type of c is " << typeid(c).name() << std::endl;
    std::cout << "The type of d is " << typeid(d).name() << std::endl;
    std::cout << "The type of e is " << typeid(e).name() << std::endl;
    std::cout << "The type of f is " << typeid(f).name() << std::endl;
    std::cout << "The type of g is " << typeid(g).name() << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
