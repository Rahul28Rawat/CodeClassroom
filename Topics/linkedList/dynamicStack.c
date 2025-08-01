/*
 * C Program to Implement Stack Operations using Dynamic Memory 
 * Allocation
 */
 #include <stdio.h>
 #include <stdlib.h>
  
 struct node
 {
     int data;
     struct node *link;
 }*top = NULL;
  
 #define MAX 5
  
 // function prototypes
 void push();
 void pop();
 void empty();
 void stack_full();
 void stack_count();
 void destroy();
 void print_top();
  
 void main()
 {
     int choice;
  
     while (1)
     {
         printf("1. push an element \n");
         printf("2. pop an element \n");
         printf("3. check if stack is empty \n");
         printf("4. check if stack is full \n");
         printf("5. count/display elements present in stack \n");
         printf("6. empty and destroy stack \n");
         printf("7. Print top of the stack \n");
         printf("8. exit \n");
         printf("Enter your choice \n");
         scanf("%d",&choice);
         switch (choice)
         {
         case 1:    
             push();
             break;         
         case 2:    
             pop();
             break;         
         case 3:    
             empty();
             break;         
         case 4:    
             stack_full();
             break;         
         case 5:    
             stack_count();
             break;         
         case 6:    
             destroy();
             break;         
         case 7:    
             print_top();
             break;
         case 8:    
             exit(0);
         default:
             printf("wrong choice\n");         
         }
     }
 }
  
 // to insert elements in stack
 void push()
 {
     int val,count;
     struct node *temp;
     temp = (struct node*)malloc(sizeof(struct node));
  
     count = st_count();
     if (count <= MAX - 1)
     {
         printf("\nEnter value which you want to push into the stack :\n");
         scanf("%d",&val);
         temp->data = val;
         temp->link = top;
         top = temp;
     }
     else
         printf("WARNING: STACK FULL\n");
 }
  
 // to delete elements from stack
 void pop()
 {
     struct node *temp;
     if (top =  = NULL)
         printf("**Stack is empty**\n");
     else
     {
         temp = top;
         printf("Value popped out is %d \n",temp->data);
         top = top->link;
         free(temp);
     }
 }
  
 // to check if stack is empty
 void empty()
 {
     if (top == NULL)
         printf("STACK IS EMPTY\n");
     else
         printf("elements are present, stack is not empty \n");
 }
  
 // to check if stack is full
 void stack_full()
 {
     int count;
  
     count = st_count();
     if (count =  = MAX)
     {
         printf("stack is full\n");
     }
     else
         printf("stack is not full \n");
 }
  
 // to count the number of elements
 void stack_count()
 {
     int count = 0;
     struct node *temp;
  
     temp = top;
     while (temp! = NULL)
     {
         printf(" %d\n",temp->data);
         temp = temp->link;
         count++;
     }
     printf("size of stack is %d \n",count);
 }
  
 int st_count()
 {
     int count = 0;
     struct node *temp;
     temp = top;
     while (temp! = NULL)
     {
         temp = temp->link;
         count++;
     }
     return count;
 }
  
 // to empty and destroy the stack
 void destroy()
 {
     struct node *temp;
     temp = top;
     while (temp! = NULL)
     {
         pop();
         temp = temp->link;
     }
     printf("stack destroyed\n");
 }
  
 // to print top element of stack
 void print_top()
 {
     if (top == NULL)
         printf("\n**Top is not available for an EMPTY stack**\n");
     else
         printf("\nTop of the stack is %d \n",top->data);
 }