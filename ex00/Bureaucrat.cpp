#include "Bureaucrat.hpp"


Bureaucrat  :: Bureaucrat(){
    std :: cout << "Defualt Constructure for Bureaucrat  Called ...!" << std :: endl;
}

Bureaucrat :: Bureaucrat (const Bureaucrat& copy){

    std :: cout << "Copy Constructure for Bureaucrat Called ...!! " << std :: endl;
}

Bureaucrat :: ~Bureaucrat(){
    std :: cout << "Destructure for Bureaucrat Called ... !!! " << std  :: endl;
}

// Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rest) {

//         if (this* != rest){



//         }

// }