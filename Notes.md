# Winter PEP Training:
### Daily Logs
#### 2025-01-16 (Thursday)

#### 2025-01-17 (Friday)

#### 2025-02-04 (Tuesday)
- A program that outputs "Hello World"
- Performance of the "The file Handling show"


## Project:
### Information

| Field      | Value                     |
| ---------- | ------------------------- |
| Project on | Library Management System |

### Features:
- Menus
- Library
- Books
    - ISBN
    - Name
    - Author
    - Number stock
    - Number issued

- User
    - ID
    - Name
    - Books issued to the student

- User login and authentication
- Permission/privileges:

    | Level             | Permission/privileges                   |
    | ----------------- | --------------------------------------- |
    | Librarian/Counter | Read, Write, checking stock, issue book |
    | Reader            | Read book                               |

### Other requirements:
- Documentation:
    - By comments / by official documentation

## Notes
### Variable:
- "*A named memory location that stores a value*"

- It comprises of:
    - Address
    - Value
    - Identifier

### Escape Sequence
- "*A set of characters that cannot be directly inputted from the keyboard*"

- #### Example:
    
    | Escape Sequence Character | Action                           |
    | ------------------------- | -------------------------------- |
    | n                         | Outputs an end of line character |
    | t                         | Outputs a tab character          |
    | b                         | Outputs a backspace character    |
    | \                         | Outputs a \ character            |
    | '                         | Outputs a ' character            |
    | "                         | Outputs a " character            |

- #### Note:
    - ##### About `\b`:
        - Perform more experimentation on `\b`, in regards to `\n`

### Type Casting
- "**"

- #### Types:
    | Types    | Properties                                  |
    | -------- | ------------------------------------------- |
    | Implicit | "*Done by the compiler automatically*"      |
    | Explicit | "*Done by the programmer programmatically*" |

- #### When does type casting occur?
    - After relation, arithmetic operations

### Operators:
- "**"

- #### Types:
    - ##### Relational operators:
        | Operator | Name               | Action |
        | -------- | ------------------ | ------ |
        | >        | Greater Than       |        |
        | <        | Lesser Than        |        |
        | ==       | Equals to          |        |
        | <=       | Lesser Than equal  |        |
        | >=       | Greater Than equal |        |
        | !=       | Not equal to       |        |
    
    - ##### Logical operators:
        - "*Operators that are used to club or join multiple conditions and returns a single output as either true or false according to the result of the operation*"
        
            | Operator | Name         | Action                                             |
            | -------- | ------------ | -------------------------------------------------- |
            | &&       | And Operator | Outputs true only if all of the inputs are true    |
            | \|\|     | Or Operator  | Outputs true only if any one of the inputs is true |
            | !        | Not Operator | Inverts the logical value                          |
    
### Conditional statements
- #### if statement:
    - "*A conditional statement that executes a block of code when a condition is satisfied*"

    - Syntax:
        ```cpp
        if(condition){
            statement(s)
        };
        ```

    - Example:
        ```cpp
        if(a%2 == 0){
            cout << a << " is even" << endl;
        }
        else{
            cout << a << " is odd" << endl;
        };
        ```

- #### if-else statement:
    - "*A conditional statement that executes a block of code when a condition is satisfied, but executes another block of code when the condition is not satisfied*"

    - Syntax:
        ```cpp
        if(condition){
            statement(s)
        };
        ```

    - Example:
        ```cpp
        if(){

        }
        else{

        }
        ```

- #### if-else-if statement:


### Loops:
- "**"


### Functions:
- "**"
- #### Parts of a function:
    - ##### Definition
        - Example:
            ```cpp
            void square(int a);
            ```
    
    - ##### Declaration
        - Example:
            ```cpp
            void square(int a){
                return a*a;
            }
            ```
    
    - ##### Calling
        - Example:
            ```cpp
            square(5);
            ```

- #### Return type
    - By default, if the return type is not specified, C++ expects an integer

- #### Function overloading:
    - "*Having the same functions with the same name but different function signature*"

    - Example:
        ```cpp
        void func(){
            // statement(s)
        }

        void func(int a){
            // statement(s)
        }

        void func(float a){
            // statement(s)
        }

        void func(double a){
            // statement(s)
        }

        void func(int a, int b){
            // statement(s)
        }
        ```

