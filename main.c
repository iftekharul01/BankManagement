#include<stdio.h>
int main_exit;
void mmenu();
void new_account();
void different_schemes();
void loan_system();
void update_information();
void removing_account();
void show_profile();
void client_year();
void existing_account();
void close()
{
    system("cls");
    printf("\n\n\n\t\t\tThis Project is developed by @Team Core Four\n");
    fordelay(1000000000);
    main();
}
struct date
{
    int month,day,year;
};
struct
{

    char name[60];
    int acc_no,age;
    char address[60];
    char nid[15];
    char phone[15];
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

} add,upd,check,rem,transaction;
void fordelay(int j)
{
    int i,k;
    for(i=0; i<j; i++)
        k=i;
}
int main()
{
home:
    system("cls");
    char pass[10],password[10]="123",ch;
    int i;
    printf("\n\n\n");
    printf("\n\t\t\t\t            ---------***---------");
    printf("\n\t\t\t            ~~~~~~~~~~~~~~~~~ * ~~~~~~~~~~~~~~~~~ ");
    printf("\n\t\t\t        |                                           |");
    printf("\n\t\t\t        |                  WELCOME                  |");
    printf("\n\t\t\t        |                    TO                     |");
    printf("\n\t\t\t        |                  \"DIUCB\"                  |");
    printf("\n\t\t\t        |      DAFFODIL INTERNATIONAL UNIVERSITY    |");
    printf("\n\t\t\t        |               CENTRAL BANK                |");
    printf("\n\t\t\t        |                                           |");
    printf("\n\t\t\t            ~~~~~~~~~~~~~~~~~ * ~~~~~~~~~~~~~~~~~ ");
    printf("\n\t\t\t\t            ---------***---------");
    printf("\n\n\t\t\t\tEnter the admin password to login: ");
    for(i=0; i<10; i++)
    {
        ch= getch();
        if(ch == 13) break;
        pass[i]=ch;
        printf("*");
    }
    pass[i]='\0';
    if (strcmp(pass,password)==0)
    {
        printf("\n\n\t\t\t\tPassword Match! LOADING.");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        mmenu();

    }
    else
    {
        printf("\n\n\t\t\t\tInvalid Password.");
       fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        printf(".");
        fordelay(100000000);
        goto home;
    }
    getch();

}
void mmenu()
{
    int choice;
    //main menu choice
mmc:

    system("cls");
    system("color 9");
    printf("\n\n\n\t\t\t******* WELCOME TO THE MAIN MENU *******");
    printf("\n\n\n\n\t\t1.Create new account\n\t\t2.Different schemes\n\t\t3.Loan system\n\t\t4.Update informationt\n\t\t5.Removing existing account\n\t\t6.Show customers profile\n\t\t7.Customer of the year\n\t\t8.Show the list of existing account\n\t\t9.Exit\n\n\n\n\t\tEnter your choice: ");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:
        //new account
        new_account();
        break;
    case 2:
        //different schemes
        different_schemes();
        break;

    case 3:
        //loan system
        loan_system();
        break;
    case 4:
        update_information();
        break;
    case 5:
        removing_account();
        break;
    case 6:
        //show profile
        show_profile();
        break;
    case 7:
        client_year();
        break;
    case 8:
        //existing account
        existing_account();
        break;
    case 9:
        close();
        break;
    default:
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tInvalid selection. Please choose a valid number...");
        fordelay(10000000000);
        goto mmc;

    }

}
void new_account()

