#ifndef logLib
    #define logLib

    #include <string>
    #include <ctime>
    #include <chrono>
    #include <fstream>

    namespace loglib{
        class Log{
            std::chrono::time_point<std::chrono::system_clock> time;
            std::string message;
            std::fstream logFileWriter;
        
        public:
            Log(){
                this->logFileWriter.open("debugger.txt", std::ios::app);
            }

            Log(std::string logFileName){
                this->logFileWriter.open(logFileName+".txt", std::ios::app);
            }

            bool isLogFileOpen(){
                if(logFileWriter.is_open()) return true;
                return false;
            };
            
            void writeLog(std::string message){
                if(!isLogFileOpen())return;
                
                logFileWriter  << "[" << "time" << "]\t" << message << "\n";  // outputs the content to the linked file
            }

            ~Log(){
                writeLog("Destroying log object");
                logFileWriter.close();
            }
        };
    }

#endif