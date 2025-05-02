#ifndef FORM_HPP
#define FORM_HPP

#include    "Bureaucrat.hpp"





class   Form {
    private : 
                const std :: string name ;
                bool    track = false;
                const   int grade_In;
                const   int grade_Exec;
    public : 

                Form ();
                Form (const std :: string& name , int grade , int grade_sign , int grade_Exec bool trucker);
                Form (const Form& copy);
                Form& operator=(const Form& rest);
                ~Form ();

                std :: string getName();
                int     getGrade_In();
                bool    getTrack();
                int     getGrade_Out();

    class   GradeTooHighException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };

    class  GradeTooLowException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };


        void beSigned(Bureaucrat const &bureaucrat);


}
std::ostream &operator<<(std::ostream &os, Form const &form);


#endif 




// Form Class
// ├── Attributes (private)
// │   ├── name (const string)
// │   ├── isSigned (bool) - initially false
// │   ├── gradeToSign (const int)
// │   └── gradeToExecute (const int)
// │
// ├── Grade Rules
// │   ├── Grade 1: Highest
// │   ├── Grade 150: Lowest
// │   └── Exceptions
// │       ├── Form::GradeTooHighException (if grade < 1)
// │       └── Form::GradeTooLowException (if grade > 150)
// │
// ├── Member Functions
// │   ├── Getters for all attributes
// │   ├── beSigned(Bureaucrat)
// │   │   └── Changes form status if bureaucrat grade is sufficient
// │   │       └── Throws Form::GradeTooLowException if grade insufficient
// │   └── Operator << overload
// │       └── Prints all form information
// │
// └── Integration with Bureaucrat
//     └── New Bureaucrat::signForm() function
//         ├── Attempts to sign the form
//         └── Prints success or failure message with reason