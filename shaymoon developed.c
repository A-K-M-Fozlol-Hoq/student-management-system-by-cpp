#include<stdio.h>
#include<string.h>
int mark();
int gread(int a);
int information();
void cgpa();
void more();
int main()
{
system("color 1F");//cyan
char ID[20];
int login;
printf("\n.                                 ######################                         \n");
printf("\n.                             ********************************                      \n");
printf("\n.               ***************Stamford University Bangladesh******************\n.             ************* Result Processing System(University)*****************\n\n");
printf("\t1)Admin log in. \t\t2)Student log in.\n\n\tResponse :");
scanf("%d",& login);
//    admin login = 1;
if(login==1)
{
int choice,avg;
char c, pass[25], n[25], admin[25];
FILE *fptr, *fptr2;
fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","r");
fgets(n , 24 , fptr);
fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","r");
fgets(admin , 24 , fptr2);
printf("\nEnter username: ");
scanf(" %[^\n]s",&ID);
printf("Enter the password: ");
scanf(" %[^\n]s",&pass);
if(fptr==NULL)
    printf("file does not exist!");
else
{
    if (strcmp(n,pass)==0 && strcmp(admin,ID)==0)
    {
        do
        {
            printf("\n________________________________________________________________\n");
        printf("\n*************** MAIN MENU **************** \n\n Enter 1 for Calculate mark. \n Enter 2 for Grade.\n Enter 3 to see Full Information.");
        printf("\n Enter 4 to see CGPA in every semester.\n Enter 5 for More option. \nResponse=");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
           {
           mark();
           }
           break;
        case 2:
            {
            printf("\n********** Enter your average mark **********\n : ");
            scanf("%d",&avg);
            gread(avg);
            }
            break;
        case 3:
           {
            information();
           }
           break;
           case 4:
           {
            cgpa();
           }
           break;
           case 5:
           {
            more();
           }
           break;
       }
      printf("\nTo Continue Press 'Y' else any letter  :");
      fflush(stdin);
      scanf("%c",&c);
    }while(c=='y' || c=='Y');
    }
    else
        printf("\t\tIncorrect user name or password!\n\t\t please try again.\n\n");
}
printf("*********************Thank you********************* \n");
}

//student log in = 2;


else if(login==2)
{
    printf("*********************Enter your Id********************* \n:");
    scanf("%s",&ID);
    int English,Bangla,SPL,CPC,Calculus,EEE,sum,average;
    printf("Enter your English mark :");
    scanf("%d",&English);
    printf("Enter your Bangla mark :");
    scanf("%d",&Bangla);
    printf("Enter your SPL mark :");
    scanf("%d",&SPL);
    printf("Enter your CPC mark :");
    scanf("%d",&CPC);
    printf("Enter your Calculus mark :");
    scanf("%d",&Calculus);
    printf("Enter your EEE mark :");
    scanf("%d",&EEE);
    sum=English+Bangla+SPL+CPC+Calculus+EEE;
    average=sum/6;
    printf("__________________Your total mark is: %d_____________________\n",sum);
    printf("_________________Your average mark is: %d___________________",average);
    if (average>=80&&average<=100)
        printf("\n___________________Your result is A+___________________");
    else if (average>=75&&average<=79)
        printf("\n___________________Your result is A___________________");
    else if (average>=70&&average<=74)
        printf("\n___________________Your result is A-___________________");
    else if (average>=65&&average<=69)
        printf("\n___________________Your result is B+___________________");
    else if (average>=60&&average<=64)
        printf("\n___________________Your result is B___________________");
    else if (average>=55&&average<=59)
        printf("\n___________________Your result is B-___________________");
    else if (average>=50&&average<=54)
        printf("\n___________________Your result is C+___________________");
    else if (average>=45&&average<=49)
        printf("\n___________________Your result is C___________________");
    else if (average>=40&&average<=44)
        printf("\n___________________Your result is D____________________");
    else
        printf("\n___________________You are Failed!_____________________\n\n");
}
else
    printf("\n Invalid input!");
}

int mark()
{
    int English,Bangla,SPL,CPC,Calculus,EEE,sum,average;
    printf("\n*******************Calculate your mark*********************\n");

    printf(".     Enter your English mark :");
    scanf("%d",&English);
    printf(".     Enter your Bangla mark :");
    scanf("%d",&Bangla);
    printf(".     Enter your SPL mark :");
    scanf("%d",&SPL);
    printf(".     Enter your CPC mark :");
    scanf("%d",&CPC);
    printf(".     Enter your Calculus mark :");
    scanf("%d",&Calculus);
    printf(".     Enter your EEE mark :");
    scanf("%d",&EEE);
    sum=English+Bangla+SPL+CPC+Calculus+EEE;
    average=sum/6;
    printf("\n.               Your total mark is: %d\n",sum);
    printf("\n.               Your average mark is: %d",average);
}


