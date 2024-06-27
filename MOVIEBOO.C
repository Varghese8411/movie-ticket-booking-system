
#include<stdio.h>
#include<conio.h>
void main()
{
int b,c,d,e,f,g,h,i,j,k,l;
char a[10],p[10];
m:
clrscr();

printf("     Simple Movie Ticket Booking System       \n");
printf("----------------------------------------------\n");
printf("     1-To edit price of ticket (only admin):  \n");
printf("     2-To view reserved tickets (only admin): \n");
printf("     3-To Purchase ticket:                    \n");
printf("     4-To cancel the seat:                    \n");
printf("     5-Exit system:                           \n");
printf("----------------------------------------------\n");
printf("Enter your chioce:");
scanf("%d",&b);

if(b==1)
{
printf("Enter the password to change price of ticket:");
scanf("%s",h);
printf("Please enter new price:",h,a);
scanf("%d",a);
printf("	Press any key to continue . . .	       \n");
goto m;
}
else if(b==3)
{
printf("      Which movie you want to watch?	       \n");
printf("-----------------------------------------------\n");
printf("	Press 1 for Avengers:EndGame 	       \n");
printf("	Press 2 for Captain Marvel 	       \n");
printf("	Press 3 for Spider-man:Far From Home   \n");
printf("-----------------------------------------------\n");
printf(" 	Choose to like Movies:");
scanf ("%d",&f);
}

if((f==1)||(f==2)||(f==3))
{
printf("\t\t\t\tSCREEN\n\n\n");
printf("\t\t1\t2\t3\t4\t5\t\n\n");
printf("\t\t6\t7\t8\t9\t10\t\n\n");
printf("\t\t11\t12\t13\t14\t15\t\n\n");
printf("\t\t16\t17\t18\t19\t20\t\n\n\n\n");


printf("Please enter your name:");
scanf("%s",&a);
printf("Please enter your phone number:");
scanf("%d",&g);
printf("Which seat number you want?");
scanf("%d",&h);

}
else
{
printf("not");
}



if (h!=0)
{
printf("------------THEATER BOOKING TICKET--------\n");
printf("___________________________________________________________________________\n");
printf("Booking ID :\t\t");   					printf("Show name : Avengers: EndGane\n");
printf("Customer :%s\n",a);
							 printf("\t\t\tDate :  29 - 04 - 2019\n");
							 printf("\t\t\tTime:  08:00pm\n");
							 printf("\t\t\tSeats No.:%d\n",h);
							 printf("\t\t\tPrice:  500\n");
 printf("____________________________________________________________________________________________________________\n");

printf("Simple Movie Ticket Booking System\n");
printf("========================================================\n");
printf("1- To view reserved tickets (only admin):\n");
printf("2-To edit price of ticket (only admin):\n");
printf("3- To purchase ticket :\n");
printf("4- To cancel the seat :\n");
printf("5- Exit system :\n");
printf("========================================================\n");
 printf("Enter your choice : ");
scanf("%d",i);
}
else
{
printf("");
}

if(i==4)
{
printf("Which movie ticket you want to cancel?");
scanf("%d",j);
printf(" ----------------------------------------------------------------------\n");
printf("Press 1 for Avengers: EndGame\n");
printf("Press 2 for  Captain Marvel\n");
printf("Press 3 for Spider-Man: Far From Home\n");

printf("Enter choose to like:");
scanf("%d",k);
printf("Please enter ID number of ticket: ");
scanf("%d",l);
}
else
{
printf("not");
}

getch();

}








