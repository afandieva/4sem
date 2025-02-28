#include <iostream>

union student {
    int age;
    float averageScore;
    char* name;
};
/*int main() {
    student shaman;
    shaman.age = 15;
    std::cout<<"shaman age: "<<shaman.age<<"\n";
    shaman.averageScore = 2.5;
    std::cout<<"shaman score: "<<shaman.averageScore<<"\n";
    shaman.name = "ya russkiy";
    std::cout<<"shaman name: "<<shaman.name<<"\n";
    std::cout<<"Address 1: "<<&shaman.age<<"\n";
    std::cout<<"Address 2: "<<&shaman.averageScore<<"\n";
    std::cout<<"Address 3: "<<&shaman.name<<"\n";
    std::cout<<"Size of what???: "<<sizeof(shaman)<<"\n";

}*/
