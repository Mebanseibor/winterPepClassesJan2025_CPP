#ifndef book
    #define book
    #include <iostream>
    #include <string>
    #include <vector>
    #include "log.h"

    extern loglib::Log logUser;
    extern loglib::Log logDebugger;

    namespace book{
        class Book{
            int isbn;
            std::string name;
            std::string author;
            int edition;
            int year;
            int countInStock;
            int countIssued;
            std::vector<int> categories;
            int rating;
        public:
            Book(){
                logDebugger.writeLog("Create an object of class Book with no arguments");
            }
            ~Book(){
                logDebugger.writeLog("Destroying an object");
            }
        };
    }

#endif