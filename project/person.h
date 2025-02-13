#ifndef person
    #define person

    #include "log.h"
    #include <string>
    
    loglib::Log logUser;
    loglib::Log logDebugger;
    int guidPerson;
    
    namespace person
    {
        class Person{
        protected:
            int guid = 0;
            std::string name = "";
            int age = -1;
            char gender = '0';

            void assignGUID(){
                guid = ++guidPerson;
                logDebugger.writeLog("Assigned GUID");
            };

        public:
            Person(){
                logDebugger.writeLog("Created an object of class Person");
                assignGUID();
            }
            
            Person(std::string name){
                logDebugger.writeLog("Created an object of class Person with arguments name");

                assignGUID();

                this->name = name;
                logDebugger.writeLog("Assigned arguments to the object");
            }
            
            Person(std::string name, int age){
                logDebugger.writeLog("Created an object of class Person with arguments name, age");
                
                assignGUID();

                this->name = name;
                this->age = age;
                logDebugger.writeLog("Assigned arguments to the object");
            }
            
            Person(std::string name, int age, char gender){
                logDebugger.writeLog("Created an object of class Person with arguments name, age, gender");
                
                assignGUID();

                this->name = name;
                this->age = age;
                this->gender = gender;
                logDebugger.writeLog("Assigned arguments to the object");
            }

            ~Person(){
            }

            // getter functions
            int geGUID(){return guid;}
            std::string getName(){return name;}
            int getAge(){return age;}
            char getGender(){return gender;}
        };

        class LibraryPerson:Person{
        protected:
        public:
            void displayBooks(){}

            void displayOpeningTimings(){}
        };

        class Librarian:LibraryPerson{
        public:
            Librarian(){}
            
            // books
            void addBook(){}
            void editBook(){}
            void deleteBook(){}

            // customers
            void addCustomer(){}
            void editCustomer(){}
            void deleteCustomer(){}
            void displayCustomers(){}
        };
        
        class Customer:LibraryPerson{
        public:
            Customer(){}

            // books
            void issueBook(){}
            void requestBook(){}
            void displayIssuedBooks(){}
        };
    }

#endif