
          /*Project: Hotel Management System*/
/*Hasibul Islam Ifan*/            /*Nusrat Jahan Mithila*/
  /*ID: 213-35-755*/                 /*ID: 213-35-768*/
    /*Section: A*/                     /*Section: A*/

#include<stdio.h>
#include<string.h>
#include<time.h>
#include <conio.h>
#include<windows.h>
#include<stdlib.h>
int Time()
{
  time_t currentTime;
  time(&currentTime);
  printf("%s\n",ctime(&currentTime));
}
int book;
struct booking
{
    char r_number[5];
    char name[100];
    char occupation[100];
    char age[5];
    char phone_number[100];
    char stay_day[5];
    char entry_date[12];
    char out_date[12];
}s;
struct service
{
    char billar_id[15],date[15];
    int bill;
}f;
void cheack_out();
void login();
void view_book();
void r_booking();
void view();
void search_room_number();
void ser_case();
void notify();
void food_price_update();
void food_price_view();
void bill_search();
void billar_number();
void food();
int main()
{

    system("cls");
    Time();
    printf("\n\n\n\n\t\t=========================================================================\n\n\n\t\t\t\t\t\tWELCOME\n\n\t\t\t\t\t\t  TO\n\n\t\t\t\t\tHOTEL MANAGEMENT SYSTEM\n\n\n\t\t==========================================================================\n");
    getch();
    login();
}

