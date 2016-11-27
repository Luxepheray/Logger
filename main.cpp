#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
class Logger {
public:
    Logger(const string Log){
            myfile.open ("exampleLog.csv", ios::app); //opens new file
    }
     void writeTomyfile(string stuffz){
         time_t t = time(0);
         struct tm * now = localtime( & t );
        myfile << (now->tm_mday) <<endl;//Adds first row
}
    ~Logger(){
        myfile.close();
}
private:
    ofstream myfile;

};
int main( int argc, char* argv[] ){
    Logger Log = Logger("exampleLog.csv");
    Log.writeTomyfile("colonClench, Kill\n" );
      return 0;
}
