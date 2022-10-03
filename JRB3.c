// 1. Write a program to check whether a given number is positive or non-positive.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int num;
// printf("Enter a number ");
// scanf("%d",&num);
// if (num>0)
// printf("Number is positive");
// else
// printf("Number is non Positive");

// return 0 ;
// }


// 2. Write a program to check whether a given number is divisible by 5 or not
// #include<stdio.h>
// #include<conio.h>
// int main()                               
// {
// int num;
// printf("Enter A Number");
// scanf("%d",&num);
// if(num%5)
// printf("%d is not divisile",num);
// else
// printf("%d is  divisible by 5",num);     
// return 0 ;
// }





// 3. Write a program to check whether a given number is an even number or an odd
// number.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int num;
//     printf("Enter A Number to check ");
//     scanf("%d",&num);
//     if(num%2)
//     printf("%d is odd ",num);
//     else
//     printf("%d is even",num);

// return 0 ;
// }




// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int num;
// printf("Enter a Number To Check ");
// scanf("%d",&num);
// if(num&1)
// printf("%d is odd",num);
// else
// printf("%d is even",num);

// return 0 ;
// }




// 5. Write a program to check whether a given number is a three-digit number or not.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int num;
// printf("Enter a number ");
// scanf("%d",&num);
// if(num/10==0)
// printf("Number is not 3 digit ");
// else if (num/10==0)
// printf("number is not 3 digit ");
// else if (num/10==0)
// printf("Number is 3 digit ");
// else
// printf("Number is not 3 digit");

// return 0 ;
// }



// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int num1, num2;
// printf("Enter two numbers");
// scanf("%d%d",&num1,&num2);

// if(num1>num2)
// printf("%d is greater then %d", num1, num2);
// else if (num2>num1)
// printf("%d is greater than %d", num2 ,num1);
// else if (num1==num2)
// printf("The number are eqaul so num is %d", num1);

// return 0 ;
// }



// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
//     int a,b,c ,D;
//     float x,y;
// printf("Enter the Coefficient of x^2");
// scanf("%d%d%d",&a,&b,&c);
// D=b*b-4*a*c;
// if (D<0)
// {
//     printf("roots are imaginary");
// }
// if(D==0)
// {
//     printf(" Roots are real distict\n");
//     x=-b/(2.0*a);
//     printf("Roots are %f",x);
// }
// if(D>0)
// {
//     printf("Both roots are here\n");
//     x=(-b+sqrt(D))/(2*a);
//     y=(-b-sqrt(D))/(2*a);
//     printf("The roots are %f and %f",x,y);
// }
// return 0 ;
// }




// 8. Write a program to check whether a given year is a leap year or not.

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int year ;
// printf("Enter A Year ");
// scanf("%d",&year);
// if ((year%1000==0 &year%400==0)|(year%4==0))
// printf("%d is a Leap Year",year);
// else
// printf("%d is not a Leap Year",year);
// return 0 ;
// }




// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int num1,num2,num3;
// printf("Enter 3 numbers ");
// scanf("%d%d%d",&num1,&num2,&num3);
// if (num1>=num2 & num1>=num3)
// printf("%d ",num1);
// else if(num2>=num1 & num2>=num3)
// printf("%d ",num2);
// else 
// printf("%d",num3);
// return 0 ;
// }



// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   int CP,SP,profit ,loss ;
//   float profitPercentage ,LossPercentage;
//   printf("Enter Cost Price ");
//   scanf("%d",&CP);
//   printf("Enter Selling Price ");
//   scanf("%d",&SP);

//   if(CP>SP)
//   {
//     // printf("You are in Loss \n");
//     loss=CP-SP;
//     LossPercentage=(loss*100)/CP;
//     printf("You are in %.1f%% Loss",LossPercentage);

//   }
//    else if (SP>CP)
//   {
//     // printf("You Are in Profit \n");
//     profit=SP-CP;
//     profitPercentage=(profit*100)/CP;
//     printf("You  have   %.1f%% Profit",profitPercentage);
//   }
//   else
//   printf("Your are not in loss and nor prfit");
 
// return 0 ;
// }


// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//   int s1,s2,s3,s4,s5,Marks;
// printf("Enter 5 subject marks ")
// scanf("%d%d%d%d%d",&s1,&s2,&s3,&s3,&s4,&s5)

// //   printf("Enter 1st subject Marks  ");
// //   scanf("%d",&s1);

// //   printf("Enter 2ndsubject Marks  ");
// //   scanf("%d",&s2);

// //   printf("Enter 3rd subject Marks  ");
// //   scanf("%d",&s3);

// //   printf("Enter 4th subject Marks  ");
// //   scanf("%d",&s4);
// //   printf("Enter 5th subject Marks  ");
// //   scanf("%d",&s5);

// Marks=s1+s2+s3+s4+s5;
// if(Marks<=500& Marks>=300)
// printf("You are passed in first division");
// else if (Marks<300&Marks>=225)
// printf("You are passed in Second Division");
// else if (Marks<225 & Marks >=150)
// printf("You are passed in   Third division");
// else
// printf("You are fail in the examination... try again\n And best of luck ");
// }





// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     char Char;
//     printf("Enter a Character ");
//     scanf("%c",&Char);
//     if (Char>='a' && Char<='z')
//     printf("The Char is lowercase");
//     else if (Char>='A' && Char<='Z')
//     printf("Character is Uppercase");
//     else
//     printf("Other character");
// return 0 ;
// }


// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//    int num;
//    printf("Enter a Number");
//    scanf("%d",&num);
//    if (num%2 || num%3 )
//    printf("%d is divisiable by 2 and 3", num);
//    else 
//    printf("%d is not divisiable by 2 and 3", num);
// return 0 ;
// }



// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//    int num;
//    printf("Enter a Number ");
//    scanf("%d", &num);
//    if (num%3 || num%7 )
//       printf("%d is not divisable for 3 or 7", num);
//       else
//          printf("%d is divisiable by 3 or 7", num);

//    return 0;
// }


// 15. Write a program to check whether a given number is positive, negative or zero.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//    int num;
//    printf("Enter a Number ");
//    scanf("%d", &num);
//    if(num>0)
//       printf("%d is positive", num);
//       else if (num==0)
//          printf("%d is Zero", num);
//          else
//             printf("%d is negative", num);

//    return 0;
// }



// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//    char a;
//    printf("Enter an Character ");
//    scanf("%c", &a);
//    if (a>='a' &&  a<='z')
//       printf("Alphabet and Lowercase");
//       else if(a>='A'&& a<='Z')
//          printf("Alphabet and Uppercase ");
//          else if (a<='0' && a>='9')
//             printf("A digit ");
//             else
//                printf("A special Character ");


//       return 0;
   

// }



// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//    int sizeOfTriangle;
//    printf("Enter sixe of Triangle ");
//    scanf("%d", &sizeOfTriangle);

//    return 0;
// }



// 18. Write a program which takes the month number as an input and display number of
// days in that 
// #include<stdio.h>
// #include<conio.h>
// int main()

// {
//    int Mnom;
//    printf("Enter month Number ");
//    scanf("%d", &Mnom);
//    if(Mnom ==1||Mnom==3||Mnom==5||Mnom==7||Mnom==8||Mnom==10||Mnom==12)
//       printf("31");
//       else if(Mnom==2)
//          printf("28 or 29");
//          else

//             printf("30");

//    return 0;
// }