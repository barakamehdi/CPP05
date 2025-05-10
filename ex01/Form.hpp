#ifndef FORM_HPP
#define FORM_HPP

#include    "Bureaucrat.hpp"


class   Bureaucrat;


class   Form  {
    private : 
                const std :: string name  ;
                const   int grade_In;
                const   int grade_Exec;
                bool    Sign;
    public : 

                Form ();
                Form (const std :: string& name , int grade_sign , int grade_Exec);
                Form (const Form& copy);
                Form& operator=(const Form& rest);
                ~Form ();

                std :: string getName() const;
                int     getGrade_In() const;
                bool    getSign() const;
                int     getGrade_Out() const;
                void	      signForm(Form &Form);

    class   GradeTooHighException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };

    class  GradeTooLowException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };


        void beSigned(Bureaucrat const &bureaucrat);


};
std::ostream& operator<<(std::ostream& os, const Form& Form);


#endif 




// AForm Class
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
// │       ├── AForm::GradeTooHighException (if grade < 1)
// │       └── AForm::GradeTooLowException (if grade > 150)
// │
// ├── Member Functions
// │   ├── Getters for all attributes
// │   ├── beSigned(Bureaucrat)
// │   │   └── Changes AForm status if bureaucrat grade is sufficient
// │   │       └── Throws AForm::GradeTooLowException if grade insufficient
// │   └── Operator << overload
// │       └── Prints all AForm inAFormation
// │
// └── Integration with Bureaucrat
//     └── New Bureaucrat::signAForm() function
//         ├── Attempts to sign the AForm
//         └── Prints success or failure message with reason