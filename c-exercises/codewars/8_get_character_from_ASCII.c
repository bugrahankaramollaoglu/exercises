/* Write a function get_char() / getChar() which takes
a number and returns the corresponding ASCII char for that value.
In C, getchar() is an important built-in function, so the
function will be named char_of_code to avoid confusion.

Example:

get_char(65)

should return:

'A'
 */

char char_of_code(unsigned charcode)
{
    char myChar;
    myChar = charcode;
    return myChar; // bu satır da yetiyor
}