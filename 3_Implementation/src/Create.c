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