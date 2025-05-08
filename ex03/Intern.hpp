#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "RobotomyRequestAForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"



class   Intern {
    public :
            Intern ();
            Intern (const Intern& copy);
            Intern&operator=(const Intern& other);
            ~Intern();
            AForm*  makeForm (std :: string name ,std :: string target);

}



#endif