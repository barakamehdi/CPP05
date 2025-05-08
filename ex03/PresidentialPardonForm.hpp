#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"

class   Bureaucrat;


class   PresidentialPardonForm : public AForm{

    private :
            std :: string target ; 
            const int signGrade;
            const int execGrade;
    public :
            PresidentialPardonForm ();
            PresidentialPardonForm(const std :: string target);
            PresidentialPardonForm(const PresidentialPardonForm& copy);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
            virtual ~PresidentialPardonForm();

            virtual void execute(Bureaucrat const & executor) const;
            std :: string Get_target()const;
};
#endif