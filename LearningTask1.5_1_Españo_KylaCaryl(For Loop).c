//CCIT 102 - Computer Programming 1//
//I have only used for loop in this program because I have encountered difficulties in inserting the while loop and do while.//
#include <stdio.h> //Preprocessor directive in C.//

int main() //Indicates the start of the program execution.//
{ //Begining of the function.//
    int num, endnum, sum1 = 0, sum2 = 0;//Declaration of variables.//
    //Input//
    printf("Input starting integer:");//To display the information.//
    scanf("%d",&num);//Allowing to enter the integer and stores it in the variable num.//
    printf("Input ending integer:");//To display the information.//
    scanf("%d",&endnum);//Allowing to enter the integer and stores it in the variable endnum.//

    //Process//
    printf("\nEVEN NUMBERS ");
    printf("\n");//new line//
    for(num=2;num<=endnum;num=num+2) //For loop//
    {
        printf("%d\t", num); //Output; \t for spaces between the integers//
        if(num%2 == 0)//If the number modulo division 2 is equal to zero//
        sum1 = sum1 + num; //Expression; fromula to perform the operation of printing the sum//
    }
     printf("Sum: %d", sum1); //Output; the sum//

     printf("\nODD NUMBERS ");
     printf("\n");//new line//
     for(num=1;num<=endnum;num=num+2) //For loop//
    {
        if(num%2 != 0) //If the number modulo division 2 is not equal to zero//
        printf("%d\t", num); //Output; \t for spaces between the integers//
        sum2 = sum2 + num; //Expression; fromula to perform the operation of printing the sum//
    }
     printf("Sum: %d", sum2); //Output; the sum//

    return 0; //Terminates the C program//
} //End of the function//
