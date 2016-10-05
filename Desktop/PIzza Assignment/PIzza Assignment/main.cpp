#include <iostream>

using namespace std;

int main()
{
std::cout<<"Welcome to This Weird Pizza Thing"<<std::endl;

float i;
std::cout<<"So, how many slices do you have per pizza pie?"<<std::endl;
std::cin>>i;

float d;
std::cout<<"How many pizza pies do you have?"<<std::endl;
std::cin>>d;

float a;
std::cout<<"How much did it cost?"<<std::endl;
std::cin>>a;

float b;
std::cout<<"How many people do you have?"<<std::endl;
std::cin>>b;

std:cout<<"So here's how many slices each person gets:"<<std::endl;
std::cout<< (i*d)/b<<std::endl;

std::cout<<"And here's how much each person should pitch in:"<<std::endl;
std::cout<< a/b<<std::endl;

std::cout<<"NOW GO AWAY"<<std::endl;

return 0;
}


