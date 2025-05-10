#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <stdexcept>


class   Bureaucrat {
    private :   
            std :: string const name ;
            int grade;
    public :
            Bureaucrat();
            Bureaucrat (const std :: string&  name , int grade);
            Bureaucrat (const Bureaucrat& copy);
            Bureaucrat& operator=(const Bureaucrat& rest);
            ~Bureaucrat();

            std :: string getName()const;
            int           getGrade()const;
            void          incrementGrade(); 
            void          decrementGrade();

        class   GradeTooHighException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };

        class  GradeTooLowException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };
};
std::ostream& operator<<(std::ostream& os,  const Bureaucrat& Bureaucrat);

#endif

















































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