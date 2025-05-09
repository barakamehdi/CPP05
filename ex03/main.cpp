#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestAForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        try
        {
            if (rrf){
                Bureaucrat  bur1("Bur1", 149);
                rrf->beSigned(bur1);
                bur1.signAForm(*rrf);
                bur1.executeForm(*rrf);
                rrf->execute(bur1);
            }
            else
                delete rrf;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
        delete rrf;
    }
    std::cout << "===========================================================================\n";
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender2");
        try
        {
           if (rrf){
                Bureaucrat  bur2("Bur2", 137);
                rrf->beSigned(bur2);
                bur2.signAForm(*rrf);
                bur2.executeForm(*rrf);
                rrf->execute(bur2);
            }
            else
                delete rrf;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
        delete rrf;
    }
}