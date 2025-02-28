#include <variant>
#include <iostream>

int main() {
    std::variant<int,double> myExample;
    myExample = 11.01;
    std::cout<<std::get<double>(myExample)<<"\n";
}