void login(){
       char u_name[20];
       char password[10];
       printf("\t\t\t\t=======================================");
       printf("\n\t\t\t\t\t  Enter User Name:");
       scanf("%s",&u_name);
       printf("\t\t\t\t=======================================");
       printf("\n\t\t\t\t\t  Enter Password:");
       scanf("%s",&password);
       if(strcmp(u_name,"phms")==0)
       {
           if(strcmp(password,"12345")==0)
           {
              printf("\n\t\t\t\t\t\tWelcome!\n\t\t\t\t     You Have Successfully logged In!!!");
              printf("\n\n\t\t\t\t\t  Click For Services....");
              getch();
              view_book();

           }
        else
           {
               printf("\n\n\t\t\t\t\t  Wrong Password!!!\n\n");
           }
       }
        else
            {
            printf("\n\n\n\t\t\t\t\t  Wrong Username!!!\n\n");
            }
}
 int logo()
{
    printf("\n\t\t================================================================================================\n\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$$$$$ $$   $$  $$   $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$   $$   $$$$$$ $$$$$$\n");

    printf("\n\t           $$$     $$$  $$$$$$  $$$     $$ $$$$$$ $$$$$$  $$$$$$ $$$     $$$ $$$$$$ $$$     $$ $$$$$$");
    printf("\n\t           $$ $$ $$ $$  $$  $$  $$ $$   $$ $$  $$ $$      $$     $$ $$ $$ $$ $$     $$ $$   $$   $$");
    printf("\n\t           $$  $$$  $$  $$$$$$  $$  $$  $$ $$$$$$ $$ $$$$ $$$$$$ $$  $$$  $$ $$$$$$ $$  $$  $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$   $$ $$ $$  $$ $$   $$ $$     $$       $$ $$     $$   $$ $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$     $$$ $$  $$ $$$$$$  $$$$$$ $$       $$ $$$$$$ $$     $$$   $$ \n\n");
    printf("\t        ===============================================================================================\n\n");
}
 void view_book(){
    system("cls");
    Time();
    getch();
    int choose;
    logo();
    printf("\t\t\t\t\t\t1.Room Booking\n\n\t\t\t\t\t\t2.View Room Records\n\n\t\t\t\t\t\t3.Search Customer Detail\n\n\t\t\t\t\t\t4.Check-Out\n\n\t\t\t\t\t\t5.Services\n\n\t\t\t\t\t\t6.Notification");
    printf("\n\n\t\t\t\t\t  \tEnter Your Choice:");
    scanf("%d",&choose);
switch(choose){
     case 1:r_booking();
     break;
     case 2:view();
     break;
     case 3:search_room_number();
     break;
     case 4:cheack_out();
     break;
     case 5:ser_case();
     break;
     case 6:
        system("cls");
        notify();
        break;
               }
}
struct food_price
{
     int rice,polaw,fried_rice,meat,fish_elish,fish_rui;
     int barger,sandwitch,pizza,pestry,sweets,biscutes;
}ss;
 void ser_case()
 {
    system("cls" );
    Time();
    getch();
    logo();
int ser_choice;
printf("\n\n\t\t\t\t\t\t 1. Food Price Update\t\t\t\t0.Back\n\n\t\t\t\t\t\t 2. Food Prices\n\n\t\t\t\t\t\t 3.Search Bills\n");
printf("\n\n\t\t\t\t\t\t Enter Your Choice:");
scanf("%d",&ser_choice);
switch(ser_choice)
{
case 1:food_price_update();
       break;
case 2:food_price_view();
       break;
case 0:view_book();
       break;
case 3:bill_search();
      break;
}
}
void bill_search()
{
    char date[15];
    FILE *fd;
    fd=fopen("food_price1.txt","r");
    struct service f;
    printf("\t\t\t\t\t\tEnter Date:");
    fflush(stdin);
    scanf("%s",date);
    while(fread(&f,sizeof(f),1,fd))
    {
        if(strcmp(f.date,date)==0)
        {
            printf("\nBillar  Id:%s bill=%d",f.billar_id,f.bill);
        }
    }
    fclose(fd);
    getch();
    ser_case();
}
void food_price_update(){
    system("cls" );
    Time();
    getch();
    logo();
   FILE *fp;
   struct food_price ss;
   fp=fopen("food_price.txt","w+");
   rewind(fp);
{
   fseek(fp,-sizeof(ss),SEEK_CUR);
   printf("\t\t\t\t\t\t  Update Price\n\n");
   printf("\n\n\t\t\t\t\t\tEnter Price For Rice:");
   scanf("%d",&ss.rice);
   printf("\n\n\t\t\t\t\t\tEnter Price For Polaw:");
   scanf("%d",&ss.polaw);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fried Rice:");
   scanf("%d",&ss.fried_rice);
   printf("\n\n\t\t\t\t\t\tEnter Price For Meat:");
   scanf("%d",&ss.meat);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fish(Elish):");
   scanf("%d",&ss.fish_elish);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fish(Rui):");
   scanf("%d",&ss.fish_rui);
   printf("\n\n\t\t\t\t\t\tFast Foods\n");
   printf("\t        ===============================================================================================\n\n");
   printf("\n\n\t\t\t\t\t\tEnter Price For Barger:");
   scanf("%d",&ss.barger);
   printf("\n\n\t\t\t\t\t\tEnter Price For Sandwich:");
   scanf("%d",&ss.sandwitch);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fried Pizza:");
   scanf("%d",&ss.pizza);
   printf("\n\n\t\t\t\t\t\tEnter Price For Pestry:");
   scanf("%d",&ss.pestry);
   printf("\n\n\t\t\t\t\t\tEnter Price For Sweets:");
   scanf("%d",&ss.sweets);
   printf("\n\n\t\t\t\t\t\tEnter Price For Biscutes:");
   scanf("%d",&ss.biscutes);
   printf("\n\n\n\t\t\t\t\t\tNew Price Added Successfully");
   getch();
   fwrite(&ss,sizeof(ss),1,fp);
}
   fclose(fp);
   ser_case();
}
int food_choice,quantity=0,am=0,bn=0;
char billar[7],billar_id1[7];
void food_price_view(){
  char date[12];
  bn=0;
    system("cls" );
    Time();
    logo();
    printf("\n\t\t\t\t\t\t\tList OF Food\n\n");
    printf("\t        ===============================================================================================\n\n");
    FILE*fp;
    FILE*fd;
    fp=fopen("food_price.txt","r");
    struct food_price ss;
    printf("\n\t\t\t\t\tFood Name\t\t\tPrice\n");
    while(fread(&ss,sizeof(ss),1,fp))
    {
    printf("\n\t\t\t\t\t1.Rice                \t\t%d Taka\n",ss.rice);
    printf("\n\t\t\t\t\t2.Polaw               \t\t%d Taka\n",ss.polaw);
    printf("\n\t\t\t\t\t3.Fried Rice          \t\t%d Taka\n",ss.fried_rice);
    printf("\n\t\t\t\t\t4.Meat                \t\t%d Taka\n",ss.meat);
    printf("\n\t\t\t\t\t5.Fish(Elish)         \t\t%d Taka\n",ss.fish_elish);
    printf("\n\t\t\t\t\t6.Fish(Rui)           \t\t%d Taka\n",ss.fish_rui);
    printf("\n\n\t\t\t\t\t\t\t Fast Foods\n");
    printf("\t        ===============================================================================================\n\n");
    printf("\n\t\t\t\t\t7.Barger            \t\t%d Taka\n",ss.barger);
    printf("\n\t\t\t\t\t8.Sandwitch         \t\t%d Taka\n",ss.sandwitch);
    printf("\n\t\t\t\t\t9.Pizza             \t\t%d Taka\n",ss.pizza);
    printf("\n\t\t\t\t\t10.Pestry            \t\t%d Taka\n",ss.pestry);
    printf("\n\t\t\t\t\t11.Sweets            \t\t%d Taka\n",ss.sweets);
    printf("\n\t\t\t\t\t12.Biscute           \t\t%d Taka\n",ss.biscutes);
     }
     fclose(fp);
     printf("\n\n\t\t\t\t\t\t\tEnter Date:");
     fflush(stdin);
     scanf("%s",date);
     printf("\n\n\t\t\t\t\t\tHow Many Items..?:");
     quantity=0;
     scanf("%d",&quantity);
     am=0;
     food();
     getch();
     billar_number();
     printf("\n\t\t\t\t\tYour Biller Id Is: %s",billar_id1);
     printf("\n\n%d",bn);
     fd=fopen("food_price1.txt","a");
     struct service f;
     strcpy(f.billar_id,billar_id1);
     strcpy(f.date,date);
     f.bill=0;
     f.bill=bn;
     fwrite(&f,sizeof(f),1,fd);
     fclose(fd);
     getch();
     fd=fopen("food_price1.txt","r");
     while(fread(&f,sizeof(f),1,fd))
     {
         if(strcmp(f.billar_id,billar_id1)==0)
         {
                printf("\n\n\t\t\t\t\t\tTotal Bill Is %d taka\n\n\t\t\t\t\t\t Bill Id %s\n\n\t\t\t\t\t\tCollect From Customer",f.bill,f.billar_id);
         }
     }
     getch();
     fclose(fd);
     ser_case();
}
int count=0;
void billar_number()
{
    int i,j,k,c;
    for(j=0;j<count+1;j++)
    {
        for(i=0;i<6;i++)
        {
            billar[i]=(rand()%5)+1;
            switch(billar[i])
            {
            case 1:
                billar_id1[i]='1';
                break;
            case 2:
                billar_id1[i]='2';
                break;
            case 3:
                billar_id1[i]='3';
                break;
            case 4:
                billar_id1[i]='4';
                break;
            case 5:
                billar_id1[i]='5';
                break;
            case 6:
                billar_id1[i]='6';
                break;
            case 7:
                billar_id1[i]='7';
                break;
            case 8:
                billar_id1[i]='8';
                break;
            case 9:
                billar_id1[i]='9';
                break;
            case 0:
                billar_id1[i]='0';
                break;
            }
        }
    }
    FILE*fp;
    fp=fopen("food_price.txt","r");
    struct food_price ss;
    while(fread(&f,sizeof(f),1,fp))
    {
        if(strcmp(billar_id1,f.billar_id)!=0)
        {
            count=1;
        }
    }
    fp=fopen("food_price.txt","r");
    while(fread(&f,sizeof(f),1,fp))
    {
        if(strcmp(billar_id1,f.billar_id)!=0)
        {
            count++;
            billar_number();
        }
    }
    fclose(fp);
}
int i;
void food()
{
     FILE*fp;
    fp=fopen("food_price.txt","r");
    struct food_price ss;
    while(fread(&ss,sizeof(ss),1,fp))
    quantity--;
    printf("\n\n\t\t\t\t\t\tWhich Item/Items..?:");
    scanf("%d",&food_choice);
switch(food_choice)
{
case 1:
    am=am+ss.rice;
    break;
case 2:
    am=am+ss.polaw;
    break;
case 3:
    am=am+ss.fried_rice;
    break;
case 4:
    am=am+ss.meat;
    break;
case 5:
    am=am+ss.fish_elish;
    break;
case 6:
    am=am+ss.fish_rui;
    break;
case 7:
    am=am+ss.barger;
    break;
case 8:
    am=am+ss.sandwitch;
    break;
case 9:
    am=am+ss.pizza;
    break;
case 10:
    am=am+ss.pestry;
    break;
case 11:
    am=am+ss.sweets;
    break;
case 12:
    am=am+ss.biscutes;
    break;
default:
    food();
}
     fclose(fp);
     if(quantity==0)
     {
         bn=am;
         am=0;
         return 0;
     }
     else
     {
         food();
     }
}
 void r_booking(){
 system("cls" );
 Time();
    getch();
 logo();
    printf("\n\t\t\t\t\t\t\tOur Rooms\n\n");
    printf("\n\n\tRoom No\t\tCategory\t\tAvailable\t\tBooked For\tEntry Date\tExit Date\n\n");//Available Or Not Checking
    FILE *fp;
    char day[5];
    char able[10];
    char date[12],date_out[12];
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"101")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t101\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"102")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t102\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"103")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t103\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"104")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t104\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"105")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t105\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"106")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t106\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"107")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t107\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"108")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t108\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"109")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t109\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"110")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t110\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    printf("\n\n\t\t\t\t\t\tWhich Room You Want To Book:");
    scanf("%d",&book);
    system("cls" );
    Time();
    getch();
    logo();
 printf("\n\t\t\t\t\t\tFill Up The Form\n\n");
 printf("\t\t\t\t=================================================");
 fp=fopen("detail.txt","a");
 struct booking s;
 printf("\n\n\t\t\t\t\t\tRetype Room Number:");
 scanf("%s",&s.r_number);
 printf("\n\t\t\t\t\t\tEnter Name:");
 scanf("%s",&s.name);
 printf("\n\t\t\t\t\t\tEnter Age:");
 scanf("%s",&s.age);
 printf("\n\t\t\t\t\t\tEnter Phone Number:");
 scanf("%s",&s.phone_number);
 printf("\n\t\t\t\t\t\tEnter Occupation:");
 scanf("%s",&s.occupation);
 printf("\n\t\t\t\t\t\tEnter How Many Days Customer Want to stay:");
 scanf("%s",&s.stay_day);
 printf("\n\t\t\t\t\t\tEnter Entry Date(DD-MM-YY):");
 scanf("%s",&s.entry_date);
 printf("\n\t\t\t\t\t\tEnter Exit Date(DD-MM-YY):");
 scanf("%s",&s.out_date);
 printf("\n\n\n\t\t\t\t\t\t This Room Has Been Booked for %s days",s.stay_day);
 fwrite(&s,sizeof(s),1,fp);
 getch();
 fclose(fp);
 view_book();
}
void view()
{
    system("cls");
    Time();
    getch();
    logo();
    printf("\t\t\t\t\t\tCustomer Detail\n\n");
    FILE *fp;
    fp=fopen("detail.txt","r");
    struct booking s;
    printf("Room No\t Name\t\tAge\t Phone Number \t Occupation\t Staying Day\tEntry Date\tExit Date\n");
    getch();
    while (fread(&s,sizeof(s),1,fp))
    {
    printf("\n%s\t %s\t\t%s\t %s\t %s\t%s\t\t%s\t%s\n",s.r_number,s.name,s.age,s.phone_number,s.occupation,s.stay_day,s.entry_date,s.out_date);
    }
    fclose(fp);
    getch();
    view_book();
}
void search_room_number()
{
    system("cls");
   printf("\t\t\t\t\t\tCustomer About Search Option\n\n");
   printf("\t\t\t\t==========================================================");
   FILE *fp;
   fp=fopen("detail.txt","r");
   struct booking s;
   char se_room[20];
   printf("\n\n\t\t\t\t\t\t Enter Room Number:");
   scanf("%s",se_room);
   while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(se_room,s.r_number) == 0)
        {
       printf("\n\n\n\tName\tAge\tPhone Number\tOccupation\tStaying Day\tRoom Number\tEntry Date\tExit date\n");
       printf("\t=================================================================================================================");
       printf("\n\t%s\t%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%s\n",s.name,s.age,s.phone_number,s.occupation,s.stay_day,s.r_number,s.entry_date,s.out_date);
       getch();
       }
   }
