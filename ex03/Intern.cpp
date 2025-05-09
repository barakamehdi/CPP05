#include "Intern.hpp"

Intern :: Intern(){
    std :: cout <<  "Default constructor for Intern Called ...!" << std :: endl;
}

Intern :: Intern(const Intern& copy){
    *this = copy;
}

Intern& Intern ::operator=(const Intern& other){
    (void) other;
    return *this;
}
Intern :: ~Intern (){
}

AForm* Intern :: makeForm(std :: string FormName ,std :: string target){
        AForm*  form;  
        
        std :: string  formTypes[3] = {"shrubbery creation","robotomy request","presidential pardon"};
        int j =0;
        while (j < 3 && formTypes[j] != FormName ){
                j++;}
        switch (j) {
            case(0) : 
                    form = new ShrubberyCreationForm (target);
                    break;
            case (1) : 
                    form = new RobotomyRequestAForm (target);
                    break;
            case  (2) : 
                    form  = new PresidentialPardonForm(target);
                    break;
            default :
                    std :: cout << "Intern cannot create form: " << FormName << std :: endl; 
                    return NULL;    
        }
        std :: cout << "Intern Creates : " <<  FormName << std :: endl;

    return form;
}