#pragma once

#inlcude "Bureaucrat.hpp"
#inlcude "AForm.hpp"



class   RobotomyRequestAForm : AForm {
    private :
            std :: string   target;

    public :
            RobotomyRequestAForm();
            RobotomyRequestAForm(std :: string target);
            RobotomyRequestAForm(const RobotomyRequestAForm& copy);
            RobotomyRequestAForm& operator=(const RobotomyRequestAForm& rest);
            virtual ~RobotomyRequestAForm();
            virtual void execute(Bureaucrat const & executor) const;


}