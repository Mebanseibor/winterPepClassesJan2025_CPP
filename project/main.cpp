#include <iostream>
#include "log.h"
#include "person.h"

#define LOGDEBUGGER "debugger"

void errorLogFile(){
    std::cout << "ERROR: Cannot open Log file \n";
    std::cout << "Press any button to exit";
    std::string temp;
    std::cin >> temp;
}

int main(){
    loglib::Log logDebugger(LOGDEBUGGER);
    
    if(!logDebugger.isLogFileOpen()){
        errorLogFile();
        return 1;
    }
    
    logDebugger.writeLog("Created a log object");
    
    loglib::Log logUser("User");
    if(!logUser.isLogFileOpen()){
        errorLogFile();
        return 1;
    }
    
    logUser.writeLog("Creating multiple person");
    person::Person user1;
    person::Person user2("Christy");
    person::Person user3("Kelly", 40);
    person::Person user4("Adrian", 35, 'M');
    
    logDebugger.writeLog("End of main function");

    return 0;
};