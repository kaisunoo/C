//CCIT 102 - Computer Programming 1//

#include <stdio.h> //Command that is used as a preprocessor directive in C.//
int main() //This line indicates the start of the program execution.//
{ //Opening bracket; Indicates the beginning of the function in the program.//
    float cm, inch; //Declaration of Variables as float to indicate the data type for values containing decimal places.//
    printf("\nPlease input length in centimeter:"); //To display the information within the 'format string' as an output and \n for newline.//
    scanf("%f", &cm); //reads the entered floating number and stores it in the variable cm//
    inch = cm / 2.54; //Arithmetic expression; Divide//
    printf("\nEquivalent in inch/es:%0.2f", inch); //To display information of the inch/es in 2 decimal places as an output.//
    return 0; //Command that terminates the C program.//
} //Closing bracket; Indicates the end of the function in the program.//
