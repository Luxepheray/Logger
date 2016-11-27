#include <iostream>
#include <fstream>
using namespace std;
class Logger {
public:
std::ofstream fs_;
    const std::string separator_;
public:
    Logger(const std::string Log, const std::string separator = ";")//sets separators
        : fs_()
        , separator_(separator)
    {
            fs_.exceptions(std::ios::failbit | std::ios::badbit);
            fs_.open("exampleLog.csv");//creates new file
    }
     myfile;
      myfile.open ("exampleLog.csv"); //opens new file
      myfile << "I guess date/time go here.\n";//Adds first row
      myfile << "dateTime,bs,c,\n";//new row; I should learn how to loop this
      myfile << "dateTime,sick,v,\n";
      myfile << "dateTime,2,3.1415\n";
      myfile << "dateTime,colonClench";
      myfile.close();
private:
    std::ofstream myfile;

};
int main( int argc, char* argv[] )
{

      return 0;
}
