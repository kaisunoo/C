//CCIT 102 - Computer Programming 1//
//Arrays, Kyla Caryl B. Españo//
#include <stdio.h> //Preprocessor in C//
int main () //Start of program execution//
{ //Beginning of the Function//
    //Declaration//
    int num[10], i, evenum = 0, oddnum = 0;
    printf("Input 10 integers in the array :\n");

    //Input//
    for(i = 0 ; i < 10 ; i++) //For loop; initialization, condition, update//
    {
    printf("array [%d]: ", i);
    scanf("%d",&num[i]);

    //Statements//
    if(num[i] % 2 == 0)
        {
            evenum = i;
        }
    if(num[i] % 2 != 0)
        {
            oddnum = i;
        }
    }

     //Process//
     //If-Else Statement//
     if(evenum)
   {
       printf("\n\nEven integers Found!");
       printf("\nEven integers are:\n");
       for(i = 0 ; i < 10 ; i++) //For loop; initialization, condition, update//
       {
           //Statements//
           if(num[i] %2 == 0)
           {
               printf("%d",num[i]); //Output//

           }
       }
   }
   else
   {
       printf("\n\nNo Even integers Found!"); //Output//
   }

    //If-Else Statement//
    if(oddnum)
   {
       printf("\n\nOdd integers Found!");
       printf("\nOdd Integers are:\n");
       for(i = 0 ; i < 10 ; i++) //For loop; initialization, condition, update//
       {
           //Statements//
           if(num[i] % 2 != 0)
           {
               printf("%d",num[i]); //Output//
           }
       }
   }
   else
   {
       printf("\n\nNo Odd integers Found!"); //Output//
   }

return 0; //Terminates the program//
} //Ends of Function//