- #### Signature of a function:
    - "*A unique signature that identifies any function*"

    - When the identical function signature is found, it is called "exact match"

    - When no exact match is found, implicit type casting is applied to the argument to resolve the function call
        - Order:
            $$
            \text{Character}\\\\
            \downarrow \\\\
            \text{Integer}\\\\
            \downarrow \\\\
            \text{Double}\\\\
            $$
        
        - Example:
            ```cpp
            int funcA(int var){return var;}

            double funcB(double var){return var;}

            int main(){
                cout << funcA('B') << endl; // prints 66
                cout << funcB('C') << endl; // prints 67
                return 0;
            };
            ```

    - Identifiable parameters:
        - Function name
            ```cpp
            void func(){
                // statement(s)
            }

            void func(int a){
                // statement(s)
            }
            ```
        
        - Number of the parameters
            ```cpp
            void func(int a){
                // statement(s)
            }

            void func(int a, int b){
                // statement(s)
            }
            ```
        
        - Datatype of the parameters
            
            ```cpp
            void func(int a){
                // statement(s)
            }

            void func(float a){
                // statement(s)
            }
            ```
        
        - Order of the parameters

            ```cpp
            void func(int a, double b){
                // statement(s)
            }

            void func(double a, int a){
                // statement(s)
            }
            ```

- #### Variable scope and values:

- #### Default arguments:
    - "*A default value that is to be given to parameter of a function when no value is passed for that parameter*"

- #### Conflict resolution:

- #### Pass-by-reference and pass-by-value:
    - Pass-by-value:
        - The value is replicated and any changes to the passed value does not affect the value in the scope from which the function it was called from
            ```cpp
            void function(int num){num++;};

            void main(){
                int var = 5;
                function(var);
                cout << var;    // prints 5;
            };
            ```
    
    - Pass-by-reference
        - The value is replicated and any changes to the passed value does not affect the value in the scope from which the function it was called from
            ```cpp
            void function(int &num){num++;};

            void main(){
                int var = 5;
                function(var);
                cout << var;    // prints 6;
            };
            ```

    



### Scope:
- "**"
- #### Scope of a Variable
    - ##### Parameters:
        - Scope

        - Name

### <span id='notes-buffer'>Buffer</span>:
- "**"

- #### Clearing/Flushing the input buffer
    ```cpp
    cin >> ws;
    ```

### Operator Overloading
- "**"

- Example:
    ```cpp
    8+2;
    20.1+90.4;
    ```

- #### Complex number:


### Arrays
- "*Continuos memory allocation of the same type of datatype*"

- Is a collection of the same type
    - This makes memory traversal simple and performs identical memory traversal

- It has a continuos memory allocation

- It has a shared common name, governed by an index

- Accessing the contents of an array:
    - Index of an array in always sorted from 0 and ends at n-1, where n is the size of the array
    - `index_min=0` & `index_max=n-1`

    - Base and last memory location of a data point:
        - `Base` = `reference Memory Location`
        - `last` = `base` + `size Of data` - `1`

- #### Declaration of an array:
    - Declaration of an array requires a the size of the array to be defined

- Example:
    ```cpp
    // declaration
    int arrayA[10];

    // declaration and initialization
    int arrayB[] = {1, 2, 6, 7, 20, 4, 3, 7};
    ```

- #### Behavior of arrays as arguments for functions
    - Arrays are always passed to functions by *pass-by-reference*
        - When arrays are passed into a function, the **address of the array** is passed and not the array it self


- #### Behavior of arrays with assigned and unassigned values
    - If the array is initiated with values when it was declaration, then the default value of the datatype is assigned


- #### General operation on arrays:
    - Filling values
    
    - Displaying the values

    - Deletion of all values

- #### Pros and Cons:
    
    | Pros                  | Cons        |
    | --------------------- | ----------- |
    | Direct access to data | Homogeneous |

- #### Standards in implementation of an array:
    - *Static length arrays* is the original and standard way of implementation of an array in C++
        - Demonstration:
            ```cpp
            int capacity=256, size;
            
            cin >> size;
            if (size>capacity) {
                // invalid size input statement(s)
            };

            int array[size];
            ```
        
        - This ensures that the memory for the array is allocated before the program is run in real time
    
    - While, *Variable length array* is **not** the standard way of implementation of an array in C++
        - Demonstration:
            ```cpp
            int size;
            
            cin >> size;
            
            int array[size];
            ```

        - This creates a scenario where the program allocates the memory while in run time which could crash the program

