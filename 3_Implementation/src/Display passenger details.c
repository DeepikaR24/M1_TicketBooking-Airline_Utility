#include<ticket_booking.h>
void display()
{
	node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("Registration Number: %d\n", temp->reg_no);
		printf("Passport Number: %d\n", temp->passport_no);
		printf("Name : %s\n", temp->name);
		printf("email: %d\n", temp->email);
		printf("Destination: %s\n", temp->destination);
		temp=temp->next;
    }
}