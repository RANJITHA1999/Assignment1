Create a circular LL with 5 nodes having char data-vowels-a, e, i, o, u.
//ASCII values for a-z = 97-122
#include<stdio.h>
#include<stdlib.h>
struct cll                        //circular linked list
{
char ch;
struct cll *next;
};	
typedef struct cll node;
node *first = NULL, *last = NULL;
void create_node(char vowels)
{	
node *new = (node*)malloc(sizeof(node));
if(first==NULL)
{
new -> ch=vowels;
new-> next = first;
first = last = new;
}
else
{
new -> ch = vowels;
new -> next = first;
last -> next = new;
last = new;
}
}
void display()
{
node *temp = first;
do
{
printf(“%d/n”, temp -> ch);
temp = temp -> next;
}
while(temp!= first);
}
int main()
{
create_node(‘a’);  //97
create_node(‘e’);  //101
create_node(‘i’);  //105
create_node(‘o’);  //111
create_node(‘u’);  //117
display();
return 0;
}
	To print a,e,i,o,u using cll
//ASCII values for a-z = 97-122
#include<stdio.h>
#include<stdlib.h>
struct cll                        //circular linked list
{
char ch;
struct cll *next;
};	
typedef struct cll node;
node *first = NULL, *last = NULL;
void create_node(char vowels)
{	
node *new = (node*)malloc(sizeof(node));
if(first==NULL)
{
new -> ch=vowels;
new-> next = first;
first = last = new;
}
else
{
new -> ch = vowels;
new -> next = first;
last -> next = new;
last = new;
}
}
void display()
{
node *temp = first;
do
{
printf("%c\t", temp -> ch);
temp = temp -> next;
}
while(temp!= first);
}
int main()
{
create_node('a');  //97
create_node('e');  //101
create_node('i');  //105
create_node('o');  //111
create_node('u');  //117
display();
return 0;
}
