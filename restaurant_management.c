#include <stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>

int c=0;
int count=0;
int k=0;
int ext();
int view();
void menu();
int Admin();
void place();
void order();
void Customer();
void food_list();
void gotoxy(int x, int y);
void list(int count,char name[],int q,int p);

struct m_menu
{
    int no;
    char name[100];
    int quantity;
    int price;
    struct m_menu *next;
}*head = NULL, *temp = NULL, *newnode = NULL,*another,*champ=NULL,*ramp=NULL,*need=NULL;

void list(int count,char name[],int q,int p)
{
    struct m_menu *newnode;
    newnode=malloc(sizeof(struct m_menu));
    newnode->no=count;
    strcpy(newnode->name,name);
    newnode->quantity=q;
    newnode->price=p;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newnode;
    }

}
int ext()
{
    printf("Thank You Sir For Your Co-operation.\n\n");
    return 0;
}


void food_list()
{
    system("cls");
    printf("............Welcome To Daffodil International University Cafeteria............\n\n\n");
    printf("Code        Name                    Quantity              Price\n");
    printf(".................................................................\n");
    printf("01.         Chicken Fry             1pcs                  80/-\n");
    printf("02.         Fri. prawn              1pcs                  70/-\n");
    printf("03.         Beef Burger             1pcs                  130/-\n");
    printf("04.         French  Fry             Standard              50/-\n");
    printf("05.         Chick. Soup             Standard              120/-\n");
    printf("06.         S.Beef Soup             Standard              140/-\n");
    printf("07.         Veget. Soup             Standard              100/-\n");
    printf("08.         C.Chow Mein             Standard              180/-\n");
    printf("09.         Mix C. Mein             Standard              200/-\n");
    printf("10.         C.Fri. Rice             Standard              160/-\n");
    printf("11.         E.Fri. Rice             Standard              140/-\n");
    printf("12.         B.Fri. Rice             Standard              180/-\n");
    printf("13.         M.Fri. Rice             Standard              200/-\n");
    printf("14.         Fried  Rice             Standard              100/-\n");
    printf("15.         Lemon Juice             250ml                 50/-\n");
    printf("16.         Mango Juice             250ml                 80/-\n");
    printf("17.         I.Coca Cola             400ml                 40/-\n");
}


void order()
{
    int o,q,total,z,g;
again:
    count++;
    printf("\nEnter Your Choice:");
    scanf("%d",&o);
    printf("Quantity:");
    scanf("%d",&q);
    if(o==01||o==1)
    {
        total=q*80;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Chicken Fry",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==02||o==2)
    {
        total=q*70;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Fri. prawn",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==03||o==3)
    {
        total=q*130;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Beef Burger",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==04||o==4)
    {
        total=q*50;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"French  Fry",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==05||o==5)
    {
        total=q*120;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Chick. Soup",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==06||o==6)
    {
        total=q*140;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"S.Beef Soup",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==07||o==7)
    {
        total=q*100;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Veget. Soup",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o== 8)
    {
        total=q*180;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"C.Chow Mein",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==9)
    {
        total=q*200;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Mix C. Mein",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==10)
    {
        total=q*160;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"C.Fri. Rice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==11)
    {
        total=q*140;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"E.Fri. Rice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==12)
    {
        total=q*180;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"B.Fri. Rice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==13)
    {
        total=q*200;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"M.Fri. Rice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==14)
    {
        total=q*100;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Fried  Rice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==15)
    {
        total=q*50;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Lemon Juice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==16)
    {
        total=q*80;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"Mango Juice",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else if(o==17)
    {
        total=q*40;
        printf("Are you confirm,sir?\n1.Yes OR 2.No\n");
        scanf("%d",&g);
        if(g==1)
        {
            list(count,"I.Coca Cola",q,total);
        }
        else if(g==2)
        {
            count--;
            food_list();
            goto again;
        }
    }
    else
    {
        count--;
        printf("Sorry Sir,Not Available At This Moment.\n");
        goto up_2;
    }
up_2:
    printf("\nAnything Else,Sir?\n1.Yes\n2.Payment\n\n");
    scanf("%d",&z);
    if(z==1)
    {
        goto again;
    }
    else if(z==2)
    {

        system("cls");
        int payment_check;
        int g_t=view();
        printf(".................................................................\n");

up:
        printf("Your Grand Total:%d\n\n",g_t);
        printf("Pay First And Self Service Here,So You Have To Pay First.\nPayment Please Sir:");
        scanf("%d",&payment_check);
        if(payment_check==g_t)
        {
            printf("\n||| THANK YOU,PLEASE COME AGAIN |||");
            getch();
            system("cls");
            menu();

        }
        else if(payment_check<g_t||payment_check>g_t)
        {
            printf("\nSorry Sir!!!!\nPay the exact bill\nCheck Again(Press Any key)\n\n");
            getch();
            goto up;
        }
    }
    else
    {
        printf("\nSorry Sir!!!! Check Again(Press Any key)\n");
        getch();
        goto up_2;
    }


}
int view()
{

    temp=head;
    if(temp!=NULL)
    {
        if(c>0)
        {
            temp=need->next;
        }

        int g_total=0;
        int no=1;
        printf("Item No           Name                 Quantity            Price\n");
        printf("'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
        while(temp!=NULL)
        {

            printf("%2d                %s             %d                %d/-\n\n",no++,temp->name,temp->quantity,temp->price);
            g_total+=temp->price;
            need=temp;
            temp=temp->next;


        }
        c++;
        return g_total;
    }
    else
    {
        printf("No Order Placed Yet.\n");
    }
}


int Admin()
{
    int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="pritom";
    char pass[10]="pass";
    do
    {

        printf("\n                     LOGIN FORM   ");
        printf(" \n\n                  ENTER USERNAME:-");
        scanf("%s", &uname);
        printf(" \n\n                  ENTER PASSWORD:-");
        while(i<10)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13) break;
            else printf("*");
            i++;
        }
        pword[i]='\0';
        i=0;
        if(strcmp(uname,"pritom")==0 && strcmp(pword,"pass")==0)
        {
            printf("  \n\n LOGIN IS SUCCESSFUL");
            printf("\n\n\n\t\t\t\tPress any key to continue...");
            getch();
            break;
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
            a++;

            getch();

        }
    }
    while(a<=2);
    if (a>2)
    {
        printf("\nSorry you have entered the wrong username and password for 3 times!!!");

        getch();

    }
    system("cls");
    Customer();

}



void Customer()
{
    system("cls");
    int z;
    printf("Welcome To Daffodil International University Cafeteria.How We Can Help You Sir?\n\n1.Place A Order\n2.Main Menu\n\nPlease Enter Your Choice:");
    scanf("%d",&z);
    if(z==1)
    {
        food_list();
        order();
    }
    else if(z==2)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("Wrong Choice.Press Any Key To Go Back.\n");
        getch();
        Customer();
    }



}


void menu()
{
    int x;
    printf("...............Welcome To Daffodil International University Cafeteria...............\n\n");
    printf("1.Admin login\n2.Exit The System\n\nPlease Enter Your Choice:");
    scanf("%d",&x);
    printf("\n");
    if(x==1)
    {
        Admin();
    }

    else if(x==2)
    {
        ext();

    }
    else
    {
        printf("Wrong Choice.Press Any Key To Try Again.\n");
        getch();
        system("cls");
        menu();
    }
}
int main()
{

    menu();
    return 0;
}
