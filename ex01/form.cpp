#include    "Form.hpp"

Form  :: Form (){
    std :: cout << "Default Construtor for FORM is Called ...!!! " << std :: endl;
 }

Form :: Form (const std :: string& name , int grade , int grade_sign , int grade_Exec bool trucker) : 
                        name (name),grade_In (grade_sign), grade_Exec(grade_Exec),trucker (false) {
            if (grade < 1)
                throw Form :: GradeTooHighException ();
            else if (grade > 150)
                throw Form :: GradeTooLowException();
} 

form :: Form (const Form& copy){

}