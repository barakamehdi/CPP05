#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat  :: Bureaucrat() : name ("Default"), grade (150){
    std :: cout << "Default Constructure for Bureaucrat  Called ...!" << std :: endl;
}

Bureaucrat :: Bureaucrat (const std :: string& name , int Grade) : name (name){
            if (Grade < 1)
                throw Bureaucrat::GradeTooHighException ();
            else if (Grade > 150)
               throw  Bureaucrat:: GradeTooLowException ();
            grade = Grade;
} 

Bureaucrat :: Bureaucrat (const Bureaucrat& copy) : name (copy.name) , grade(copy.grade){
    std :: cout << "Copy Constructure for Bureaucrat Called ...!! " << std :: endl;
}

Bureaucrat :: ~Bureaucrat(){
    std :: cout << " Destructure for Bureaucrat Called ... !!! " << std  :: endl;
}

 
std :: string Bureaucrat :: getName ()  const{
    return  name;
}

int     Bureaucrat :: getGrade () const {
    return  grade;
}

void    Bureaucrat :: incrementGrade(){
        if (grade - 1 < 1)
            throw   GradeTooHighException();
        grade--;
}

void    Bureaucrat :: decrementGrade(){
        if (grade + 1 > 150)
            throw   GradeTooLowException();
        grade++;
}
void	Bureaucrat::signAForm(Form &Form){
	try{
		Form.beSigned(*this);
		std::cout << this->name << " signed " << Form.getName() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << this->name << " couldn't sign " << Form.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat ::  GradeTooHighException :: what () const throw (){
    return "Grade is too high! Cannot increment beyond grade 1.";
     
}

const char* Bureaucrat ::  GradeTooLowException :: what () const  throw (){
     return "Grade is too Low! Cannot Decrement beyond grade 150.";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rest) {
    if (this != &rest) {
        grade = rest.grade;
    }
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat) {
    os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return os;
}