. Program to explain all storage classes scope.
Storage class specifiers : A storage class represents the visibility and a location of a variable. It tells from what part of code we can access a variable.
1.	auto : The variables defined using auto storage class are called as local Variables. Auto stands for automatic storage class. The Scope of auto variable is limited with particular block. Once the control goes out of the block, the access is destroyed.
Intial / default : Garbage value      Storage Space : CPU memory
Scope : Local
#include<stdio.h>
int fun()
{
Auto  int count=0;
count++;
return count;
}
int main()
{
printf(“ %d” , fun());
printf(“%d”, fun());
return 0;
}	
o/p : 1,1
2.	extern : It stands for External storage class. Keyword extern is used to declaring a global variable or function in another file to provide the refrence of variable or function which have been already defined in the orginal file.
Intial / default : Zero            Storage Space : CPU memory
Scope : Global
First  file : main.c

#include<stdio.h>
extern i;
main()
{
printf(“value of the external integer is = %d\n” , i);
return 0;
}
Second  file : orginial.c
#include<stdio.h>
i = 48;
o/p : value of the external integer is = 48

3.	static : The static variable are used within function/file as local static variables. They can also be used as a global variable. 
Intial / default : Zero          Storage Space : CPU memory
Scope : Local
#include<stdio.h>
int fun()
{
static int count=0;
count++;
return count;
}
int main()
{
printf(“ %d” , fun());
printf(“%d”, fun());
return 0;
}
o/p: 1 2
4.	register : This storage class is used to store local variables within functions or blocks in CPU register instead of RAM to have quick access to these variables.
Intial / default : Garbage         Storage Space : Register
Scope : Local
#include<stdio.h>
int main()
{
register int i;
for(i=1;i<=10;i++)
printf(“%d” , i);
return 0;
}
o/p: 1 2 3 4 5 6 7 8 9 10
  Global static variable:
#include<stdio.h>
void func(void);
static int b=10;
main()
{
func();
func();
func();
}
void func(void)
{
static int b=10;
printf(“%d %d”,b,b);
b++;
}
