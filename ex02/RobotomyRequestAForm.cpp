#include "RobotomyRequestAForm.hpp"

RobotomyRequestAForm :: RobotomyRequestAForm () 
            : AForm("Robotomy Request", 72, 45) ,target("Default"){
    std :: cout << "Default Constructor for RobotomyRequestAForm  Called ...!!!" << std :: endl;
}

RobotomyRequestAForm :: RobotomyRequestAForm (std :: string target)
            : AForm ("RobotomyRequestAForm" ,signGrade ,execGrade ) , target (target){
    std :: cout << "Parametrized Constructor for RobotomyRequestAForm Called ...!!!" << std :: endl;

}

RobotomyRequestAForm :: RobotomyRequestAForm(const RobotomyRequestAForm& copy) : 
            AForm(copy), target(copy.target){
    std :: cout << "Copy Constructor Called ...!!!" << std :: endl;
}

RobotomyRequestAForm& RobotomyRequestAForm :: operator=(const RobotomyRequestAForm& rest){
            if (this != &rest)
                    target  = rest.target;
            return *this;
}

RobotomyRequestAForm :: ~RobotomyRequestAForm(){
    std :: cout << "Destructor Called ...!!!" << std :: endl;
}

std :: string RobotomyRequestAForm :: Get_target() const {
    return target;
}
void RobotomyRequestAForm::execute(Bureaucrat const & executor) const {
        if (!this->getSign())
            throw AForm::NotSigned();
        if (executor.getGrade() > this->getGrade_Out())
            throw AForm::GradeTooLowException();
    std :: cout <<  "DRILLING NOISES..." << std :: endl;
    std :: srand(std::time(0));
    int randomValue = std::rand() % 2;
    if (randomValue == 0)
        std :: cout << this->target << " has been robotomized successfully!" << std :: endl;
    else
        std :: cout << "Robotomy failed on " << this->target << "." << std :: endl;
}
std::ostream& operator<<(std::ostream& os, const RobotomyRequestAForm& RobotomyRequestAForm){
    os << "RobotomyRequestAForm: " << RobotomyRequestAForm.getName() << std :: endl;
    os << "Target: " << RobotomyRequestAForm.Get_target() << std :: endl;
    os << "Sign Grade: " << RobotomyRequestAForm.getGrade_In() << std :: endl;
    os << "Exec Grade: " << RobotomyRequestAForm.getGrade_Out() << std :: endl;
    return os;
}



