#include <iostream>
#include <fstream>
#include <ctime>
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
            fs_.open("exampleLog.csv", std::ios_base::app);//creates new file
            myfile.open ("exampleLog.csv", std::ios_base::app); //opens new file
    }
     void writeTomyfile(std::string stuffz){
         time_t t = time(0);
         struct tm * now = localtime( & t );
        myfile << (now->tm_mday) <<std::endl;//Adds first row
}
    ~Logger(){
        myfile.close();
}
private:
    std::ofstream myfile;

};
int main( int argc, char* argv[] ){
    Logger Log = Logger("exampleLog.csv");
    Logger& 1 = Logger::getLogger();
    Log.writeTomyfile = ("colonClench, Kill\n" );
      return Log;
}
