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

void test(){
    logUser.writeLog("Creating multiple person");
    person::Person user1;
    person::Person user2("Christy");
    person::Person user3("Kelly", 40);
    person::Person user4("Adrian", 35, 'M');
}

void start(){
    logDebugger.writeLog("Start of \'start\' function");
    
    std::cout << "Enter the number associated with the action\n";
    std::cout << "0. Exit\n";
    std::cout << "1. List Books\n";

    int choice = -1;
    while(choice != 0){
        std::cout << "Enter your choice:\n";
        
        logDebugger.writeLog("Waiting for input of choice from the user");
        std::cin >> choice;
        logDebugger.writeLog("Input of choice was given by the user");
        
        logDebugger.writeLog("Start of Matching the inputted choice");
        switch(choice){
            case 0:{
                logDebugger.writeLog("User selected option 0");
                break;
            }
            case 1:{
                logDebugger.writeLog("User selected option 1");
                break;
            }
            case 2:{
                logDebugger.writeLog("User selected option 2");

                break;
            }
            default:{
                logDebugger.writeLog("User entered invalid option");

                std::cout << "Invalid Input\n";
                break;
            }
        };
        logDebugger.writeLog("End of matching of the inputted choice");
    }
    
    logDebugger.writeLog("End of \'start\' function");
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

    logDebugger.writeLog("Calling \'test\' function");
    test();
    logDebugger.writeLog("Returned from \'test\' function");

    logDebugger.writeLog("Calling \'start\' function");
    start();
    logDebugger.writeLog("Returned from \'start\' function");
    
    logDebugger.writeLog("End of main function");
    return 0;
};