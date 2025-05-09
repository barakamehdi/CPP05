#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "RobotomyRequestAForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"



class   Intern {
    public :
            Intern ();
            Intern (const Intern& copy);
            Intern&operator=(const Intern& other);
            ~Intern();
            AForm*  makeForm (std :: string FormName ,std :: string target);

};



#endif