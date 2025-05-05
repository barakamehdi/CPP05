#include "RobotmyRequestAForm.hpp"

RobotmyRequestAForm :: RobotmyRequestAForm () 
            : AForm("Robotomy Request", 72, 45) ,target("Default"){
    std :: cout << "Default Constructor Called ...!!!" << std :: endl;
}

RobotmyRequestAForm :: RobotmyRequestAForm (std :: string target)
            : AForm ("RobotomyRequestAForm" ,signAForm ,signGrade ) , target (target){
}

RobotmyRequestAForm :: RobotomyRequestAForm(const RobotomyRequestAForm& copy){

    AForm(copy)
        target = copy.target;
    std :: cout << "Copy Constructor Called ...!!!" << std :: endl;
}

RobotmyRequestAForm& RobotomyRequestAForm :: operator=(const RobotomyRequestAForm& rest){
            if (this != &rest)
                    target  = rest.target;
            return *this;
}

RobotmyRequestAForm :: ~RobotomyRequestAForm(){
    std :: cout << "Destructor Called ...!!!" << std :: endl;
}