- #### Special case with char arrays:
    - Character arrays has a null character `\0` at the end of the array

    - A character array has a default value of `\0` assigned to it

    - Maximum acceptable number of character would be 1 less than the actual assigned size
        - Example:
            ```cpp
            char array[100];    // effective size = 99
            ```
    
    - Note:
        - The standard input and output of a buffer for a character array terminates at a delimiter character like `\n`, `\t`, `\0`
    
    - Proper input should ideally be done with a clean <a href='#notes-buffer'>buffer</a>

### Strings
- "**"

- Difference between strings datatype and array of char datatype
    
    | String                                                   | Character                                                    |
    | -------------------------------------------------------- | ------------------------------------------------------------ |
    | Dynamic Size                                             | Fixed Size                                                   |
    | Original strings type of C++                             | Array treated as a string in C, adopted as it is in C++      |
    | C functions cannot be used on string array               | C functions on character array                               |
    | By default, it is passed to functions by *call-by-value* | By default, it is passed to functions by *call-by-reference* |

- Similarities:

    | String and character                               |
    | -------------------------------------------------- |
    | Null characters                                    |
    | Index wise operations are possible in both strings |

- #### Methods:
    
    | Method   | Action                            |
    | -------- | --------------------------------- |
    | length() | returns the length of the string  |
    | size()   | returns the size of the string    |
    | append() | appends a character to the string |

- #### Behavior with operators:
    | Operator             | Behavior                           |
    | -------------------- | ---------------------------------- |
    | +                    | Concatenation                      |
    | Relational operators | Compares only the first characters |

- #### Precautions:
    - While using getline(), clear the buffer using:
        ```cpp
        #include <limits>

        int main(){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return 0;
        }
        ```

### Structure:
- "*It is a user-defined datatype that wraps multiple data-types into one datatype*"

- #### Operations:
    - Creation of the structure
        - Example:
            ```cpp
            struct student{
                string name;
                int rollNumber;
                float marks[5];
                float total = 0;
                float percentage = 0.0;
            };
            ```
    
    - Insertion of values
        - Example:
            ```cpp
            student sd;
            sd.name = "Jimmy";
            sd.rollNumber = 1;
            sd.marks[5] = {10, 90.2, 30.5, 40.6, 30.2};
            sd.total = calculateTotal(sd.marks);
            sd.percentage = calculatePercentage(sd.total);
            ```
    
    - Modification of values
    - Displaying the values

- #### Access Specifiers:



### Class
- "*A user-defined datatype which logically binds functions and variables into a single entity*"

- Example:
    ```cpp
    class Subject{
        int id;
        int marks;
        char grade;
        string name;
    }
    ```

- #### Access Specifiers:
    - "*It specifies the level of access by which the data members and the methods of the class can be accessed by the program*"

    - Data members and methods are binded internally to the object
        - This means that objects only modifies its own content
    
    - Difference between data members and methods:
        
        | Data Members                   | Methods                      |
        | ------------------------------ | ---------------------------- |
        | "*Variables within the class*" | "*Methods within the class*" |

    - Types:

        | Type      | Behavior                                                     |
        | --------- | ------------------------------------------------------------ |
        | Public    | Any one with the object can access the content               |
        | Private   | Content cannot be accessed directly from outside the class   |
        | Protected | Content can be accessed by the child class that inherited it |
    
    - By default, a class has its access modifier as *private*
        - This promotes data security



- #### Constructor:
    - "*A function that is called automatically when an object of the class is created*"
    
    - Its access modifier is always **public**

    - Example:
        ```cpp
        class Car{
            Car(){
                cout << "Object Created";
            }
        }
        ```
    
    - ##### Types:
        | Type                     | Behavior                                                                 |
        | ------------------------ | ------------------------------------------------------------------------ |
        | Default constructor      | Constructor with no parameters                                           |
        | Parametrized constructor | Constructor with parameters                                              |
        | Copy constructor         | Copies an object of the same class by passing it using call-by-reference |
    
    - ##### More on Copy constructor:
        - Example:
            ```cpp
            class Student{
                string name;
                int rollNum;

                public:
                Student(Student &obj){
                    name = obj.name;
                    rollNum = obj.rollNum;
                }
            }

            int main(){
                Student sd1();      // default constructor
                Student sd2(sd1);   // copy constructor
                Student sd3 = sd2;  // copy constructor
            };
            ```
        
        - It can be invoked only during the creation and copying of the object during declaration, not assignment


- #### Destructor:
    - "*A function that is called automatically when an object of the class is destroyed*"

    - Example:
        ```cpp
        class Car{
            ~Car(){
                cout << "Object Deleted";
            }
        }
        ```

    - ??? When multiple objects are to be deconstructed, it is done in the order of objects destruction
        ```cpp
        class Book{
        };

        void function(){
            Book bookA, bookB;
            // which object would be deconstructed first? bookA or bookB?
        };

        int main(){
            function();
            return 1;
        };
        ```

