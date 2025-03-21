/*#include <iostream>
#include <thread>
#include <shared_mutex>
#include <mutex>

std::shared_mutex mtx;
int shared_data = 11;
void readData() {
    std::shared_lock<std::shared_mutex> lock(mtx);
    std::cout<<"Thread "<<std::this_thread::get_id()<<": "<<shared_data<<"\n";
    sleep(1000);
    std::cout<<"Thread "<<std::this_thread::get_id()<<"exited mutex\n";
}
void writeData(int n) {
    std::unique_lock<std::shared_mutex> lock(mtx);
    shared_data = n;
    std::cout<<"Thread "<<std::this_thread::get_id()<<". \n";
}
int main() {
    std::thread t1(readData);
    std::thread t2(writeData,42);
    std::thread t3(writeData,100);
    std::thread t4(readData);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    return 0;
}*/
