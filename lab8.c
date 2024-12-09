#include<stdio.h>
void push();
void pop();
void peek();
int isfull();
int isempty();
int stack[100],maxsize,top=-1;
void main()
{
printf("Stack size: ");
scanf("%d",&maxsize);
isempty();
isfull();
peek();
int item;
printf("Enter the element to be inserted: ");
scanf("%d",&item);
push(item);
int term;
printf("Enter 1 to delete an element from stack");
scanf("%d",&term);
if(term==1)
{
pop();
}
int isempty(){
if(top==-1){
printf("Stack is empty");
return 0;
}
else
return 1;
}
void peek(){
printf("The peek of stack is %d\t\n",top);
}
void push(int data){
if(isfull()==1){
top=top+1;
stack[top]=data;
printf("The element %d is inserted \n ",data);
}
}
void pop(){
if(isempty()==1){
printf("\n The popped element is %d \n",stack[top]);
top=top-1;
}
}
} 
