#ifndef person
    #define person

    #include <string>

    namespace person
    {
        extern int guidPerson = 0;

        class Person{
            int guid = 0;
            std::string name = "";
            int age = -1;
            char gender = '0';

            void assignGUID(){
                guid = ++guidPerson;
            };

        public:
            Person(){
                assignGUID();
            }
            
            Person(std::string name){
                assignGUID();
                this->name = name;
            }
            
            Person(std::string name, int age){
                assignGUID();
                this->name = name;
                this->age = age;
            }
            
            Person(std::string name, int age, char gender){
                assignGUID();
                this->name = name;
                this->age = age;
                this->gender = gender;
            }

            ~Person(){    
            }

            // getter functions
            int geGUID(){return guid;}
            std::string getName(){return name;}
            int getAge(){return age;}
            char getGender(){return gender;}
        };
    }

#endif