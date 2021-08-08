Program to explain all data types including signed and unsigned.
#include<stdio.h>
int main()
{
printf(“size of integer %d\n” , sizeof(int));  //4
printf(“size of float %d\n” , sizeof(float));  //4
printf(“size of character %d\n” , sizeof(char));  //1
printf(“size of double %d\n” , sizeof(double));  //8
printf(“size of long double %d\n” , sizeof(long double));  //16
printf(“size of  short integer %d\n” , sizeof(short int));  //2
printf(“size of  long integer %d\n” , sizeof(long int)); //8
printf(“size of unsigned  integer %d\n” , sizeof(unsigned int));  //4
printf(“size of signed  integer %d\n” , sizeof(signed int));  //4
return 0;
}


Assigning signed and unsigned value and viceversa by initialization and declaration..
•	signed short : we can store both positive and negative value.
           		Sizeof short is 2 bytes of memory.Minimum integer value store is  -32768 and maximum integer value stored is 32767.
	signed declaration :  we can declare signed variables in 4 ways as follows:
 1)short a;
				2)short int a;
				3)signed short a;
				4)signed short int a;
                               Note: Here format specifier is %d
		Example : #include<stdio.h>
		   	       Int main()
{
				Signed short x=32769;
				Printf(“%d”,x);  
}
o/p: -32767(it will not give error it stores one garbage value in the memory).
•	unsigned short : we can store only positive values.
Size of unsigned short is 2 bytes of memory ,minimum integer value store is 0 and maximum integer value stored is 65535.
unsigned declaration : 1)unsigned short a;
2)unsigned short int a;
Note:Here format specifier is %u
Example: #include<stdio.h>
		   	       Int main()
{
				unsigned short x= -4;
				unsigned short y= 65538;
				Printf(“%u”,x);  //it will check in unsigned circle
				Printf(“%d”,y);  //it will check in signed circle

}
o/p: 65532
       2	
Note: In declaration of variable if there is no specification whether signed or unsigned by default it is signed variable.
