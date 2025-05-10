#include   "Form.hpp"

Form  :: Form () : name ("default") ,grade_In(150), grade_Exec(150), Sign(false) {
    std :: cout << "Default Construtor for Form is Called ...!!! " << std :: endl;
 }

Form :: Form (const std :: string& name , int grade_sign , int grade_Exec) : 
                        name (name),grade_In (grade_sign), grade_Exec(grade_Exec),Sign (false) {
            if (grade_In < 1 || grade_Exec < 1)
                throw Form :: GradeTooHighException ();
            else if (grade_In > 150 || grade_Exec > 150)
                throw Form :: GradeTooLowException();
            Sign = true;
} 

Form :: Form (const Form& copy) : name (copy.name),
                     grade_In(copy.grade_In) ,grade_Exec(copy.grade_Exec) ,Sign (false) {
    std :: cout << "Copy Constructor for 'Form' are Called ...!! " << std :: endl;
}

Form& Form :: operator=(const Form& rest){
    if (this != &rest){
        this->Sign = rest.Sign;
    }
    return *this;
}
Form :: ~Form(){
    std :: cout << "destructor for 'Form' Called ... !" << std :: endl;
}

std :: string   Form :: getName () const {
    return name;
}

int Form :: getGrade_In() const {
    return grade_In;
}

int  Form :: getGrade_Out() const{
    return grade_Exec;
}

bool Form :: getSign () const{
    return Sign;
}

const char* Form ::  GradeTooHighException :: what () const throw (){
    return "Grade is too high! Cannot increment beyond grade 1.";
     
}

const char* Form ::  GradeTooLowException :: what () const  throw (){
     return "Grade is too Low! Cannot Decrement beyond grade 150.";
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= grade_In) {
        Sign = true;
    } else {
        throw Form::GradeTooLowException();
    }
}
std::ostream& operator<<(std::ostream& os, const Form& Form) {
    os << Form.getName() << ", Form grade to sign: " << Form.getGrade_In() 
       << ", grade to execute: " << Form.getGrade_Out()
       << ", is signed: " << (Form.getSign() ? "Yes" : "No");
    return os;
}