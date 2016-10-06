#include <iostream>

using namespace std;

int main(){
    std::cout<<"Welcome to This Weird Pizza Thing"<<std::endl;

    int slicesPerPie;
    std::cout<<"So, how many slices do you have per pizza pie?"<<std::endl;
    std::cin>>slicesPerPie;

    float piesTotal;
    std::cout<<"How many pizza pies do you have?"<<std::endl;
    std::cin>>piesTotal;

    float costTotal;
    std::cout<<"How much did it cost?"<<std::endl;
    std::cin>>costTotal;

    int people;
    std::cout<<"How many people do you have?"<<std::endl;
    std::cin>>people;

    std::cout<<"So here's how many slices each person gets:"<<std::endl;
    std::cout<< (slicesPerPie * piesTotal) / people <<std::endl;

    std::cout<<"And here's how much each person should pitch in:"<<std::endl;
    std::cout<< costTotal / people <<std::endl;

    std::cout<<"NOW GO AWAY"<<std::endl;

    return 0;
}


