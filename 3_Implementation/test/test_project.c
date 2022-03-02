#include "ticket_booking.h"

#include<stdio.h>
#include "unity.h"

void setUp()
{

}
void tearDown()
{

}
void test_cancel(void)
{
   int r1=-1;
    TEST_ASSERT_EQUAL(-1,cancel(r1));
    TEST_ASSERT_EQUAL(-2,cancel(r1));
    TEST_ASSERT_EQUAL(-1,cancel(r1));
}
int main(int argc, char **argv)
{
	int choice, status=0,canc=0, reg=0;
	start=NULL;
	rear=NULL;
	front=NULL;
    UNITY_BEGIN();
    RUN_TEST(test_cancel);
    UNITY_END();
  	int ch =0;
	while(ch!=4)
	{
	printf("\n\nPlease enter your choice from below (1-4):\n 1. Reservation \n 2. Cancel \n 3. DISPLAY RECORDS\n 4. EXIT\n feel free to ask us\n Enter your choose");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1 :  status=reserve(start);
	              if(status==0)
	                printf("\nSeat full %d", count);
	              else
	                printf(" \nSeat booking successful! \nyour seat number is: %d\n\n", num);
	              break;
	    case 2:   printf(" \n Enter passport number to delete record?:\n");
	              scanf(" %d", &reg);
	              if(reg>num)
	              printf("Invalid!!");
	              else
	              {
	              canc=cancel(reg);
	              if(canc==-1)
	              	printf("\nPassport number is invalid!!\n");
	              else
	              	printf("\nhas been deleted\n");
	              	}
	              break;
	    case 3: display();
	    break;
	    case 4: exit(0);
	    break;
	    default: printf("\n SORRY INVALID CHOOICE! \n PLEASE CHOOSE FROM 1-4 \n Do not forget to choose from 1-4 \n");
}
}
}