- #### "Self reference":
    - Example:
        ```cpp
        class A{
            int num;

            A(int num){
                this->num = num;
            }
        }
        ```

- #### Inheritance:
    - "*It is the inheritance of data members and member functions by a child class from its parent class*"

    - Example:
        ```cpp
        class Vehicle{
            int seats;
        }

        class Aircraft : Vehicle{
            int wingLength;
        }
        ```
    
    - ##### Types of inheritance:

    - ##### Inherited access modifiers:
        $$
        \text{Public}\\\\
        \downarrow\\\\
        \text{Protected}\\\\
        \downarrow\\\\
        \text{Private}\\\\
        $$

- #### Function overriding:

- #### Friend Function

- #### Friend Class

- #### Ambiguity resolution



- #### Virtual Function
    - Pure-Virtual Function

- #### Polymorphism

- #### Functions definition outside the class
    - It uses the **scope resolution** "::" to resolve any function name conflicts
    
    - Example:
        ```cpp
        class Subject(){
            string name
            void displayName();
        }

        // function definition for the Subject class
        void Subject::displayName(){
            // statement(s)
        };

        // global function
        void displayName(){
            // statement(s)
        }
        ```

- #### Static members
    - "**"

- #### Static methods/functions:
    - "**"

- #### Padding
    - "*Padding for standardization of memory occupation for classes*"

### Storage Class:
- "*Storage class is defines the `memory location`, `scope`, the `lifetime` and the `default value`*"

- #### Type:
    
    | Type     | Scope                    | Lifetime               | Memory Location | Default value |
    | -------- | ------------------------ | ---------------------- | --------------- | ------------- |
    | Auto     | Within block             | Block                  | RAM             | Garbage       |
    | Static   | Within block             | While the program runs | RAM             | 0             |
    | Extern   | Within the whole program | While the program runs | RAM             | 0             |
    | Register | Within block             | Block                  | CPU Register    | Garbage       |

    - ##### More on Static
        - Static are always defined in global scope
    
    - ##### More on Extern:
        ```cpp
        int main(){
            extern int num;
            cout << "num: " << num;
            return 1;
        }
        int num = 100;
        ```

### Pointers
- "*A variable that will hold the address of another type of variable*"



### Packages/Headers/header files
- #### Preprocessor directive: `#`
    - Only indicates/identifies a preprocessing statement
    - Are replaced by marcros
    - Are executed first
    - ##### Operations:
        | Operation | Action                                   |
        | --------- | ---------------------------------------- |
        | include   | Includes/defines a file into the program |
        | define    | Replaces a string with another string    |
        | ifdef     | if a package/header is defined           |
        | ifndef    | if package/header is not defined         |
        | endif     | ends the if preprocessor                 |
        
        - ###### More on include
            - Predefined header file mentioned within "<>"
            - A user-defined file between double quotes

        - ###### More on define
            ```cpp
            # define NUM_STUDENT 5
            ```
        
        - ###### More on ifdef and ifndef
            - The end statement is not needed if there is only one line of code under the if condition
                
- #### Header file:
    - ##### Namespace
        - The file should include a namespace value:
            - Example:
                - fileNameA.h:
                    ```cpp
                    // file name: fileNameA.h
                    namespace example
                    {
                        int number;
                    }
                    ```
                - main.cpp:
                    ```cpp
                    #include "fileNameA.h"
                    using namespace example
                    ```
        
        - It can include other header files:
            ```cpp
            #include <iostream.h>
            namespace example
            {
                extern iostream::cin;
            }
            ```

        - Namespace Conflicts/Discontinuous namespace:
            - "*Collectively merges the conflicting namespaces*"
        
        - Since `cout` and `cin` are all defined from a header file, therefore they **are not keywords** but **are identifiers** for the object *ostream* and *istream* respectively as imported from their parent header file *iostream*

    - ##### Good practices:
        - Don't use all the namespace, use only parts of the namespace

        - Using an `ifndef` preprocessor operation to avoid clashes when multiple inclusion of the header file is performed
            ```cpp
            #ifndef headerfile
                #define headerfile
                namespace example
                {
                    int number;
                }
            #endif
            ```

