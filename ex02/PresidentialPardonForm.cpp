#include "ShrubberyCreationForm"


ShrubberyCreationForm :: ShrubberyCreationForm(): AForm ("shrubbery ",145,137),target (target){
    std :: cout << "Default Costructor for Shrubbery is Called ...!!" << std :: endl;
}

ShrubberyCreationForm :: ShrubberyCreationForm(const std :: string target) 
                    : AForm ("shrubberyAForm ",signGrade,execGrade),target (target){
    std :: cout << "Copy Constructor is Called ...!!" << std :: endl;
}

ShrubberyCreationForm& ShrubberyCreationForm ::operator=(const ShrubberyCreationForm& other){
    if (this != &other)
        target = other.target;
    return *this;
}

void ShrubberyCreationForm :: execute(Bureaucrat const & executor) const{
    if (!this->getSign())
        throw AForm::NotSigned();
    if (executor.getGrade() > this->getGrade_out())
        throw AForm::GradeTooLowException();

    std :: string filename = this->target + "_shrubbery";
    std :: ofstream outfile(filename.c_str());

    if (!outfile.is_open()){
        std :: cout << "Error for Creating this " << filename << std :: endl;
        return
    }
    outfile << "    *    " << std::endl;
    outfile << "   ***   " << std::endl;
    outfile << "  *****  " << std::endl;
    outfile << " ******* " << std::endl;
    outfile << "*********" << std::endl;
    outfile << "    |    " << std::endl;
    outfile << "    |    " << std::endl;
    
    outfile.close();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& ShrubberyCreationForm){
    os << "ShrubberyCreationForm: " << ShrubberyCreationForm.getName() << std :: endl;
    os << "Target: " << ShrubberyCreationForm.target << std :: endl;
    os << "Sign Grade: " << ShrubberyCreationForm.getGrade_In() << std :: endl;
    os << "Exec Grade: " << ShrubberyCreationForm.getGrade_Out() << std :: endl;
    return os;
}
