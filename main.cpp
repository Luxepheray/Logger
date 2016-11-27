#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
class Logger {
public:
    Logger(const std::string Log){
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
    Log.writeTomyfile = ("colonClench, Kill\n" );
      return Log;
}