int gread(int a)
{
    if (a>=80&&a<=100)
        printf("\n-------------Your result is A+-------------\n");
    else if (a>=75&&a<=79)
        printf("\n-------------Your result is A--------------------\n");
    else if (a>=70&&a<=74)
        printf("\n_______________Your result is A-___________________");
    else if (a>=65&&a<=69)
        printf("\n-------------Your result is B+-------------------");
    else if (a>=60&&a<=64)
        printf("\n-------------Your result is B-------------------");
    else if (a>=55&&a<=59)
        printf("\n_______________Your result is B___________________\n");
    else if (a>=50&&a<=54)
        printf("\n-------------Your result is C+-------------\n");
    else if (a>=45&&a<=49)
        printf("\n-------------Your result is C----------------\n");
    else if (a>=40&&a<=44)
        printf("\n-------------Your result is D----------------\n");
    else
        printf("\n-------------You are Failed!----------------\n");
}


int information()
{
        int roll;
        FILE *fptr;
        char a[100];
        printf("*************** Input roll number **************\nResponse=");
        scanf("%d",& roll);
        switch (roll)
        {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information1.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information2.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information3.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information4.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information5.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information6.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information7.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information8.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information9.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information10.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information11.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information12.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information13.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information14.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information15.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information16.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information17.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information18.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information19.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information20.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        }
}


void cgpa()
{
        int roll;
        FILE *fptr;
        char a[300];
        printf("*************** Input roll number **************\nResponse=");
        scanf("%d",& roll);
        switch (roll)
        {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa1.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa2.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa3.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa4.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa5.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa6.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa7.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa8.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa9.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa10.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa11.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa12.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa13.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa14.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa15.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa16.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa17.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa18.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa19.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa20.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        }
}


void more()
{
    int c,i, roll;
    char pass[25], n[25], admin[25],s[200], ID[20];
    FILE *fptr, *fptr2;
    printf("\n***************** More options ******************\n");
    printf(" Enter 1 to change username \n Enter 2 to change password \n Enter 3 to edit student information \n Enter 4 to add students semesterwise cgpa\nResponse=");
    scanf("%d", &c);
    switch(c)
    {
    case 1 :fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","r");
            fgets(n , 24 , fptr);
            fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","r");
            fgets(admin , 24 , fptr2);
            printf("Enter old username:\n");
            scanf(" %[^\n]s",&ID);
            printf("Enter the old password: ");
            scanf(" %[^\n]s",&pass);
            if(fptr==NULL)
                printf("file does not exist!");
            else
            {
                if( (strcmp(n,pass)==0 && strcmp(admin,ID)==0))
                {
                    fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","w");
                    printf("\nEnter new username : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr2, "%s", s);
                    fclose(fptr2);
                }
                else
                  printf("\t\tIncorrect old username or password!\n\t\t please try again.\n");

            }
        break;
    case 2 :fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","r");
            fgets(n , 24 , fptr);
            fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","r");
            fgets(admin , 24 , fptr2);
            printf("Enter old username:\n");
            scanf(" %[^\n]s",&ID);
            printf("Enter the old password: ");
            scanf(" %[^\n]s",&pass);
            if(fptr==NULL)
                printf("file does not exist!");
            else
            {
                if( (strcmp(n,pass)==0 && strcmp(admin,ID)==0))
                {
                    fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","w");
                    printf("\nEnter new password : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                }
                else
                  printf("\t\tIncorrect old username or password!\n\t\t please try again.\n");

            }
        break;
    case 3 :printf("Enter student roll:\nResponse=");
            scanf("%d", &roll);
            switch(roll)
            {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information1.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information2.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information3.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information4.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information5.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information6.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information7.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information8.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information9.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information10.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information11.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information12.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information13.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information14.txt","w");
                 printf("\nEnter edited information : ");
                   scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information15.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information16.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information17.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information18.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information19.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information20.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        }
        break;
    case 4 :printf("Enter roll number\nResponse=");
            scanf("%d", &roll);
            switch(roll)
            {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa1.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    puts(s);
                    fclose(fptr);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa2.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa3.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa4.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa5.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa6.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa7.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa8.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa9.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa10.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa11.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa12.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa13.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa14.txt","a");
                 printf("Enter new semester cgpa\n");
                   scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa15.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa16.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa17.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa18.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa19.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa20.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        }
        break;
    }
}
