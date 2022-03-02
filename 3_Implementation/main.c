/**
 * @file main.c
 * @author Deepika R (deepika.r1@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "ticket_booking.h"
#include<stdio.h>
int main(int argc, char **argv)
{
	int choice, status=0,canc=0, reg=0;
	start=NULL;
	rear=NULL;
	front=NULL;
	int ch =0;
	while(ch!=4)
	{
	printf("\n\nPlease enter your choice from below (1-4):\n 1. Reservation \n 2. Cancel \n 3. DISPLAY RECORDS\n 4. EXIT\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1 :  status=reserve(start);
	              if(status==0)
	                printf("\nSeat full %d", count);
	              else
	                printf(" \nSeat booking Successful! \nyour seat number is: %d\n\n", num);

	              break;

	    case 2:   printf(" \n Enter passport number to delete record?:\n");
	              scanf(" %d", &reg);
	              if(reg>num)
	              printf("Invalid!!");
	              else
	              {
	              canc=cancel(reg);
	              if(canc==-1)
	              	printf("\nPassport number is wrong please check your passport\n");
	              else
	              	printf("\nhas been deleted\n");
	              	}
	              break;

	    case 3: display();
	    break;
	    case 4: exit(0);
	    break;
	    default: printf("\n SORRY INVALID CHOOICE \n PLEASE CHOOSE FROM 1-4 \n Do not forget to choose from 1-4\n");
	}
}
}