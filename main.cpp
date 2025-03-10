/*#include <iostream>
#include <thread>


void foo(int z) {
    for(int i = 0; i != 0 ; i++)
        std::cout<<"Thread using function foo\n";
}
class thread_obj {
public:
    void operator()(int x) {
        for(int i = 0; i != x ; i++ )
            std::cout<<"Thread using thread_obj\n";
    }
};
class Base {
public:
    void foo() {
        std::cout<<"Thread using member function foo()\n";
    }
    static void foo1() {
        std::cout<<"Thread using static member function foo1()\n";
    }
};
int main() {
    std::thread t1(foo,3);
    std::thread t2(thread_obj(),3);
    auto f = [](int x) {
        for(int i = 0; i != x; ++i)
            std::cout<<"Thread using lambda\n";
    };
    std::thread t3(f,3);
    Base b;
    std::thread t4(&Base::foo,&b);
    std::thread t5(&Base::foo1);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
}*/
