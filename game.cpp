// #include -> Preprocessor directive
// used to include library before compiling
// <iostream> -> header file
#include <iostream>

int main()
{
    // std -> namespace
    // :: -> scope operator
    // cout -> is defined in std namespace
    std::cout << "You you are trying to break into the mind of a genius\n"; // this is an expression
    std::cout << std::endl;
    std::cout << "Try and guess the code";
    std::cout << std::endl;

    int a = 42;
    int b = 56;
    int c = 2;
    int sum = a + b + c;
    int product = a * b * c;

    std::cout << sum;
    std::cout << std::endl;
    std::cout << product;
    std::cout << std::endl;

    return 0;
}