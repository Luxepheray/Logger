#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;
class Logger {
public:
    Logger(const string Log){
            myfile.open ("exampleLogger.csv", ios::app); //opens new file
    }
     void writeTomyfile(string stuffz){

        myfile << (
            time_t t = time(0);
            struct tm * now = localtime( & t );
            time_t rawtime;
            struct tm * timeinfo;
            char buffer[80];
            time (&rawtime);
            timeinfo = localtime(&rawtime);
            strftime(buffer,80,"%d-%m-%Y %I:%M:%S",timeinfo);
            std::string str(buffer);) <<endl;//Adds first row
}
    ~Logger(){
        myfile.close();
}
private:
    ofstream myfile;

};
int main( int argc, char* argv[] ){
    Logger Log("exampleLogger.csv");
    Log.writeTomyfile("colonClench, Kill\n" );
      return 0;
}
