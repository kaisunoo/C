//CCIT 102 - Computer Programming 1//
//While Loop, Kyla Caryl B. Españo//
#include <stdio.h>

int main()
{   //Declaration//
    int num, endnum, sum1 = 0, sum2 = 0;
    printf("Input starting integer:");//Input//
    scanf("%d",&num);
    printf("Input ending integer:");
    scanf("%d",&endnum);

    //Process//
    printf("\nEVEN NUMBERS ");
    printf("\n");
    num=2;//Initialization//
    while(num<=endnum)//Condition//
    {
        //Statements//
        printf("%d\t",num);//Output; Even numbers//
        if(num%2 == 0)
        sum1 = sum1 + num;
        num=num+2;//Upate//
    }
    printf("Sum: %d", sum1);//Output; sum//

    printf("\nODD NUMBERS ");
    printf("\n");
    num=1;//Initialization//
    while(num<=endnum)//Condition//
    {
        //Statements//
        printf("%d\t",num);//Output; Odd numbers//
        if(num%2 != 0)
        sum2 = sum2 + num;
        num=num+2;//Upate//
    }
    printf("Sum: %d", sum2);//Output; sum//

    return 0;
}
