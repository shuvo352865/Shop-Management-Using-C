#include<stdio.h>
#include<string.h>
#include <conio.h>
int main()
{
    char str[100];
    char address[50];
    char phn_num[11];
    int age,i,j,choice,c=1,a[6],cost[6];
    for(i=0; i<6; i++)
        a[i]=0;
    static int totalCost;

    char items[6][100]= {"Sandisk 16 GB",
                         "Logitech Mouse",

                         "Microlab",
                         "Havit",

                         "Mi Note 3",
                         "Nokia 3",

                        };
    printf("\t\t\t\t\t------------------------------------------------\n");
printf("\t\t\t\t\t------------------------------------------------\n");
printf("\n\t\t\t\t\t\t**********->WELCOME<-************\n");
printf("\n\t\t\t\t\t------------------------------------------------\n");
printf("\t\t\t\t\t------------------------------------------------\n");
printf("\n\t\t\t\t\t\t::Please Enter Your info:: \n" );
{
    FILE *fptr;
    fptr = fopen("Customer info.txt", "w+");

    printf("\n\t\t\t\tPlease Enter Your Name : ");
    scanf("%s",&str);
    fprintf(fptr, "\nCustomer Name  = %s", str);

    printf("\n\t\t\t\tPlease Enter Your age : ");
    scanf("\t\t\t\t%d",&age);
    fprintf(fptr, "\nAge = %d", age);


    printf("\n\t\t\t\tEnter present address :");
    scanf("%s", &address);
    fprintf(fptr, "\nAddress  = %s",address);

    printf("\n\t\t\t\tEnter Your Mobile number :");
    scanf("%s", &phn_num);
    fprintf(fptr, "\nPhone number = %s ", phn_num);

    fclose(fptr);
    system("cls");
}

do
{
    if(c==1)
    {
        printf("\n\t\t\t\t\t Enter\n \n\t\t\t\t ->1 - Computer Accessories\n\n\t\t\t\t ->2 - Sound box\n \n\t\t\t\t ->3 - Mobiles\n\n\n\t\t\t\tAny other number to exit\n");
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
        case 1:
        {
            int accessoriesChoice;
            printf("\n\t\t\t\tEnter\n\n\t\t\t\t ->1 - Sandisk 16 GB - tk.355\n \n\t\t\t\t->2 - Logitech Mouse- tk.500\n\n\n\t\t\t\tAny other number to exit\n");
            scanf("%d",&accessoriesChoice);
            cost[0]=355;
            cost[1]=500;
            system("cls");
            switch(accessoriesChoice)
            {
            case 1:
            {
                int num;
                printf("\n\t\t\t\tYou chose Sandisk 16GB with tk .355. \n\n\t\t\t\t Are you sure to buy  ? \n\n\t\t\t\tIf 'Yes' Enter 1 else any number\n");
                scanf("%d",&num);
                if(num==1)
                {
                    a[0]++;
                    totalCost+=355;
                }
                printf("\n\t\t\t\tYour Cost in Cart is: %d\n",totalCost);
system("cls");
                break;

            }
            case 2:
            {
                int num;
                printf("\n\t\t\t\tYou chose Logitech Mouse with tk.500.\n\n\t\t\t\tAre you sure to buy ? \n\n\t\t\t\t If 'Yes' Enter 1 else any number \n");
                scanf("%d",&num);
                if(num==1)
                {
                    a[1]++;
                    totalCost+=500;
                }
                printf("\n\t\t\t\tYour Cost in Cart is %d\n",totalCost);
                system("cls");
                break;
            }
            default:
            {
                printf("\n\t\t\t\tExit from Computer Accesories\n");
                break;
            }
            }
            break;
        }
        case 2:
        {
            int soundboxchoice;
            printf("\n\t\t\t\tEnter\n\n\t\t\t\t->1 - Microlab - tk.3550\n\n\t\t\t\t->2 - Havit - tk.5000\n\n\n\t\t\t\tAny other number to exit\n");
            scanf("%d",&soundboxchoice);
            cost[2]=3550;
            cost[3]=5000;

            switch(soundboxchoice)
            {
            case 1:
            {
                int num;
                printf("\n\t\t\t\tYou chose  Microlab soundbox  for tk.3550.\n\n\t\t\t\t Are you sure to buy ? \n\n\t\t\t\tIf 'Yes' Enter  1 else any number\n");
                scanf("%d",&num);
                if(num==1)
                {
                    a[2]++;
                    totalCost+=3550;
                }
                printf("\n\t\t\t\tYour Cost in Cart is %d\n",totalCost);
                system("cls");
                break;
            }
            case 2:
            {
                int num;
                printf("\n\t\t\t\tYou chose Havit Soundbox for tk.5000.\n\n\t\t\t\t Are you sure to buy  ? \n\n\t\t\t\tIf 'Yes' Enter 1 else any number\n");
                scanf("%d",&num);
                if(num==1)
                {
                    a[3]++;
                    totalCost+=5000;
                }
                printf("\n\t\t\t\tYour Cost in Cart is %d\n",totalCost);
                system("cls");
                break;
            }
            default:
            {
                printf("\n\t\t\t\tExit from Shoes Category\n");
                break;
            }
            }
            break;
        }
        case 3:
        {
            int mobileChoice;
            printf("\n\t\t\t\tEnter\n\n\t\t\t\t->1 - Mi Note 3 - tk.11000\n\n\t\t\t\t->2 - Nokia 3 - tk.9866\n\n\n\t\t\t\tAny other number to exit\n");
            scanf("%d",&mobileChoice);
            cost[4]=11000;
            cost[5]=9866;
            system("cls");
            switch(mobileChoice)
            {
            case 1:
            {
                int num;
                printf("\n\t\t\t\tYou chose to buy Mi Note 3 for tk.11000.\n\n\t\t\t\t Are you sure to buy ? \n\n\t\t\t\tIf 'Yes' Enter 1 else any number\n");
                scanf("%d",&num);
                if(num==1)
                {
                    a[4]++;
                    totalCost+=11000;
                }
                printf("Your Cost in Cart is %d\n",totalCost);
                system("cls");
                break;
            }
            case 2:
            {
                int num;
                printf("\n\n\t\t\t\t You chose to buy Nokia 3 for tk.9866.\n\n\t\t\t\t  Are you sure to buy  ? \n\n\t\t\t\tIf 'Yes' Enter 1 else any number\n");
                scanf("%d",&num);
                if(num==1)
                {
                    a[5]++;
                    totalCost+=9800;
                }
                printf("\n\t\t\t\tYour Cost in Cart is %d\n",totalCost);

                system("cls");
                break;
            }
            default:
            {
                printf("\n\t\t\t\tExit from Mobile Category\n");
                break;
            }
            }
            break;
        }
        default:
        {
            printf("\n\t\t\t\tEnter Valid Categories Choice\n");
            break;
        }
        }

        printf("\n\t\t\t\t\t\t %s's cart\n",str);
         printf("\t\t\t\t-----------------------------------------------\n");

        printf("\n\t\t\t\tld\tItems\t\t\t\tQuantity\t\tCost\n");
        for(i=0; i<6; i++)
        {
            if(a[i]!=0)
            {
                printf("\n\t\t\t\t%d\t%s\t\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
            }
        }
        printf("\n\n\t\t\t\tTotal Cost: %d\n",totalCost);
        printf("\n\n\t\t\t\tIf you wish to buy anything more Enter\n\n\t\t\t\t1 to Add Item\n\n\t\t\t\t2 to Delete Items \n\n\n\t\t\t\t\nAny other number to Exit\n");
        scanf("%d",&c);
        system("cls");
    }
    if(c==2)
    {
        int id;
        printf("\n\n\t\t\t\tEnter id to delete item\n");
        scanf("%d",&id);
        if(id<9&&id>=0)
        {
            totalCost=totalCost-(cost[id]*a[id]);
            a[id]=0;
        }
        else
        {
            printf("\n\n\t\t\t\tEnter Valid id\n");
        }
       // printf("\n\t\t\t\tRevised Items \n");
        printf("\n\t\t\t\tld\tItems\t\t\t\tQuantity\t\tCost\n");
        for(i=0; i<6; i++)
        {
            if(a[i]!=0)
            {
                printf("\n\t\t\t\t%d\t%s\t\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
            }
        }
        printf("\nTotal Cost :%d\n",totalCost);
        printf("\n\n\t\t\t\tIf you wish to buy anything more Enter\n->1 to Add Item\n->2 to Delete Items \n\n\n\t\t\t\tAny other number to Exit\n");
        scanf("%d",&c);
    }

}
while(c==1 || c==2);
system("cls");
printf("\n\t\t\t\tYour Final Cost is %d\n",totalCost);

printf("\n\t\t\t\tThanks %s , for Choosing Us and Visit us again.\n",str);

}
