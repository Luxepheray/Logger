#include <iostream>
#include <fstream>

#include <ctime>

#include <string>

using namespace std;

class Logger {
public:
    Logger (string Log){
    myfile.open (Log.c_str(), ios::app); //opens new file
}
        void writeTomyfile (string Log){
            time_t t = time (0);
            struct tm * now = localtime ( & t );
            time_t rawtime;
            struct tm * timeinfo;
            char buffer[80];
            time (&rawtime);
            timeinfo = localtime (&rawtime);
            strftime(buffer,80,"%d-%m-%Y %I:%M:%S",timeinfo);
            std::string str (buffer);//All of this gets the current date and time
            myfile << str << "," << Log <<endl;//Adds next row, commas separate columns
}
~Logger(){
    myfile.close();//Closes file after ending the Logger class
}
private:
    ofstream myfile;

};
int main( int argc, char* argv[] ){
    Logger Log ("exampleLogger.csv");
    Log.writeTomyfile ("screw this");// Logs to the CSV file
      return 0;
}