- #### Common header file structures
    ```mermaid
    graph
        fstream[fstream]
        ifstream[ifstream]
        ofstream[ofstream]
        
        iostream[iostream]
        istream[istream]
        ostream[ostream]

        fstream --> ifstream & ofstream
        iostream --> istream & ostream
    ```

- #### fout VS cout
    
    | cout                    | fout                 |
    | ----------------------- | -------------------- |
    | Linked with the console | Linked with the file |
    | Singular console exist  | Multiple files exist |

- #### fin VS cin
    
    | cin                             | fin                       |
    | ------------------------------- | ------------------------- |
    | Default delimiter is whitespace | Default delimiter is `\n` |




### File Handling
- "*Operations that handle files using code*"

- Package name:
    - fstream
    - ifstream

- There are no *fout* or *fin* within the fstream header file
    - Therefore, *fout* and *fin* are to be defined manually

- Linking to a file:
    - Example using constructor:
        ```cpp
        #include <fstream>

        using namespace std;

        int main(){
            std::ofstream fout("text.txt");  // parameterized constructor, it links the object to the file
            fout << "Hello text file";  // outputs the content to the linked file
            
            return 1;
        }
        ```
    - Example using function:
        ```cpp
        #include <fstream>

        using namespace std;

        int main(){
            std::ofstream fout;  // creates an fout object of class ofstream
            fout.open("text.txt");  // links the object to the file
            fout << "Hello text file";  // outputs the content to the linked file
            
            return 1;
        }
        ```

- #### Mode of operation:
    - By default, fstream writes (overwrite) into the file

- #### Reading a file:
    - ifstream is the class that is used
    
    - Example:
        ```cpp
        std::ifstream::fout("temp.txt");
        string tempString;
        ```

- #### Writing to a file:
    - Good practices:
        - To separate values, use a delimiter
            ```cpp
            fout << name << "\n" << rollNum;
            ```
    
    - Procedures:
        $$
            \text{Creates a file, if it does not exist}\\\\
            \downarrow\\\\
            \text{Writes into the opened file (overwrites)}
        $$

- #### Appending mode:
    - Good practices:
        - To separate values, use a delimiter
            ```cpp
            fout << name << "\n" << rollNum;
            ```
    
    - To open the file in *append mode*:
        ```cpp
        fout.open(fileName, std::ios::app);
        ```

    - Procedures:
        $$
            \text{Creates a file, if it does not exist}\\\\
            \downarrow\\\\
            \text{Appends into the opened file}
        $$

- #### Closing the file


- #### Serialization and deserialization:
    - "*It is the uniform packing and unpacking of objects*"

    - It writes the data in binary form

    - ##### Serialization
        ```cpp
        fout.write((char*)this, sizeof(this));
        ```
    
    - ##### Deserialization
        ```cpp
        fin.read((char*)this, sizeof(this));
        ```

    - About dat file
        ```cpp
        fin.open(fileName, std::ios::binary)
        ```
    



### Auto
- "*It is $\dots$*"

- Example:
    ```cpp
    auto funcAuto(auto a, auto b){return a+b;};

    int main(){
        std::cout << "Integers:\t" << funcAuto(2, 3) << "\n";
        std::cout << "Double:\t\t" << funcAuto(2.5, 3.0) << "\n";

        return 1;
    }
    ```


- Though it is defined as a datatype syntactically, it however cannot be used as datatype declarator by itself and therefore cannot be solely used as a variable or data member of a class without additional a datatype to cast into
    ```cpp
    // invalid declaration
    auto a;
    
    // valid declaration
    auto b = numA+numB;
    ```

- #### Behavior with characters
    - Treats a character as an integer


### Template
- "*It is $\dots$*"

- **It creates a new instance of the function every time it is called**

- Example:
    ```cpp
    template<typename xDataType>
    xDataType funcTemplate(xDataType a, xDataType b){return a+b;};

    int main(){
        std::cout << "Integers:\t" << funcTemplate(2, 3) << "\n";
        std::cout << "Double:\t\t" << funcTemplate(2.5, 3.0) << "\n";

        return 1;
    }
    ```

- #### Behavior with characters
    - Treats a character as a character

- #### Templates with classes:
    - Syntax for declaration of object that uses templates:
        ```cpp
        className<DataType> objectName;
        ```

    - Example:
        ```cpp
        template <typename yDataType>
        class Object{
            yDataType c;
            
            public:
            Object(yDataType a, yDataType b){
                this->c = a+b;
            }

            yDataType result(){return this->c;}
        };

        
        int main(){
            Object<int> objA(2, 3);
            Object<double> objB(2.5, 3.0);
            
            std::cout << "Integers:\t" << objA.result() << "\n";
            std::cout << "Double:\t\t" << objB.result() << "\n";

            return 1;
        }
        ```





