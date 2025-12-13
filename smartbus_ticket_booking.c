#include <stdio.h>
int main() 
{
   int choice,time,tickets,Name,Names;
    float total;
    printf("Welcome to smartBus Ticketing System\n \n");
    printf("Available Routes:\n");
    printf("1. Razole to Vijayawada (₹1000 per ticket)\n");
    printf("2. Hyderabad to Bangalore (₹2000 per ticket)\n");
    printf("3. kakinada  to Chennai(₹5000 per ticket)\n");
    printf("4. Amalapuram to Eastpallem (₹250 per ticket)\n");
    printf("------------------------------------\n");
    char *times1[] = {"8:00 AM", "12:00 PM", "6:00 PM"};
    char *times2[] = {"9:00 AM", "1:00 PM", "7:00 PM"};
    char *times3[] = {"7:30 AM", "11:30 AM", "5:30 PM"};
    char *times4[] = {"10:00 AM", "2:00 PM", "8:00 PM"};
    
    printf("Enter your route choice (1-4): ");
    scanf("%d", &choice);
    if(choice!=1&&choice!=2&&choice!=3&&choice!=4)
    {
    printf("invalid route");
    return 0;
    }
    printf("\nAvailable times:\n" );
       if (choice == 1) 
       {
        printf("1. %s\n2. %s\n3. %s\n",times1[0],times1[1],times1[2]);
        }
    else if (choice == 2)
     {
        printf("1. %s\n2. %s\n3. %s\n",times2[0],times2[1],times2[2]);
    } 
    else if (choice == 3)
     {
        printf("1. %s\n2. %s\n3. %s\n",times3[0],times3[1],times3[2]);
    } 
    else if (choice == 4) {
        printf("1. %s\n2. %s\n3. %s\n",times4[0],times4[1],times4[2]);
    } 
    else
    {
    printf("invalid time");
    }
    printf("select your time (1-3):");
    scanf("%d",&time);
    
        if(time<1||time>3)
    {
    printf("invalid time section");
    return 0;
    }
    
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    if(tickets==0)
    {
    printf("invalid");
    return 0;
    }
    else if(tickets<=1)
    {
    printf("Enter your name:");
    scanf("%s",&Name);}
    else if(tickets>1)
    {
    printf("Enter your Names:");
    scanf("%s",&Names);
    }
    
    if(choice==1) {
        
            total = tickets*1000;
            printf("\nYou can travel:Razole to Vijayawada\n");
            }
        else if(choice==2)
        {
            total = tickets*2000;
            printf("\nYou can travel: Hyderabad to Bangalore\n");
            }
        else if(choice==3)
        {
            total = tickets*5000;
            printf("\nYou can travel: kakinada to Chennai\n");
            }
        else if(choice==4){
            total = tickets*250;
            printf("\nYou can travel: Amalapuram to Eastpallem\n");
            }
        else
            {printf("\nInvalid route choice!\n");
            return 0;
    }
    printf("Total amount:₹%.2f\n", total);
    printf("successfully completed \n");
    printf("Thank you for booking smartbus!\n");
    printf("HAPPY JOURNEY");
    return 0;
}