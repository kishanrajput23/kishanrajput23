#include<stdio.h>  
      struct node  
     {  
          int data;  
          struct node *left, *right;  
      }  
      void main()  
    {  
       struct node *root;  
       root = create();  
    }  
struct node *create()  
{  
   struct node *temp;  
   int data;  
   temp = (struct node *)malloc(sizeof(struct node));  
   printf("Press 0 to exit");  
   printf("\nPress 1 for new node");  
   printf("Enter your choice : ");  
   scanf("%d", &choice);   
   if(choice==0)  
{  
return 0;  
}  
else  
{  
   printf("Enter the data:");  
   scanf("%d", &data);  
   temp->data = data;  
   printf("Enter the left child of %d", data);  
   temp->left = create();  
printf("Enter the right child of %d", data);  
temp->right = create();  
return temp;   
}  
} 