### Exception Handling
- "*It is the act of handling unexpected behaviors, exceptions and errors in the program*"

- #### Run-time VS Compile-time error:

    | Run time error            | Compile time error            |
    | ------------------------- | ----------------------------- |
    | "*It is a logical error*" | "*It is a syntactical error*" |

- #### Catching a user-defined error:
    ```cpp
    try{
        throw(); // throws a user-defined error
    }
        catch(const &e){ // statement(s) to handle error
    }
    ```

- #### Catching any error:
    ```cpp
    try{
        // statements(s) to try
    }
    catch(...){
        // statement(s) to handle error
    }
    ```


### Standard Library
- "*A standard template library/of common and standardized algorithms and containers*"

- #### Algorithm:
    - Sorting
    - Searching

- #### Containers:
    - Array
    - Vector
    - List
    - Queue
    - Stack
    - Map
    - $\vdots$

- #### Generic functions:
    - size()
    - length()
    - front()
    - back()
    - begin()
    - end()
    - empty()


### Vectors:
- "**"

- #### Functions:

    | Name                                                        | Action                                               |
    | ----------------------------------------------------------- | ---------------------------------------------------- |
    | size()                                                      | returns the size of the vector                       |
    | begin()                                                     | returns the beginning index of the vector            |
    | end()                                                       | returns the ending index of the vector               |
    | copy(startingIndex, endingIndex, destinationVectorIterator) | copies the content from one vector to another vector |
    | resize()                                                    | resizes the size of the vector                       |



- #### Iterator:
    - "**"

    - ##### Data type:
        ```cpp
        vector<dataType>::iterator var = vectorExample.begin();
        ```
    
    - ##### Example:
        - Taking in the first and last index
            ```cpp
            auto var = vectorExample.begin();
            auto var = vectorExample.end();
            ```


### Algorithm:
- "**"

- #### Functions:
    | Name                                    | Action                                        |
    | --------------------------------------- | --------------------------------------------- |
    | min_element(startingIndex, endingIndex) | returns the index which has the minimum value |
    | max_element(startingIndex, endingIndex) | returns the index which has the maximum value |

### Pair"
- "**"

- #### Functions:
    | Name     | Action |
    | -------- | ------ |
    | first()  |        |
    | second() |        |


## Questions:
- What is class?

- Difference between class and object?

- What are access specifiers?

- Differentiate between private and protected access specifiers. How are they different from public 
access specifiers?
- How are data members accessed by the object directly?

- Except class, where can we use dot/arrow?

- What is a structure?

- Differentiate between class and structure.

- C structure VS C++ structure

- What is memory padding?

- What is the default access specifier for a structure?

- Differentiate between array of objects and array of data members?

- Can we access the private data members an object of a class? If so, how can we achieve that?
    - Yes, by replicating/copying an object to another object and accessing it during the copying process

    - Example:
        ```cpp
        class Car{
            int numWheels;

            Car(Car &obj){
                int temp = obj.numWheels;   // temp has the value of the private data member numWheels
                
                cout << "Temp: " << temp << "\n";
            }
        }

        int main(){
            Car c1;

            Car c2 = c1;
            
            return 1;
        }
        ```

- Difference between constructor and destructor.

- Is a constructor compulsory?

- Can a constructor or a destructor have a return type?

- Can a class have multiple constructor

- How is an object copied

- Is a copy constructor compulsory?

- When is a the copy constructor **NOT** called when a copy operation is performed between two objects of the same class?

- What is class variable?

- Differentiate between object variables and class variables

- Can a class method be defined outside a class? If yes, how can that be achieved?

- What is SRO?
    - Is stands for *Scope Resolution Operator*

- What is the default value of a static variable/

- What is a static function?

- What is inheritance?

- What is function inheritance?

- What is function overloading?

- Can the base and derived class have the same function?

- What is function overriding?

- What are the types of inheritance?

- How can we call the base class constructor from a derived class?

- What is late binding?

- What is early binding?

- Difference between runtime and compile-time polymorphism

- What is the diamond problem in inheritance? How can this be avoided?

- What is a friend class?

- What is a friend function?

- What is Encapsulation?

- What is Abstraction?

- What is polymorphism?

- What is virtual function?

- What is pure virtual function?

- What is an abstract base class?

- What is a concrete class?

- What is a variable?