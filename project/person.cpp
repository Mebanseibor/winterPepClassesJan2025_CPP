#ifndef person
    #define person

    #include <string>

    namespace person
    {
        class Person{
            std::string name = "";
            int age = -1;
            char gender = '0';

        public:
            Person(){
            }
            
            Person(std::string name){
                this->name = name;
            }
            
            Person(std::string name, int age){
                this->name = name;
                this->age = age;
            }
            
            Person(std::string name, int age, char gender){
                this->name = name;
                this->age = age;
                this->gender = gender;
            }

            ~Person(){    
            }

            // getter functions
            std::string getName(){return name;}
            int getAge(){return age;}
            char getGender(){return gender;}

            
        };
    }

#endif