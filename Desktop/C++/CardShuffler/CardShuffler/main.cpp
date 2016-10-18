#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <unistd.h>
using namespace std;
class Cards{
    public:
    std::string Number [14] = {"Ace", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    std::string Suits [4] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    std::string DANGCOLOR [2] = {"Red", "Black"};
};
void loop(){
    int i;
    for(i=0;i<52;i++){
    Cards cardshuffle;
    std::cout << cardshuffle.DANGCOLOR[rand() %2] << std::flush;
    std::cout << cardshuffle.Number[rand() %14] << std::flush;
    std::cout << " of " << std::flush;
    std::cout << cardshuffle.Suits [rand() %4] << std::endl;
    sleep(1);
    }

   }
int main(){
srand(time(NULL));
    loop();
    return 0;
}




