#ifndef ROBOTOMYREQUESTAFORM_HPP
#define ROBOTOMYREQUESTAFORM_HPP


#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class Bureaucrat;

class   RobotomyRequestAForm : public AForm {
    private :
            std :: string   target;
            static const int signGrade = 72;
            static const int execGrade = 45;  

    public :
            RobotomyRequestAForm();
            RobotomyRequestAForm(std :: string target);
            RobotomyRequestAForm(const RobotomyRequestAForm& copy);
            RobotomyRequestAForm& operator=(const RobotomyRequestAForm& rest);
            virtual ~RobotomyRequestAForm();
            virtual void execute(Bureaucrat const & executor) const;
            std :: string Get_target()const;
            
                       


};
std::ostream& operator<<(std::ostream& os, const RobotomyRequestAForm& RobotomyRequestAForm);
#endif