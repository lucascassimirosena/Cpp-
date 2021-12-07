#include <iostream> //This is a header file and tells the preprocessor to include the contents from another file.

int main () // All C++ programs must have a function called main(), this is the starting point of the program.
{
    std::cout << "Game Over!" << std::endl; //shocking, this seems really long and different from C and Py.
    return 0;
}

//COMMENTS are made by using two forward slashes in a row .
/*  THIS IS
    A MULTIPLE LINE
    COMMENT 
*/

/* All functions are delimited by a pair of curly braces. Code between two curly braces is called block
and is usually indented to show that it forms a unit. The block of code that makes up an entire function
is called the body of the function.

"Game Over!" is a string, a series of printable characters. Technically, it's a string literal, meaning it's 
literally the characters between the quotes.

cout is an object, it was defined in the iostrem, it's used to send data to the standard output stream. The output
stream simply means the console window on the computer screen.

the output operator (<<) means that I'm sending data to cout. The output operator is like a funnel; it takes
whatever's on the open side and funnels it to the pointy side.

the prefix std in cout is to tell the compiler that I mean cout from the standard library. Std is a namespace.
Namespaces are like area codes of a phone number. It identifies the group to wich something belongs.
You prefix a namespace using the scope resolution operator (::).

std::endl goes to the standard output. endl is defined in iostream and is also an object in the std namespace. 
Sending endl to the standard output acts like pressing the Enter key in the console window.

statements are the basic units controlling the execution flow and they all end with a semicolon. 

return 0; this indicates that the program ended without a problem.

*/
