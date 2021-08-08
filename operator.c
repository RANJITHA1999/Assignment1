Program to  explain all operators using different data types.
#include<stdio.h>
int main()
{
int a=2 , b=2;
float c=2.2 , d=2.2;

//Arithmetic operators (+, -, *, /, %)
printf(“sum=%d\n”, a+b);  //4
printf(“diff=%d\n”, a-b);   //0
printf(“mul=%d\n”, a*b);  //4
printf(“div=%d\n”, a/b);   //1
printf(“mod=%d\n”, a%b);  //0

//Relational operators(<, >, <=, >=, ==, !=)
printf(“%d\n” ,c>d);  //0
printf(“%d\n” ,c<d);   //0
printf(“%d\n” ,c>=d);  //1
printf(“%d\n” ,c<=d);  //1
printf(“%d\n” ,c==d);  //1
printf(“%d\n” ,c!=d);   //0

//Bitwise operators(&, |, ^, <<, >>)
printf(“%d\n”, a&b); //2
printf(“%d\n”, a|b);  //2
printf(“%d\n”, a^b); //0
printf(“%d\n”, a<<b); //8
printf(“%d\n”, a>>b); //0 

//logical operators(&&, ||, !)
printf(“%d\n”, a&&b); //1
printf(“%d\n”, a||b);  //1
printf(“%d\n”, !a);  //0

//assignment operators(+=, -=, *=, /=, %=)
printf(“%d\n”, a+=b); //4
printf(“%d\n”, a-=b);  //2
printf(“%d\n”, a*=b); //4
printf(“%d\n”, a/=b); //2
printf(“%d\n”, a%=b); //0  

return 0;
}
