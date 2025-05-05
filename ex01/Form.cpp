#include    "AForm.hpp"

AForm  :: AForm () : name ("default") ,grade_In(150), grade_Exec(150), Sign(false) {
    std :: cout << "Default Construtor for AForm is Called ...!!! " << std :: endl;
 }

AForm :: AForm (const std :: string& name , int grade_sign , int grade_Exec) : 
                        name (name),grade_In (grade_sign), grade_Exec(grade_Exec),Sign (false) {
            if (grade_In < 1 || grade_Exec < 1)
                throw AForm :: GradeTooHighException ();
            else if (grade_In > 150 || grade_Exec > 150)
                throw AForm :: GradeTooLowException();
            Sign = true;
} 

AForm :: AForm (const AForm& copy) : name (copy.name),
                     grade_In(copy.grade_In) ,grade_Exec(copy.grade_Exec) ,Sign (false) {
    std :: cout << "Copy Constructor for 'AForm' are Called ...!! " << std :: endl;
}

AForm& AForm :: operator=(const AForm& rest){
    if (this != &rest){
        this->Sign = rest.Sign;
    }
    return *this;
}
AForm :: ~AForm(){
    std :: cout << "destructor for 'AForm' Called ... !" << std :: endl;
}

std :: string   AForm :: getName () const {
    return name;
}

int AForm :: getGrade_In() const {
    return grade_In;
}

int  AForm :: getGrade_Out() const{
    return grade_Exec;
}

bool AForm :: getSign () const{
    return Sign;
}

const char* AForm ::  GradeTooHighException :: what () const throw (){
    return "Grade is too high! Cannot increment beyond grade 1.";
     
}

const char* AForm ::  GradeTooLowException :: what () const  throw (){
     return "Grade is too Low! Cannot Decrement beyond grade 150.";
}

void AForm::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= grade_In) {
        Sign = true;
    } else {
        throw AForm::GradeTooLowException();
    }
}
std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << AForm.getName() << ", AForm grade to sign: " << AForm.getGrade_In() 
       << ", grade to execute: " << AForm.getGrade_Out()
       << ", is signed: " << (AForm.getSign() ? "Yes" : "No");
    return os;
}