{
    int choice;
    FILE *data;
account_no:
    system("cls");
    printf("\t\t\t\t***** ADD RECORD  *****\t\t\t\t");
    printf("\n\n\n Enter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\n Enter the account number:");
    scanf("%d",&check.acc_no);
    data=fopen("record.txt","a+");
    while(fscanf(data,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
        {
            printf("Account no. already in use!");
            fordelay(1000000000);
            mmenu();
        }
    }
    fflush(stdin);
    add.acc_no=check.acc_no;
    printf("\n Enter the name: ");
    gets(add.name);
    printf("\n Enter the date of birth(mm/dd/yyyy): ");
    scanf(" %d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\n Enter the age: ");
    scanf("%d",&add.age);
    printf("\n Enter the address: ");
    scanf("%s",add.address);
    printf("\n Enter the nid number: ");
    scanf("%s",add.nid);
    printf("\n Enter the phone number: ");
    scanf("%s",add.phone);
    printf("\n Enter the amount to deposit: ");
    scanf("%f",&add.amt);
    printf("\n Type of account:\n\t~ Saving\n\t~ Current\n\t~ Fixed1(for 1 year)\n\t~ Fixed2(for 3 years)\n\t~ Fixed3(for 5 years)\n\n\tEnter your choice:");
    scanf("%s",add.acc_type);
    fprintf(data,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
    fclose(data);
    printf("\n Account created successfully...");
    fordelay(1000000000);
add_invalid:
    system("cls");
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        mmenu();
    else if(main_exit==0)
        close();
    else
    {
        printf("\nInvalid!\a");
        goto add_invalid;
    }
}
void different_schemes()
{
dschoice:
    system("cls");
    int choice;
    printf("\n\n\n\t\t\t******* Different Schemes *******");
    printf("\n\n\n\t\t1.Fixed Deposite");
    printf("\n\t\t2.Monthly Profit Scheme");
    printf("\n\t\t3.Quarterly Profit Scheme");
    printf("\n\t\t4.Double Profit Scheme");
    printf("\n\t\t5.Millionier Scheme");
    printf("\n\t\t0.Main Menu");
    printf("\n\n\t\tChoose an option for details of the scheme: ");
    scanf("%d",&choice);
    printf("\n\t\tInstallment Type\t\tInstallment Amount\t\tInterest Rate\t\t\t\tPeriod\t\tPayable After Maturity");
    if(choice==1)
    {
        printf("\n\n\t\tOne-Time Installment\t\t\t\t\t\t6.00%%\t\t\t   01 year but less than 03 years\t\t\t\t");
        printf("\n\n\t\tEnter any keys to continue.......");
    }
    else if(choice==2)
    {
        printf("\n\n\t\tOne-Time Installment\t\t1,00,000/-\t\t\t7.00%%\t\t\t\t\t07 years \tMonthly Profit 583/-");
        printf("\n\n\t\tEnter any keys to continue.......");
    }
    else if(choice==3)
    {
        printf("\n\n\t\tOne-Time Installment\t\t1,00,000/-\t\t\t6.50%%\t\t\t\t\t03 years \tQuarterly Profit 1,625/-");
        printf("\n\n\t\tEnter any keys to continue.......");
    }
    else if(choice==4)
    {
        printf("\n\n\t\tOne-Time Installment\t\t10,000/-\t\t\t7.00%%\t\t\t\t\t12 years \t\t\t");
        printf("\n\n\t\tEnter any keys to continue.......");
    }
    else if(choice==5)
    {
        printf("\n\n\t\tMonthly-Time Installment\t14,600/-\t\t\t6.25%%\t\t\t\t\t05 years \t\t10,00,000/-");
        printf("\n\n\t\tEnter any keys to continue.......");
    }
    else if(choice==0)
    {
        mmenu();
    }
    else
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tInvalid selection. Please choose a valid number...");
        printf("\n\n\t\tEnter any keys to continue.......");
    }
    getch();
    goto dschoice;
}
void loan_system()
{
lschoice:
    system("cls");
    int choice,amount;
    char decision[10];
    printf("\n\n\n\t\t\t******* Loan System *******");
    printf("\n\n\t\t1.3years Loan(Maximum 2,00,000 with 4%%  interest)");
    printf("\n\n\t\t2.5years Loan(Maximum 5,00,000 with 5%%  interest)");
    printf("\n\n\t\t3.10years Loan(Maximum 10,00,000 with 6%%  interest)");
    printf("\n\n\t\t0.Main Menu");
    printf("\n\n\t\tEnter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n\t\tEnter the amount: ");
        scanf("%d",&amount);
        printf("\n\t\tLoan amount: %d",amount);
        printf("\n\t\tPeriod: 3years");
        printf("\n\t\tTotal Interest: %.2f",(amount*.04));
        printf("\n\t\tTotal Payable Amount: %.2f",(amount+(amount*.04)));
    }
    else if(choice==2)
    {
        printf("\n\t\tEnter the amount: ");
        scanf("%d",&amount);
        printf("\n\t\tLoan amount: %d",amount);
        printf("\n\t\tPeriod: 5years");
        printf("\n\t\tTotal Interest: %.2f",(amount*.05));
        printf("\n\t\tTotal Payable Amount: %.2f",(amount+(amount*.05)));
    }
    else if(choice==3)
    {
        printf("\n\t\tEnter the amount: ");
        scanf("%d",&amount);
        printf("\n\t\tLoan amount: %d",amount);
        printf("\n\t\tPeriod: 10years");
        printf("\n\t\tTotal Interest: %.2f",(amount*.06));
        printf("\n\t\tTotal Payable Amount: %.2f",(amount+(amount*.06)));
    }
    else if(choice==0)
        mmenu();
    else
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tInvalid selection. Please choose a valid number...");
    }
    int test=0;
    FILE *old,*newrec;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");
    printf("\n\n\t\tEnter the account no. of the customer: ");
    scanf("%d",&transaction.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        fflush(stdin);
        if(add.acc_no==transaction.acc_no)
        {
            test=1;
            printf("\n\t\tConfirm Loan?(Yes/No): ");
            gets(decision);
            fflush(stdin);
            if(strcmp(decision,"Yes")==0 || strcmp(decision,"yes")==0)
            {
                add.amt+=amount;
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                printf("\n\t\tMoney transfered to the account.");
                printf("\n\n\t\tEnter any keys to continue.......");
                getch();
            }
            else mmenu();
        }
        else
        {
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
        }
    }
    fclose(old);
    fclose(newrec);
    remove("record.txt");
    rename("new.txt","record.txt");
    if(test!=1)
    {
        printf("\n\n\t\tRecord not found!!");
transact_invalid:
        printf("\n\n\t\tEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==0)
            loan_system();
        else if (main_exit==1)
            mmenu();
        else if (main_exit==2)
            close();
        else
        {
            printf("\n\t\tInvalid!");
            goto transact_invalid;
        }

    }
    else
    {
        system("cls");
        printf("\n\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            mmenu();
        else
            close();
    }
}
void update_information()
{
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");
    printf("\n\n\n\t\t\t******* Update Account *******");
    printf("\n\n Enter the account no. of the customer whose info you want to change:");
    scanf("%d",&upd.acc_no);
    while(fscanf(old,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        fflush(stdin);
        if (add.acc_no==upd.acc_no)
        {
            test=1;
            printf("\n Which information do you want to change?\n 1.Address\n 2.Phone\n\nEnter your choice(1 for address and 2 for phone):");
            scanf("%d",&choice);
            fflush(stdin);
            system("cls");
            if(choice==1)
            {
                printf(" Enter the new address: ");
                scanf("%s",upd.address);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,upd.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                system("cls");
                printf("Changes saved!");
            }
            else if(choice==2)
            {
                printf(" Enter the new phone number: ");
                scanf("%s",&upd.phone);
                fflush(stdin);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,upd.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                system("cls");
                printf("\n Changes saved!");
            }

        }
        else
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
    }
    fflush(stdin);
    fclose(old);
    fclose(newrec);
    remove("record.txt");
    rename("new.txt","record.txt");

    if(test!=1)
    {
        system("cls");
        printf("\n Record not found!!\a\a\a");
edit_invalid:
        printf("\n Enter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            mmenu();
        else if (main_exit==2)
            close();
        else if(main_exit==0)
            update_information();
        else
        {
            printf("\n Invalid!");
            goto edit_invalid;
        }
    }
    else
    {
        printf("\n\n\n Enter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            mmenu();
        else
            close();
    }
}

void removing_account()
{
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");
    printf("\n\n\t\t\t******* Remove Account *******");
    printf("\n\n Enter the account no. of the customer you want to delete: ");
    scanf("%d",&rem.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);

        else
        {
            test++;
            printf("\n\n Record deleted successfully!\n");
        }
    }
    fclose(old);
    fclose(newrec);
    remove("record.txt");
    rename("new.txt","record.txt");
    if(test==0)
    {
        printf("\n\n Record not found!!");
erase_invalid:
        printf("\n Enter 0 to try again,1 to return to main menu and 2 to exit: ");
        scanf("%d",&main_exit);

        if (main_exit==1)
            mmenu();
        else if (main_exit==2)
            close();
        else if(main_exit==0)
            removing_account();
        else
        {
            printf("\nInvalid!\a");
            goto erase_invalid;
        }
    }
    else
    {
        printf("\n Enter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            mmenu();
        else
            close();
    }

}

void show_profile()
{
    FILE *data;
    int test=0;
    int choice;
    data=fopen("record.txt","r");
    printf("\n\n\n\t\t\t******* View Account *******");
    printf("\n\n Check by\n 1.Account no\n 2.Name\n Enter your choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf(" Enter the account number: ");
        scanf("%d",&check.acc_no);

        while (fscanf(data,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
        {
            if(add.acc_no==check.acc_no)
            {
                system("cls");
                test=1;
                printf("\n Account NO.: %d\n Name: %s\n DOB: %d/%d/%d\n Age: %d\n Address: %s\n NID No : %s\n Phone number: %s\n Type Of Account: %s\n Amount deposited: %.2f\n Date Of Deposit: %d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
            }
        }
    }
    else if (choice==2)
    {
        printf("\n Enter the name: ");
        scanf("%s",&check.name);
        while (fscanf(data,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
        {
            if(strcmpi(add.name,check.name)==0)
            {
                system("cls");
                test=1;
                printf("\n Account No.: %d\n Name: %s\n DOB: %d/%d/%d\n Age: %d\n Address: %s\n NID No: %s\n Phone number:%s\n Type Of Account: %s \n Amount deposited: %.2f \n Date Of Deposit: %d/%d/%d\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.nid,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
            }
        }
    }
    fclose(data);
    if(test!=1)
    {
        system("cls");
        printf("\n Record not found!!\a\a\a");
see_invalid:
        printf("\n Enter 0 to try again,1 to return to main menu and 2 to exit: ");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            mmenu();
        else if (main_exit==2)
            close();
        else if(main_exit==0)
            show_profile();
        else
        {
            system("cls");
            printf("\n Invalid!\a");
            goto see_invalid;
        }
    }
    else
    {
        printf("\n Enter 1 to go to the main menu and 0 to exit: ");
        scanf("%d",&main_exit);
    }
    if (main_exit==1)
    {
        system("cls");
        mmenu();
    }

    else
    {
        system("cls");
        close();
    }
}

void client_year()
{
    FILE *data;
    float max=0;
    data=fopen("record.txt","r");
    printf("\n\n\n\t\t\t******* Client Of The Year *******");
    while (fscanf(data,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if(max<add.amt)
            max=add.amt;
    }
    fseek(data, 0, SEEK_SET);
    while (fscanf(data,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if(max==add.amt)
        {
            printf("\n\n Account NO.: %d\n Name: %s\n Type Of Account: %s\n Amount deposited: %.2f\n\n",add.acc_no,add.name,add.acc_type,add.amt);
        }
    }
    fclose(data);
    printf("\n Enter 1 to return to main menu and 2 to exit: ");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        mmenu();
    else if (main_exit==2)
        close();
}

void existing_account()
{
    FILE *view;
    view=fopen("record.txt","r");
    int test=0;
    system("cls");
    printf("\n\n\n\t\t\t******* All Account's Information *******");
    printf("\n\n ACC. NO.\t\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %s %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.nid,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        printf("\n %4d\t\t%4s\t\t\t%s\t\t\t%s",add.acc_no,add.name,add.address,add.phone);
        test++;
    }

    fclose(view);
    if (test==0)
    {
        system("cls");
        printf("\n NO RECORDS!!\n");
    }

view_list_invalid:
    printf("\n\n Enter 1 to go to the main menu and 0 to exit: ");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        mmenu();
    else if(main_exit==0)
        close();
    else
    {
        printf("\n Invalid!");
        goto view_list_invalid;
    }
}
