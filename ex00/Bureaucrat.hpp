#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>


class   Bureaucrat {

    private :   

            std :: string const name ;
            int grade;

    public :

            Bureaucrat();
            Bureaucrat (const Bureaucrat& copy);
            Bureaucrat& operator=(const Bureaucrat& rest);
            ~Bureaucrat();

            std :: string getName(std :: string name );
            int getGrade();

            void    incrementGrade();
            void    decrementGrade();

    class   GradeTooHighException : std :: exception {

        public : 
            virtual const char* what() const throw ();
    };

    class  GradeTooLowException : std :: exception {

        public : 
            virtual const char* what() const throw ();
    };



};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);



#endif
// 
// Grade Manipulation Methods
// │
// ├── incrementGrade()
// │   │
// │   ├── Preparation
// │   │   ├── Understand that increment means higher rank (lower number)
// │   │   └── Remember valid range is 1-150 (1 is highest rank)
// │   │
// │   ├── Implementation Steps
// │   │   ├── Step 1: Check current grade value
// │   │   ├── Step 2: Validate if increment is possible
// │   │   │   └── If grade == 1, increment not possible
// │   │   ├── Step 3: Throw exception if validation fails
// │   │   │   └── Use GradeTooHighException
// │   │   └── Step 4: If valid, decrease grade value by 1
// │   │
// │   └── Error Handling
// │       ├── Define what() method for GradeTooHighException
// │       └── Ensure exception is properly propagated
// 
















































// C++ Exceptions
// ├── Purpose
// │   ├── Error handling
// │   ├── Separating error handling from normal code flow
// │   └── Propagating errors up the call stack
// │
// ├── Basic Mechanism
// │   ├── try blocks: code that might throw exceptions
// │   ├── throw statements: signals an exception occurred
// │   └── catch blocks: handles thrown exceptions
// │
// ├── Exception Classes
// │   ├── std::exception (base class)
// │   └── Custom exception classes
// │      ├── Inheritance from std::exception
// │      └── what() method implementation
// │
// └── Exception Safety
//     ├── Basic guarantee (no resource leaks)
//     ├── Strong guarantee (state unchanged if exception occurs)
//     └── No-throw guarantee (operation won't throw)