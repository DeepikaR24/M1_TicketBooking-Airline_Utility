#include<ticket_booking.h>
int reserve(node *start)
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
        printf("Passport Number : ");
	scanf("%d", &new_node->passport_no);
	printf("Name: ");
	scanf("%s", new_node->name);
	printf("Age : ");
	scanf("%d", &new_node->age);
	new_node->next=NULL;
	printf("Destination : ");
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
