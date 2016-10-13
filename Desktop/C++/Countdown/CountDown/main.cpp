#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int main(){
    int initTime;
    std::cout << "How many seconds?" << std::endl;
    for (std::cin >> initTime;initTime >= 0;initTime--){
    std::cout << initTime<<std::endl;
    sleep(1);
    }
    return 0;

}
