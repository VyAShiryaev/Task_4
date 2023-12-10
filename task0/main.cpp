#include "temp_calc.h"

//cmake -G  "MinGW Makefiles" ../

int main(){

    My_calc num1, num2, num3;
    double a = 2,b = 5;
    int c = 2.5,d = 5.5;
    char e = 2, f = 5;

    std::cout << num1.sum(a,b) << "\n";
    std::cout << num1.sub(a,b) << "\n";
    std::cout << num1.mult(a,b) << "\n";
    std::cout << num1.div(a,b) << "\n";
    std::cout << num2.sum(c,d) << "\n";
    std::cout << num2.sub(c,d) << "\n";
    std::cout << num2.mult(c,d) << "\n";
    std::cout << num2.div(c,d) << "\n";
    std::cout << static_cast<double>(num3.sum(e,f)) << "\n";
    std::cout << static_cast<double>(num3.sub(e,f)) << "\n";
    std::cout << static_cast<double>(num3.mult(e,f)) << "\n";
    std::cout << static_cast<double>(num3.div(e,f)) << "\n";

    return 0;
}