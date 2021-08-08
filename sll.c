Create a list with 3 nodes having int data in single linked list data: 100,200,300
#include<stdio.h>
#include<stdlib.h>
struct  ll       //linked list
{
int data;
struct ll *next;
};
typedef struct ll node;
node *first = NULL, *last = NULL;
void create_node(int ele)
{
node *new = (node*)malloc(sizeof(node));
if(first == NULL)
{
new -> data = ele;
new-> next = NULL;
first = last = new;
}
else
{
new -> data = ele;
new -> next = NULL;
last -> next = new;
last  = new;
}
}
void display()
{
node *temp = first;
while(temp!=NULL)
{
printf(“%d\n”,temp->data);
temp=temp->next;
}
}
int main()
{
create_node(100);
create_node(200);
create_node(300);
display();
return 0;
}
