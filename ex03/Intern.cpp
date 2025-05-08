#include "Intern.hpp"

Intern :: Intern(){
    std :: cout <<  "Default constructor for Intern Called ...!" << std :: endl;
}

Intern :: Intern(const Intern& copy){
    std :: cout << "Copy constructor for Intern is Called ...!" << std ::endl;
}