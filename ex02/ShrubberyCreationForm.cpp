#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm :: ShrubberyCreationForm(): AForm ("shrubbery ",145,137),target ("default"),signGrade(145),execGrade(137){
    std :: cout << "Default Costructor for Shrubbery is Called ...!!" << std :: endl;
}

ShrubberyCreationForm :: ShrubberyCreationForm(const std :: string target) 
: AForm ("shrubberyAForm ",145,137),target (target),signGrade(145),execGrade(137) {
    std :: cout << "Parameterized for ShrubberyCreationForm  Constructor is Called ...!!" << std :: endl;
}
ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm& copy) 
                    : AForm (copy),target(copy.target),signGrade(copy.signGrade),execGrade(copy.execGrade){
    std :: cout << "Copy Constructor for Shrubbery is Called ...!!" << std :: endl;
    *this = copy;
    this->target = copy.target;
}

ShrubberyCreationForm& ShrubberyCreationForm ::operator=(const ShrubberyCreationForm& other){
    if (this != &other)
        target = other.target;
    return *this;
}

std ::string ShrubberyCreationForm :: Get_target()const{
    return target;
}
ShrubberyCreationForm :: ~ShrubberyCreationForm(){
    std :: cout << "Destructor for Shrubbery is Called ...!!" << std :: endl;
}
void ShrubberyCreationForm :: execute(Bureaucrat const & executor) const{
    if (!this->getSign())
        throw AForm::NotSigned();
    if (executor.getGrade() > this->getGrade_Out())
        throw AForm::GradeTooLowException();

    std :: string filename = this->target + "_shrubbery";
    std :: ofstream outfile(filename.c_str());

    if (!outfile.is_open()){
        std :: cout << "Error for Creating this " << filename << std :: endl;
        return ;
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
    os << "Target: " << ShrubberyCreationForm.Get_target() << std :: endl;
    os << "Sign Grade: " << ShrubberyCreationForm.getGrade_In() << std :: endl;
    os << "Exec Grade: " << ShrubberyCreationForm.getGrade_Out() << std :: endl;
    return os;
}
