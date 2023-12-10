#include "comp.h"

//cmake -G  "MinGW Makefiles" ../
void check()
{
    std::string s1 = "BAD";
    std::string s2 = "ABA";
    Comp <double>num1;Comp <int>num2;Comp <char>num3;Comp <std::string>num4;
    double a=10.4, b=2;
    int c=10, d=2;
    char e=10, f=2;

    std::cout << num1.sum(a,b) << "\n";
    std::cout << num1.compare(a,b) << "\n";
    std::cout << num2.sum(c,d) << "\n";
    std::cout << num2.compare(c,d) << "\n";
    std::cout << num3.sum(e,f) << "\n";
    std::cout << num3.compare(e,f) << "\n";
    std::cout << num4.sum(s1,s2) << "\n";
    std::cout << num4.More(s1,s2) << "\n";
}

int main(){

    check();
    return 0;
}