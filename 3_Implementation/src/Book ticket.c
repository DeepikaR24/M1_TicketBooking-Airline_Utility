#include<ticket_booking.h>
void create( )
{
	node *new;
	new=(node *)malloc(sizeof(node));
	new->reg_no=1;
	printf("Passport Number : ");
	scanf("%d", &new->passport_no);
	printf("Name: ");
	scanf("%s", new->name);
	printf("Age : ");
	scanf("%d", &new->age);
	printf("Destination : ");
	scanf("%s", new->destination);
	start=new;
	new->next=NULL;
	num++;
}
int book(node *start)
{
	if(start==NULL)
	{
   		 create(start);
		 return 1;
	}
	else
	{
        node *temp, *new_node;
	temp=start;
	while(temp->next!=NULL)
	{
	  temp=temp->next;
	}
	new_node=(node *)malloc(sizeof(node));
        printf("Enter your passport number:");
	scanf("%d", &new_node->passport_no);
	printf("Enter your name:");
	scanf("%s", new_node->name);
	printf("Enter your email address:");
	scanf("%d", &new_node->email);
	new_node->next=NULL;
	printf("Enter the Destination : ");
	scanf("%s",new_node->destination);
	if(num<=size)
	{
		num++;
		new_node->reg_no=num;
		temp->next=new_node;
		return 1;
	}
	else
	{
		enq(new_node);
		return 0;
	}
}
}
