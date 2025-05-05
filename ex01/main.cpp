#include "AForm.hpp"

int main(){
	try{
		Bureaucrat b1("b1", 9);
		AForm f1("f1", 10, 10);
		b1.signAForm(f1);

		Bureaucrat b2("b2", 11);
		AForm f2("f2", 10, 10);
		b2.signAForm(f2);
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}