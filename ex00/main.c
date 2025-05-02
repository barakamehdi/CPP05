#include "Bureaucrat.hpp"

int main(){
	Bureaucrat bureaucrat;
	std::cout << bureaucrat;
	try{
		Bureaucrat bureaucrat1(" bureaucrat1", 1);
		std::cout << bureaucrat1 << std :: endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bureaucrat2(" bureaucrat2", 150);
		std::cout << bureaucrat2 << std :: endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{  
		Bureaucrat bureaucrat3(" bureaucrat3", 151);
		std::cout << bureaucrat3 << std :: endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	bureaucrat4(" buraucrat4", 3);
		bureaucrat4.incrementGrade();
		bureaucrat4.incrementGrade();
		std::cout << bureaucrat4 << std :: endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}