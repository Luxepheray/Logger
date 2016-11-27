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
            fs_.open("exampleLog.csv", std::ios::app);//creates new file
            myfile.open ("exampleLog.csv", std::ios::app); //opens new file
    }
     void writeTomyfile(std::string stuffz){

      myfile << "Timestamp"<<std::endl;//Adds first row
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
      return 0;
}
