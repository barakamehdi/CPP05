#include    "Form.hpp"

Form  :: Form () : name ("default") ,grade_In(150), grade_Exec(150), track(false) {
    std :: cout << "Default Construtor for FORM is Called ...!!! " << std :: endl;
 }

Form :: Form (const std :: string& name , int grade_sign , int grade_Exec) : 
                        name (name),grade_In (grade_sign), grade_Exec(grade_Exec),track (false) {
            if (grade_In < 1 || grade_Exec < 1)
                throw Form :: GradeTooHighException ();
            else if (grade_In > 150 || grade_Exec > 150)
                throw Form :: GradeTooLowException();
            track = false;
} 

Form :: Form (const Form& copy) : name (copy.name), grade_In(copy.grade_In) ,grade_Exec(copy.grade_Exec) ,track (false) {
    std :: cout << "Copy Constructor for 'Form' are Called ...!! " << std :: endl;
}

Form& Form :: operator=(const Form& rest){
    if (this != &rest){
        this->track = rest.track;
    }
    return *this;
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

bool Form :: getTrack () const{
    return track;
}

const char* Form ::  GradeTooHighException :: what () const throw (){
    return "Grade is too high! Cannot increment beyond grade 1.";
     
}

const char* Form ::  GradeTooLowException :: what () const  throw (){
     return "Grade is too Low! Cannot Decrement beyond grade 150.";
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= grade_In) {
        track = true;
    } else {
        throw Form::GradeTooLowException();
    }
}
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << form.getName() << ", Form grade to sign: " << form.getGrade_In() 
       << ", grade to execute: " << form.getGrade_Out()
       << ", is signed: " << (form.getTrack() ? "Yes" : "No");
    return os;
}