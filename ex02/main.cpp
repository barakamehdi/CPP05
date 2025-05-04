#include "AForm.hpp"

// int main(){
// 	try{
// 		Bureaucrat b1("b1", 9);
// 		AForm f1("f1", 10, 10);
// 		b1.signAForm(f1);

// 		Bureaucrat b2("b2", 11);
// 		AForm f2("f2", 10, 10);
// 		b2.signAForm(f2);
// 	}
// 	catch(const std::exception& e){
// 		std::cout << e.what() << std::endl;
// 	}
// }


/////////////////////////////////////////////////////////////////////////////////////////////
// RobotomyRequestAForm Implementation
// ├── Class Definition
// │   ├── Inherit from AForm
// │   └── Define required member variables (if any)
// │
// ├── Constructors & Destructors
// │   ├── Default constructor (optional but recommended)
// │   ├── Constructor taking target string
// │   │   └── Initialize with name "Robotomy Request" and required grades (sign: 72, exec: 45)
// │   ├── Copy constructor
// │   ├── Assignment operator overload
// │   └── Destructor (virtual)
// │
// ├── Execute Method Implementation
// │   ├── Override execute(Bureaucrat const & executor) const
// │   │   ├── Call base class execute to validate permissions
// │   │   ├── Display drilling noise message
// │   │   ├── Generate random outcome (50% chance)
// │   │   └── Display success or failure message based on outcome
// │   │       ├── Success: "<target> has been robotomized successfully"
// │   │       └── Failure: "Robotomy of <target> failed"
// │
// └── Additional Methods (if needed)
//     └── Any helper functions for randomization or output AFormatting
///////////////////////////////////////////////////////////////////////////////////////////////