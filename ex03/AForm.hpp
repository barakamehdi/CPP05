#ifndef AForm_HPP
#define AForm_HPP

#include    "Bureaucrat.hpp"


class   Bureaucrat;


class   AForm  {
    private : 
                const std :: string name  ;
                const   int grade_In;
                const   int grade_Exec;
                bool    Sign;
    public : 

                AForm ();
                AForm (const std :: string& name , int grade_sign , int grade_Exec);
                AForm (const AForm& copy);
                AForm& operator=(const AForm& rest);
                virtual     ~AForm ();

                std :: string   getName() const;
                int             getGrade_In() const;
                bool            getSign() const;
                int             getGrade_Out() const;
                void beSigned(Bureaucrat const &bureaucrat);

    class   GradeTooHighException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };

    class  GradeTooLowException : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };

    class   NotSigned : public std :: exception {
            public : 
                virtual const char* what() const throw ();
    };

    virtual void execute(Bureaucrat const & executor) const = 0 ;


};
std::ostream& operator<<(std::ostream& os, const AForm& AForm);


#endif 