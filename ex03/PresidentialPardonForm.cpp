#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm() 
                    : AForm ("PresidentialPardonForm " ,25,5),target ("Default"),signGrade(25), execGrade(5){
        std :: cout << "Default Constructor for PardonForm Called ... !!" << std :: endl;
}

PresidentialPardonForm :: PresidentialPardonForm(const std :: string target) 
                    : AForm ("PresidentialPardonForm " ,25 , 5),target (target),signGrade(25), execGrade(5){
    std :: cout << "parameterized Constructor for PardonForm is Called  ..." << std :: endl;
}

PresidentialPardonForm :: PresidentialPardonForm(const PresidentialPardonForm& copy) 
                : AForm ("PresidentialPardonForm ", copy.signGrade , copy.execGrade ) ,signGrade(copy.signGrade), execGrade(copy.execGrade ){
    std :: cout << "Copy Constructor is Called .... !!";
} 

PresidentialPardonForm& PresidentialPardonForm :: operator=(const PresidentialPardonForm& other){
    if (this != &other)
        target = other.target;
    return *this;
}

PresidentialPardonForm :: ~PresidentialPardonForm (){
    std :: cout << "Destructor for PardonForm Called" << std :: endl;
}

void    PresidentialPardonForm :: execute(Bureaucrat const & executor) const{
        if (!this->getSign())
                throw AForm :: NotSigned();
        if (executor.getGrade() > this->getGrade_Out())
            throw AForm :: GradeTooLowException();
     std :: cout << "this " << target << "has been pardoned by Zaphod Beeblebrox" << std :: endl;
}

std :: string PresidentialPardonForm :: Get_target () const{
    return  target;
}


 