fclose(fp);
view_book();
}
void cheack_out()
{
    char se_room[5];
    char se_name[20];
    int i;
    system("cls");
    Time();
    getch();
    FILE *fp;
    struct booking s;
    logo();
    printf("\n\t\t\t\t\t\tEnter Room Number:");
    fflush(stdin);
    scanf("%s",se_room);
    printf("\n\t\t\t\t\t\tEnter Name:");
    fflush(stdin);
    scanf("%s",se_name);
    fp=fopen("detail.txt","r+");
    rewind(fp);
    while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(se_room,s.r_number)==0 && strcmp(s.name,se_name)==0)
        {
            fseek(fp,-sizeof(s),SEEK_CUR);
            for(i=0;i<6;i++)
            {
                s.r_number[i]='\0';
            }
            strcpy(s.age,"  ");
            strcpy(s.stay_day,"  ");
            strcpy(s.occupation,"  ");
            strcpy(s.phone_number,"  ");
            strcpy(s.entry_date,"  ");
            strcpy(s.out_date,"  ");
            fwrite(&s,sizeof(s),1,fp);
            fclose(fp);
        }

    else{
            fclose(fp);
        printf("\n\t\t\t\t\t\t Wrong Input");
        getch();
        view_book();}
    }

printf("\n\t\t\t\t\t\t   Room Number %s\n\n\t\t\t\t\t\tSuccessfully Check-out\n\n\t\t\t\t\tNow The Room Is Empty & Ready To Book",se_room);
    fclose(fp);
    getch();
    view_book();
}
void notify()
{
    logo();
    char today_date[12];
    printf("\n\n\n\t\t\t\tEnter Today Date:");
    fflush(stdin);
    scanf("%s",today_date);
    int count=0;
    FILE *fp;
    fp=fopen("detail.txt","r");
    struct booking s;
    while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(s.out_date,today_date)==0)
        {
            printf("\n\t\t Room No:%s \tDate:%s\t Last Date Today",s.r_number,s.out_date);
            count++;
        }
    }
    fclose(fp);
    if(count==0)
    {
        printf("\n\t\t\t\tNo Notification For Today");
    }
    getch();
    view_book();

}

