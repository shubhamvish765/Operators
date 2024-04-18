#include<stdio.h>

/*int main()
{
    int num;
    printf("Enter digit: ");
    scanf("%d",&num);

    int unitdigit = num%10;
    printf("unitdigit of the given number %d %d",num,unitdigit);
    return 0;
}*/

//Write a program to print a given number without its last digit.
/*int main()
{
    int num1;
    printf("Enter number atleast 3 digit: ");
    scanf("%d",&num1);
    int num2 = num1/10;
    printf("without last digit %d",num2);
    return 0;
}*/

//Write a program to swap values of two int variables
/*int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("\nbefore swapping\n");
    
    printf("a=%d and b=%d",a,b);
    printf("\nafter swapping\n");
    printf("a=%d b=%d",b,a);

    return 0;
}*/

//Write a program to swap values of two int v
//ariables without using a third variable
/*int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("a=%d b=%d",a,b);
    return 0;
}
*/

//Write a program to input a three-digit number -----------> not accuratee answaer
//and display the sum of the digits.
/*int main()
{ 
    int num = 124;
    int num1 = num%10;
    int num2 = num1%10;
    int num3 = num2%10;
    int sum = 0;
    sum = sum +num1+num2+num3;
    printf("Sum of three digit is %d",sum); 
    return 0;
}
*/
//Write a program which takes a character as an input and displays its ASCII code
/*int main()
{
    char ch;
    printf("Enter alphabet:");
    scanf("%c",&ch);
    printf("ASCII code of alaphabet is %d",ch);
    return 0;
}*/

//Write a program to check whether the given number is even or odd using a bitwise 
//operator.  ------> ERROR
/*int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    if(num^1) ? printf("Even") : printf("odd");
    return 0;
}*/

//Write a program to print size of an int, a float, a char and a double type variable
/*
int main()
{
    int a;
    printf("Size of int is %d byte",sizeof(a));
    printf("\n");
    float b;
    printf("Size of float is %d byte\n",sizeof(b));
    char ch;
    printf("Size of char is %d byte\n",sizeof(ch));
    double d;
    printf("Size of double is %d byte\n",sizeof(d));
    return 0;
}
*/


/*int main()
{
    int a = 2345;
    int b = a/10;
    int c = b*10;
    printf("%d",c);
    return 0;
}
*/
/*int main()
{
    int INR;
    printf("Enter INR:");
    scanf("%d",&INR);
    //Convert INR into USD
    double USD = 76.23*INR;
    printf("USD : %0.2lf",USD);
    return 0;
}*/

/*int main()
{
    int a;
    scanf("%d",&a);
    int lastdigit = a%10;
    int remainingdigit = a/10;
    int rotate = 100*lastdigit+remainingdigit;
    printf("%d",rotate);
    return 0;
}*/

/*int main()
{
    int num;
    printf("Enter 3-digit number:");
    scanf("%d",&num);

    int x = num%10;
    int y = num/10;
    int z = 100*x + y;
    printf("rotate digit %d",z);
    return 0;
}
*/
/*
Write a program to input a number
 from the user and also input a digit. Append a 
digit in the number and
 print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/
/*int main()
{
    int n;
    int digit;
    printf("Enter 3-digit number: ");
    scanf("%d",&n);
    printf("Enter digit: ");
    scanf("%d",&digit);
    int m = n*10 + digit;
    printf("resultant number is %d",m);
    return 0;
}
*/

/*int main()
{
    int num = 561;
    int num1 = num/100;
    int num2 = (num/10)%10;
    int num3 = num%10;

    int sum = num1+num2+num3;
    printf("%d ",sum);
    return 0;
}*/

/*int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n&1)
    {
        printf("%d is odd number",n);
    }
    else{
        printf("%d is even number",n);
    }
    return 0;
}*/


