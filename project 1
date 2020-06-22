#include<stdio.h>
#include<stdlib.h>
struct node
int data;
struct node *next;
struct node*head=NULL;
void insert(int new_data)
{ 
struct node*new_node=( struct node*)malloc(sizeof(struct node));
new_node->data=new_data;
new_node->next=head;
head=new_node;
}
void display()
{
	struct node*ptr;
	pt=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"";
		ptr=ptr->next;
	}
}
int main()
{
 insert(3);
insert(1);
insert(9);
insert(2);
cout("the  linked list is");
display();
return 0;
}
}
