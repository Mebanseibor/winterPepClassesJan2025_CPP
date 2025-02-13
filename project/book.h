#ifndef book
    #define book
    #include <iostream>
    #include <string>
    #include <vector>
    #include "log.h"

    loglib::Log logDebugger;
    loglib::Log logUser;

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
        };
    }

#endif