#include <iostream>
#include "log.h"
#include "person.h"
#include "book.h"

#define LOGDEBUGGER "debugger"

loglib::Log logDebugger(LOGDEBUGGER);
loglib::Log logUser("User");

person::Customer CUSTOMERS[128];
// person::Librarian LIBRARIANS[128];
// book::Book BOOKS[128];

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

    book::Book book();
}


void retrieveCustomers(){};
void retrieveLibrarians(){};
void retrieveBooks(){};

void retrieveData(){
    retrieveCustomers();
    retrieveLibrarians();
    retrieveBooks();
}

void userAction(){
    logDebugger.writeLog("Start of \'userAction\' function");

    std::cout << "Enter the number associated with the action\n";
    std::cout << "0. Exit\n";
    std::cout << "1. List Books\n";

    int choice = -1;
    while(choice != 0){
        std::cout << "Enter your choice:\n";
        
        logDebugger.writeLog("Waiting for input of choice from the user");
        std::cin >> choice;
        logDebugger.writeLog("Input of choice was given by the user");
        
        logDebugger.writeLog("Start of the matching process for the inputted choice");
        
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
        logDebugger.writeLog("End of the matching process for the inputted choice");
    }
    
    logDebugger.writeLog("End of \'userAction\' function");
};

void signIn(){
    logDebugger.writeLog("Start of \'signIn\' function");

    std::cout << "Enter the number associated with the action\n";
    std::cout << "Enter user type\n";
    std::cout << "0. Exit\n";
    std::cout << "1. Customer\n";
    std::cout << "2. Librarian\n";

    int choice = -1;
    bool takeChoice = true;
    while(choice != 0 && takeChoice){
        std::cout << "Enter your choice:\n";
        
        logDebugger.writeLog("Waiting for input of choice from the user");
        std::cin >> choice;
        logDebugger.writeLog("Input of choice was given by the user");
        
        logDebugger.writeLog("Start of the matching process for the inputted choice");
        
        switch(choice){
            case 0:{
                logDebugger.writeLog("User selected option 0");
                break;
            }
            case 1:{
                logDebugger.writeLog("User selected option 1");
                takeChoice = false;
                break;
            }
            case 2:{
                logDebugger.writeLog("User selected option 2");
                takeChoice = false;
                break;
            }
            default:{
                logDebugger.writeLog("User entered invalid option");

                std::cout << "Invalid Input\n";
                break;
            }
        };
        logDebugger.writeLog("End of the matching process for the inputted choice");
    }
    
    logDebugger.writeLog("End of \'signIn\' function");
};

void signUp(){
    logDebugger.writeLog("Start of \'signUp\' function");
    
    
    std::string name;
    int age;
    char gender;

    std::cout << "Enter the following details\n";
    std::cout << "Enter your name: \n";
    std::cin >> name;
    
    std::cout << "Enter your age: \n";
    std::cin >> age;
    
    std::cout << "Enter your gender: \n";
    std::cin >> gender;

    char role;
    bool takeRole = true;
    bool displayChoice = true;
    while(takeRole){
        if(displayChoice){
            std::cout << "c:\tCustomer\n";
            std::cout << "l:\tLibrarian\n";
        };
        std::cout << "Enter role: \n";
        std::cin >> role;
        

        switch(role){
            case 'c':{
                Customer customer(name, age, gender);
                takeRole = false;
                break;
            }
            case 'l':{
                Librarian librarian(name, age, gender);
                takeRole = false;
                break;
            }
            default:{
                std::cout << "Invalid Role\n";
                break;
            }
        }
    };
    
    logDebugger.writeLog("End of \'signUp\' function");
};

void start(){
    logDebugger.writeLog("Start of \'start\' function");

    int choice = -1;
    bool takeChoice = true;
    bool displayChoice = true;
    while(choice != 0 && takeChoice){
        if(displayChoice){
            std::cout << "Enter the number associated with the action\n";
            std::cout << "0. Exit\n";
            std::cout << "1. Signin\n";
            std::cout << "2. Signup\n";
        }
        std::cout << "Enter your choice:\n";
        
        logDebugger.writeLog("Waiting for input of choice from the user");
        std::cin >> choice;
        logDebugger.writeLog("Input of choice was given by the user");
        
        logDebugger.writeLog("Start of the matching process for the inputted choice");
        
        switch(choice){
            case 0:{
                logDebugger.writeLog("User selected option 0");
                break;
            }
            case 1:{
                logDebugger.writeLog("User selected option 1 (Signin)");
                signIn();
                takeChoice = false;
                break;
            }
            case 2:{
                logDebugger.writeLog("User selected option 2 (Signup)");
                signUp();
                takeChoice = true;
                break;
            }
            default:{
                logDebugger.writeLog("User entered invalid option");

                std::cout << "Invalid Input\n";
                break;
            }
        };
        logDebugger.writeLog("End of the matching process for the inputted choice");
    }
    
    
    logDebugger.writeLog("End of \'start\' function");
}

int main(){
    if(!logDebugger.isLogFileOpen()){
        errorLogFile();
        return 1;
    }
    
    logDebugger.writeLog("Created a log object");
    
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