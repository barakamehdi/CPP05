#program once

#include "Form.hpp"


class ShrubberyCreationForm : public AForm {

    private :
                 std :: string  target;
                 const  int     signGrade = 145;
                 const  int     execGrade = 137;

    public :

            ShrubberyCreationForm ();
            ShrubberyCreationForm (const std :: string target);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
            virtual ~ShrubberyCreationForm();


            virtual void execute(Bureaucrat const & executor) const;
};
std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& ShrubberyCreationForm);



// outfile << "    *    " << std::endl;
// outfile << "   ***   " << std::endl;
// outfile << "  *****  " << std::endl;
// outfile << " ******* " << std::endl;
// outfile << "*********" << std::endl;
// outfile << "    |    " << std::endl;
// outfile << "    |    " << std::endl;