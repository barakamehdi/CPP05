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
                ~AForm ();

                std :: string   getName() const;
                int             getGrade_In() const;
                bool            getSign() const;
                int             getGrade_Out() const;
                void	        signAForm(AForm &AForm);

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
std::ostream& operator<<(std::ostream& os, const AForm& AForm);


#endif 