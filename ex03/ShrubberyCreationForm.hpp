#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class   AForm;

class ShrubberyCreationForm : public AForm {

    private :
                 std :: string  target;
                 const  int     signGrade;
                 const  int     execGrade;

    public :

            ShrubberyCreationForm ();
            ShrubberyCreationForm (const std :: string target);
            ShrubberyCreationForm(const ShrubberyCreationForm& copy);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
            virtual ~ShrubberyCreationForm();


            virtual void execute(Bureaucrat const & executor) const;
            std :: string Get_target()const;
};
std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& ShrubberyCreationForm);

#endif