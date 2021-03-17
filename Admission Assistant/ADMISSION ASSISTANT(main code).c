#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void magic(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void fy7()
{
    system("color 06");
    char ch=221;
    magic(48,9);
    for(int i=0; i<82; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<30; i++)
        printf("\t\t\t\t\t\t%c%c\t\t\t\t\t\t        \t\t\t%c%c\n",ch,ch,ch,ch);
    magic(48,39);
    for(int i=0; i<82; i++)
        printf("%c",ch);
    printf("\n");
}
void fy()
{
    system("color 06");
    char ch=221;
    magic(56,10);
    for(int i=0; i<58; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<17; i++)
        printf("\t\t\t\t\t       \t\t%c%c\t\t\t\t\t        \t%c%c\n",ch,ch,ch,ch);
    magic(56,27);
    for(int i=0; i<58; i++)
        printf("%c",ch);
    printf("\n");
}

void fy1()
{
    system("color 06");
    char ch=221;
    magic(56,12);
    for(int i=0; i<66; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<19; i++)
        printf("\t\t\t\t\t\t \t%c%c\t\t\t\t\t\t\t\t%c%c\n",ch,ch,ch,ch);
    magic(56,32);
    for(int i=0; i<66; i++)
        printf("%c",ch);
    printf("\n");
}
void fy4()
{
    system("color 06");
    char ch=221;
    magic(48,10);
    for(int i=0; i<74; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<25; i++)
        printf("\t\t\t\t   \t\t%c%c\t\t\t\t\t      \t\t\t\t%c%c\n",ch,ch,ch,ch);
    magic(48,35);
    for(int i=0; i<74; i++)
        printf("%c",ch);
    printf("\n");
}

void loading()
{
    char c,ch=177;
    float a;
    magic(70,15);
    printf(" Admission Assistant -->>");
    clock_t st = clock();
    while (clock() < st+5500);
    system("cls");
    for(int i=1; i<=24; i++)
    {
        c=221;
        magic(75,13);
        printf("Loading...\n\n");
        a=(float)i/24*100;
        magic(60,15);
        printf("%.2f%% ",a);
        for(int x=1; x<i; x++)
            printf("%c",c);
        if(i%1==0)
        {
            clock_t st = clock();
            while (clock() < st+300);
        }
        //if(i<24)
        //system("cls");
    }
    magic(60,17);
    printf("\t      Successfully Loaded");
    clock_t si = clock();
    while (clock() < si+1500);
    system("cls");
}



char s[25][1000]= {"Bangladesh University of Engineering and Technology","Khulna University of Engineering and Technology","Rajsahi University of Engineering and Technology","Chittagong University of Engineering and Technology","Dhaka University",
                   "jahangirnagar university","jagannath university","Khulna University","Barisal University","Rajsahi University","Chitagong University","Bangladesh University of Business and Technology","American International University of Bangladesh","Brac University",
                   "United International University","North-South University","East-West University","Ahsanullah University of Science and Technology","Daffodil International University","University of Liberal Arts Bangladesh","Independent University of Bangladesh"
                  };
struct login
{
    char person[30];
    char password[30];
    char number[20];
    char date_birth[10];
    char registration[100][100];

};
void fy6()
{
    system("color 06");
    char ch=221;
    magic(24,2);
    for(int i=0; i<122; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<40; i++)
        printf("\t\t\t%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%c%c\n",ch,ch,ch,ch);
    magic(24,42);
    for(int i=0; i<120; i++)
        printf("%c",ch);
    printf("\n");
}

void display()
{
    fy();
    magic(74,12);
    printf("1. University Information. \n");
    magic(74,14);
    printf("2. Registration. \n");
    magic(74,16);
    printf("3. My Information.\n");
    magic(74,18);
    printf("4. Circular & Exam Date. \n");
    magic(74,20);
    printf("5. University Rank list. \n");
    magic(74,22);
    printf("6. Logout:\n");
    magic(74,24);
    printf("Press: ");
}
void fy2()
{
    system("color 06");
    char ch=221;
    magic(48,5);
    for(int i=0; i<82; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<33; i++)
        printf("\t\t\t\t\t\t%c%c\t\t\t\t\t\t        \t\t\t%c%c\n",ch,ch,ch,ch);
    magic(48,38);
    for(int i=0; i<82; i++)
        printf("%c",ch);
    printf("\n");
}
void pub_pri()
{
    fy2();
    magic(50,7);
    printf("\n\n\n\t\t\t\t\t\t\t\t1: Bangladesh University of Engineering and Technology\n");
    printf("\t\t\t\t\t\t\t\t2: Khulna University of Engineering and Technology\n");
    printf("\t\t\t\t\t\t\t\t3: Rajsahi University of Engineering and Technology\n");
    printf("\t\t\t\t\t\t\t\t4: Chittagong University of Engineering and Technology\n");
    printf("\t\t\t\t\t\t\t\t5: Dhaka University\n");
    printf("\t\t\t\t\t\t\t\t6: jahangirnagar university\n");
    printf("\t\t\t\t\t\t\t\t7: jagannath university\n");
    printf("\t\t\t\t\t\t\t\t8: Khulna University\n");
    printf("\t\t\t\t\t\t\t\t9: Barisal University\n");
    printf("\t\t\t\t\t\t\t\t10: Rajsahi University\n");
    printf("\t\t\t\t\t\t\t\t11: Chitagong University\n");
    printf("\t\t\t\t\t\t\t\t12: Bangladesh University of Business and Technology\n");
    printf("\t\t\t\t\t\t\t\t13: American International University of Bangladesh\n");
    printf("\t\t\t\t\t\t\t\t14: Brac University\n");
    printf("\t\t\t\t\t\t\t\t15: United International University\n");
    printf("\t\t\t\t\t\t\t\t16: North-South University\n");
    printf("\t\t\t\t\t\t\t\t17: East-West University\n");
    printf("\t\t\t\t\t\t\t\t18: Ahsanullah University of Science and Technology\n");
    printf("\t\t\t\t\t\t\t\t19: Daffodil International University\n");
    printf("\t\t\t\t\t\t\t\t20: University of Liberal Arts Bangladesh\n");
    printf("\t\t\t\t\t\t\t\t21: Independent University of Bangladesh\n");
    printf("\t\t\t\t\t\t\t\t22: For Go Back >>");
}
void fy8()
{
    system("color 06");
    char ch=221;
    magic(40,1);
    for(int i=0; i<90; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<42; i++)
        printf("\t\t\t\t\t%c%c\t\t\t\t\t\t\t\t\t\t\t%c%c\n",ch,ch,ch,ch);
    magic(40,43);
    for(int i=0; i<90; i++)
        printf("%c",ch);
    printf("\n");
}
void fy5()
{
    system("color 06");
    char ch=221;
    magic(48,9);
    for(int i=0; i<82; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<25; i++)
        printf("\t\t\t\t \t\t%c%c\t\t\t\t\t   \t   \t\t\t\t%c%c\n",ch,ch,ch,ch);
    magic(48,34);
    for(int i=0; i<82; i++)
        printf("%c",ch);
    printf("\n");
}
void publicuniversity()
{
    fy7();
    magic(54,10);
    printf("\n\t\t\t\t\t\t\t\t\t       \tPublic University\n");
    printf("\t\t\t\t\t\t\t\t\t      ---------------------\n");
    printf("\t\t\t\t\t\t\t1: Bangladesh University of Engineering and Technology\n\n");
    printf("\t\t\t\t\t\t\t2: Khulna University of Engineering and Technology\n\n");
    printf("\t\t\t\t\t\t\t3: Rajsahi University of Engineering and Technology\n\n");
    printf("\t\t\t\t\t\t\t4: Chittagong University of Engineering and Technology\n\n");
    printf("\t\t\t\t\t\t\t5: Dhaka University\n\n");
    printf("\t\t\t\t\t\t\t6: jahangirnagar university\n\n");
    printf("\t\t\t\t\t\t\t7: jagannath university\n\n");
    printf("\t\t\t\t\t\t\t8: Khulna University\n\n");
    printf("\t\t\t\t\t\t\t9: Barisal University\n\n");
    printf("\t\t\t\t\t\t\t10: Rajsahi University\n\n");
    printf("\t\t\t\t\t\t\t11: Chitagong University\n\n");
}
void pvtuniversity()
{
    fy7();
    magic(54,10);
    printf("\n\t\t\t\t\t\t\t\t\t       \tprivate University\n");
    printf("\t\t\t\t\t\t\t\t\t      ---------------------\n");
    printf("\n\t\t\t\t\t\t\t1: Bangladesh University of Business and Technology\n\n");
    printf("\t\t\t\t\t\t\t2: American International University of Bangladesh\n\n");
    printf("\t\t\t\t\t\t\t3: Brac University\n\n");
    printf("\t\t\t\t\t\t\t4: United International University\n\n");
    printf("\t\t\t\t\t\t\t5: North-South University\n\n");
    printf("\t\t\t\t\t\t\t6: East-West University\n\n");
    printf("\t\t\t\t\t\t\t7: Ahsanullah University of Science and Technology\n\n");
    printf("\t\t\t\t\t\t\t8: Daffodil International University\n\n");
    printf("\t\t\t\t\t\t\t9: University of Liberal Arts Bangladesh\n\n");
    printf("\t\t\t\t\t\t\t10: Independent University of Bangladesh\n\n");
}
void fy3()
{
    system("cls");
    char ch=221;
    magic(23,5);
    for(int i=0; i<122; i++)
        printf("%c",ch);
    printf("\n");
    for(int i=0; i<35; i++)
        printf("\t\t       %c%c\t\t\t\t\t\t\t\t\t\t\t\t\t               %c%c\n",ch,ch,ch,ch);
    magic(23,41);
    for (int i=0; i<122; i++)
        printf("%c",ch);
    printf("\n");
}
void regff(int a,char s[],char name[],char hsc_roll[],char hsc_reg[],char date_birth[],char hsc_pass[])
{
    strcat(s,".txt");
    FILE *pt;
    pt=fopen(s,"w");
    fprintf(pt,"Name: %s\n",name);
    fprintf(pt,"HSC Roll: %s\n",hsc_roll);
    fprintf(pt,"HSC Registration: %s\n",hsc_reg);
    fprintf(pt,"Date Of Birth: %s\n",date_birth);
    fprintf(pt,"HSC Session: %s\n",hsc_pass);
    fprintf(pt,"Exam date: %d%s\n",a,"/02/2021");
    fprintf(pt,"Exam Roll: %d",99999*a);
    fclose(pt);
}
void username(char name[],char pars[])
{
    strcat(name,".txt");
    FILE *pt;
    pt=fopen(name,"w");
    fprintf(pt,"%s",pars);
    fclose(pt);
}
int loginn(char name[],char password[])
{
    strcat(name,".txt");
    FILE *pt;
    char ch[100];
    pt=fopen(name,"r");
    if(pt=='NULL')
        return 0;
    else
    {
        fscanf(pt,"%s",ch);
        if(strcmp(password,ch)==0)
            return 1;
        else
            return 0;
    }
    fclose(pt);
}




int main()
{
    system("color 06");
    loading();
yyy:
    system("cls");
    fy();
    magic(68,16);
    printf("Do you have any accound(y/n): ");
    struct login per;
    int count=0,wrong=0,flot=0;
    int a;
    char tt;
    scanf("%c",&tt);
    getchar();
    if(tt=='y'||tt=='Y')
    {
backs:
        if(count!=0)
        {
            count=0;
            getchar();
        }
        system("cls");
        fy();
        magic(84,12);
        printf("Login");
        magic(81,13);
        printf("------------");
        magic(64,15);
        printf("Enter Your name: ");
        gets(per.person);
        magic(64,17);
        printf("Enter Your password: ");
        scanf("%s",&per.password);
        getchar();
        int log=loginn(per.person,per.password);
        if(log==1)
        {
            magic(73,21);
            printf("Successfully login....");
            clock_t st = clock();
            while (clock() < st+2500);
            system("cls");
        }
        else
        {
            wrong++;
            magic(70,20);
            printf("**Wrong username or password ");
            clock_t st = clock();
            while (clock() < st+2500);
            system("cls");
            if(wrong>=3)
            {
                wrong=0;
                system("cls");
                fy();
                magic(67,16);
                printf("You gave 3 times wrong password");
                magic(67,17);
                printf("You should do Registration... ");
                clock_t st = clock();
                while (clock() < st+4500);
                system("cls");
                goto yyy;
            }
            goto backs;
        }
    }
    else if(tt=='n'||tt=='N')
    {
        system("cls");
        fy();
        magic(81,12);
        printf("Registration");
        magic(79,13);
        printf("----------------");
        magic(64,15);
        printf("Enter Your name: ");
        gets(per.person);
        magic(64,17);
        printf("Enter Your password: ");
        scanf("%s",&per.password);
        magic(64,19);
        printf("Enter your phone number: ");
        scanf("%s",&per.number);
        username(per.person,per.password);
        magic(64,21);
        printf("Date of birth:  ");
        scanf("%s",&per.date_birth);
        magic(70,23);
        printf("Successfully Registration....");
        clock_t st = clock();
        while (clock() < st+2500);
        system("cls");
        count++;
        goto backs;
    }
    else
        goto yyy;
    while(1)
    {
dak:
        system("cls");
        fy();
        magic(2,5);
        display();
        int x;
        scanf("%d",&x);
        switch (x)
        {
        case 1:
        {
bns:
            system("cls");
            fy();
            magic(5,11);
            printf("\n\n\t\t\t\t\t\t\t\t\t1: Public University\n");
            printf("\n\n\t\t\t\t\t\t\t\t\t2: Private University\n");
            printf("\n\n\t\t\t\t\t\t\t\t\t3: For Go to Back ");
            printf("\n\n\n\t\t\t\t\t\t\t\t\tPress: ");
            int n;
            scanf("%d",&n);
            switch (n)
            {
            case 1:
            {
cns:
                system("cls");
                printf("\n\n\n\n\n");
                publicuniversity();
                printf("\t\t\t\t\t\t\t12. Do you want to go back : ");
                printf("\n\n\t\t\t\t\t\t\tPress: ");
                int a;
                scanf("%d",&a);
                printf("\n\n\n");
                if(a==1)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("BUET.txt","r");
                    magic(60,2);
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,35);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==2)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("KUET.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==3)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("RUET.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==4)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("CUET.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==5)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("DU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==6)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("JU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==7)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("JNU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==8)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("KU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==9)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("BU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==10)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("RU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==11)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("CU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto cns;
                    fclose(p);
                }
                else if(a==12)
                {
                    goto bns;
                }
                break;
            }

            case 2:
            {
tt:
                system("cls");
                printf("\n\n\n\n\n");
                pvtuniversity();
                printf("\t\t\t\t\t\t\t11. Do you want to go back : ");
                printf("\n\n\t\t\t\t\t\t\tPress: ");
                int a;
                scanf("%d",&a);
                printf("\n\n\n");
                if(a==1)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("BUBT.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,37);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==2)
                {
                    system("cls");

                    FILE *p;
                    char c;
                    p=fopen("AIUB.txt","r+");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,38);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==3)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("BRAC.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,37);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==4)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("UIU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,35);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==5)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("NSU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==6)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("EWU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==7)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("AUST.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==8)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("DIU.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==9)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("ULAB.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==10)
                {
                    system("cls");
                    FILE *p;
                    char c;
                    p=fopen("IUB.txt","r");
                    while(1)
                    {
                        c=fgetc(p);
                        if(c==EOF)
                            break;
                        printf("%c",c);
                    }
                    getchar();
                    fy6();
                    char cc;
                    magic(4,39);
                    printf("\t\t\t\t\t\t\tDo you want to back (y/n): ");
                    scanf("%c",&cc);
                    if(cc=='y')
                        goto tt;
                    fclose(p);
                }
                else if(a==11)
                {
                    goto bns;
                }
                break;

            }
            case 3:
            {
                goto dak;
            }
            break;
            }
            break;
        }

        case 2:
        {
uu:
            system("cls");
            char ll[10],name[20],hsc_roll[10],hsc_reg[10],date_birth[10],hsc_pass[10];
            magic(83,7);
            printf("Registration\n");
            magic(81,8);
            printf("-----------------------\n");
            pub_pri();
            printf("\n\n\t\t\t\t\t\t\t\tPress: ");
            int a;
            scanf("%d",&a);
            printf("\n\t\t\t\t\t\t\t\t\t\tPlease wait for processing.....");
            clock_t st = clock();
            while (clock() < st+4000);
            int e3=0;
            if(a!=22)
            {
                system("cls");
                fy4();
                magic(22,12);
                char y;
                printf("\n\t\t\t\t\t\t\t\t>> %s",s[a-1]);
                getchar();
                printf("\n\n\n\t\t\t\t\t\t\tFor Back(y/n): ");
                scanf("%c",&y);
                if(y=='y'||y=='Y')
                    goto uu;
                    getchar();
                printf("\n\n\t\t\t\t\t\t\tEnter your name: ");
                gets(name);
                printf("\n\t\t\t\t\t\t\tEnter your hsc roll: ");
                scanf("%s",&hsc_roll);
                printf("\n\t\t\t\t\t\t\tEnter your hsc reg: ");
                scanf("%s",&hsc_reg);
                printf("\n\t\t\t\t\t\t\tEnter your birth date : ");
                scanf("%s",&date_birth);
                printf("\n\t\t\t\t\t\t\tEnter your hsc passed year: ");
                scanf("%s",&hsc_pass);
                printf("\n\n\t\t\t\t\t\t\t\t\tPlease wait for processing.....");
                clock_t sl = clock();
                while (clock() < sl+3500);
                system("cls");
                {
                    eb:
                    system("cls");
                    fy();
                    int d;
                    magic(79,12);
                    printf("payment method\n");
                    magic(76,13);
                    printf("--------------------\n");
                    magic(70,15);
                    printf("1. Bkash\n");
                    magic(70,17);
                    printf("2. Rocket\n");
                    magic(70,19);
                    printf("3. Nogod\n");
                    magic(70,21);
                    printf("4. For Go Back(y/n): ");
                    magic(71,22);
                    printf("press: ");
                    scanf("%d",&d);
                    if(d==4)
                        goto uu;
                    magic(71,24);
                    printf("Please wait for processing.....");
                    clock_t sl = clock();
                    while (clock() < sl+3500);
                    system("cls");
                    if(d==1)
                    {
                        system("cls");
                        fy5();
                        char sn[20][20],rc[20][20],in[20][20];
                        magic(88,12);
                        printf("Bkash \n");
                        magic(83,13);
                        printf("---------------\n");
                        magic(53,14);
                        printf("Go to bKash Menu by dialing 247# Choose 'Payment' option by pressing '3'\n");
                        magic(53,15);
                        printf("Enter our Merchant wallet number :01****.Enter amount.After completing\n");
                        magic(53,16);
                        printf("this process you will get a confirmation message. Then fill up the form.\n");
                        magic(65,18);
                        printf("For Go Back(y/n): ");
                        char nn;
                        getchar();
                        scanf("%c",&nn);
                        if(nn=='y'||nn=='Y')
                            goto eb;
                        magic(65,20);
                        printf("Sender Number: ");
                        scanf("%s",&sn);
                        magic(65,22);
                        printf("Recieved Code: ");
                        scanf("%s",&rc);
                        magic(65,24);
                        printf("Id Number: ");
                        scanf("%s",&in);
                        magic(72,28);
                        printf("Successfully Registered......");
                        clock_t st = clock();
                        while (clock() < st+3500);
                        system("cls");
                        {
                            int i=0;
                            FILE *p;
                            char c;
                            int len=strlen(s[a-1]);
                            p=fopen("registration.txt","a");
                            while(len--)
                            {
                                c=s[a-1][i++];
                                fprintf(p,"%c",c);
                            }
                            fprintf(p, "\n");
                            fclose(p);
                        }
                        regff(a,s[a-1],name,hsc_roll,hsc_reg,date_birth,hsc_pass);
                    }
                    else if(d==2)
                    {
                        system("cls");
                        fy5();
                        char sn[20][20],rc[20][20],in[20][20];
                        magic(88,12);
                        printf("Rocket  \n");
                        magic(83,13);
                        printf("---------------\n");
                        magic(53,14);
                        printf("Go to your Rocket Mobile Menu by dialing *322#.Choose Bill Pay.\n");
                        magic(53,15);
                        printf("Choose Self or Others.Enter Your Bill Number:**Enter the bill amount:**.\n");
                        magic(53,16);
                        printf("Now enter your Rocket Mobile.Menu PIN to confirm.Done!You will receive a \n");
                        magic(53,17);
                        printf("confirmation message from 16216.Then fill up the from.");
                        magic(65,21);
                        printf("Sender Number: ");
                        scanf("%s",&sn);
                        magic(65,23);
                        printf("Recieved Code: ");
                        scanf("%s",&rc);
                        magic(65,25);
                        printf("Id Number: ");
                        scanf("%s",&in);
                        magic(72,28);
                        printf("Successfully Registered.......");
                        clock_t st = clock();
                        while (clock() < st+3500);
                        system("cls");
                        system("cls");
                        {
                            int i=0;
                            FILE *p;
                            char c;
                            int len=strlen(s[a-1]);
                            p=fopen("registration.txt","a");
                            while(len--)
                            {
                                c=s[a-1][i++];
                                fprintf(p,"%c",c);
                            }
                            fprintf(p, "\n");
                            fclose(p);
                        }
                        regff(a,s[a-1],name,hsc_roll,hsc_reg,date_birth,hsc_pass);
                    }
                    else if(d==3)
                    {
                        system("cls");
                        fy5();
                        char sn[20][20],rc[20][20],in[20][20];
                        magic(88,12);
                        printf("Nogod \n");
                        magic(83,13);
                        printf("---------------\n");
                        magic(53,14);
                        printf("Go to your Rocket Mobile Menu by dialing *322#.Choose Bill Pay.\n");
                        magic(53,15);
                        printf("Choose Self or Others.Enter Your Bill Number:**Enter the bill amount:**.\n");
                        magic(53,16);
                        printf("Now enter your Rocket Mobile.Menu PIN to confirm.Done!You will receive a \n");
                        magic(53,17);
                        printf("confirmation message from 16216.Then fill up the from.");
                        magic(65,21);
                        printf("Sender Number: ");
                        scanf("%s",&sn);
                        magic(65,23);
                        printf("Recieved Code: ");
                        scanf("%s",&rc);
                        magic(65,25);
                        printf("Id Number: ");
                        scanf("%s",&in);
                        magic(72,28);
                        printf("Successfully Registered.......");
                        clock_t st = clock();
                        while (clock() < st+3500);
                        system("cls");
                        system("cls");
                        {
                            int i=0;
                            FILE *p;
                            char c;
                            int len=strlen(s[a-1]);
                            p=fopen("registration.txt","a");
                            while(len--)
                            {
                                c=s[a-1][i++];
                                fprintf(p,"%c",c);
                            }
                            fprintf(p, "\n");
                            fclose(p);
                        }
                        regff(a,s[a-1],name,hsc_roll,hsc_reg,date_birth,hsc_pass);
                    }
                    else if(d==4)
                    {
                        goto uu;
                    }
                }

            }
            else
                goto dak;
            break;
        }
        case 3:
        {
            int quee=0;
ie:
            system("cls");
            fy();
            magic(68,14);
            printf("1. Registered University: ");
            magic(68,16);
            printf("2. Admit Card: ");
            magic(68,18);
            printf("3. Go Back");
            magic(68,20);
            printf("Press: ");
            int pr;
            scanf("%d",&pr);
            if(pr==1)
            {
                system("cls");
                fy2();
                FILE *p;
                char c[10000];
                int i=10,ll=1;
                p=fopen("registration.txt","r");
                magic(80,7);
                printf("Registered University");
                magic(75,8);
                printf("-----------------------------");
                while(fgets(c,100,p)!=NULL)
                {
                    magic(60,i++);
                    printf(">> %d: ",ll++);
                    puts(c);
                }
                fclose(p);
                magic(65,i+3);
                printf("Do you want to back (y/n): ");
                getchar();
                char cc;
                scanf("%c",&cc);
                if(cc=='y')
                    goto ie;
                else
                    goto dak;
            }
            else if(pr==2)
            {
                while(1)
                {
                    system("cls");
                    fy2();
                    FILE *p;
                    char chh[100][100];
                    int e=1;
                    int i=10,ll=1;
                    p=fopen("registration.txt","r");
                    magic(84,7);
                    printf("Admit Card");
                    magic(75,8);
                    printf("-----------------------------");
                    magic(60,i++);
                    i=i+4;
                    printf("** %d: For go back  ",ll++);
                    while(fgets(chh[e++],100,p)!=NULL)
                    {
                        magic(60,i++);
                        printf(">> %d: ",ll++);
                        puts(chh[e-1]);
                    }
                    fclose(p);
                    magic(60,i+3);
                    getchar();
                    printf("Press : ");
                    int cc;
                    scanf("%d",&cc);
                    if(cc==1)
                        goto ie;
                    else
                    {
                        system("cls");
                        {
                            int i=16;
                            FILE *q;
                            char ccc[100];
                            char buf[100];
                            char cuf[100];
                            for(int w=0; w<=100; w++)
                            {
                                ccc[w]=NULL;
                                buf[w]=NULL;
                                cuf[w]=NULL;
                            }
                            strcat(buf,chh[cc-1]);
                            for(int jj=0; jj<strlen(buf)-1; jj++)
                                cuf[jj]=buf[jj];
                            strcat(cuf,".txt");
                            //getchar();
                            q=fopen(cuf,"r");
                            fy4();
                            magic(58,13);
                            printf(">> %s",chh[cc-1]);
                            magic(105,16);
                            printf("Photo");
                            magic(103,17);
                            printf("----------");
                            magic(103,18);
                            printf("|        |");
                            magic(103,19);
                            printf("|        |");
                            magic(103,20);
                            printf("|        |");
                            magic(103,21);
                            printf("|        |");
                            magic(103,22);
                            printf("----------");
                            while(fgets(ccc,1000,q)!=NULL)
                            {
                                magic(58,i++);
                                puts(ccc);
                                i++;
                            }
                            i++;
                            fclose(q);
                            magic(62,i++);
                            getchar();
                            printf("Press (Y/N) for Back: ");
                            char kk;
                            scanf("%c",&kk);
                            printf("\n\t\t\t\t\t\t\t\t\tPlease wait for processing.....");
                            quee++;
                            clock_t sl = clock();
                            while (clock() < sl+3500);
                            system("cls");
                            if(kk=='Y'||kk=='y')
                            {

                            }
                            else
                                goto ie;

                        }
                    }
                }
            }
            else if(pr==3)
            {
                goto dak;
            }
        }
        case 4:
        {

bak:
            system("cls");
            pub_pri();
            magic(87,7);
            printf("Circular \n");
            magic(82,8);
            printf("-----------------\n");
            magic(63,33);
            printf("Press: ");
            int dd;
            scanf("%d",&dd);
            magic(74,35);
            printf("Please wait for processing.....");
            clock_t sl = clock();
            while (clock() < sl+2500);
            system("cls");
            getchar();
            if(dd==22)
                break;
            else if(dd>=1 &&dd<=21)
            {
                system("cls");
                fy3();
                char n;
                magic(57,8);
                printf(">> %s",s[dd-1]);
                FILE *p;
                char c;
                p=fopen("circular.txt","r");
                while(1)
                {
                    c=fgetc(p);
                    if(c==EOF)
                        break;
                    printf("%c",c);
                }
                fclose(p);
                magic(62,36);
                printf(">> For Go Back (y/n): ");
                scanf("%c",&n);
                if(n=='y'||n=='Y')
                {
                    goto bak;
                }
                else
                    goto dak;
            }
        }
        case 5:
        {
            int i=1;
            while(i>=1&&i<=6)
            {
                system("cls");
                printf("\n");
                FILE *p;
                char c;
                if(i==1)
                {
                    p=fopen("RANK1.txt","r");
                }
                else if(i==2)
                {
                    p=fopen("RANK2.txt","r");
                }
                else if(i==3)
                {
                    p=fopen("RANK3.txt","r");
                }
                else if(i==4)
                {
                    p=fopen("RANK4.txt","r");
                }
                else if(i==5)
                {
                    p=fopen("RANK5.txt","r");
                }
                else if(i==6)
                {
                    p=fopen("RANK6.txt","r");
                }
                else
                    goto dak;
                while(1)
                {
                    c=fgetc(p);
                    if(c==EOF)
                        break;
                    printf("%c",c);
                }
                fy8();
                magic(57,40);
                if(i==6)
                    printf("## for Go Back press(1): ");
                else
                    printf("## For Go Back press(1) For Next press(2): ");
                int dd;
                scanf("%d",&dd);
                if(i==1&&dd==1)
                    goto dak;
                if(dd==1)
                    i--;
                else if(dd==2)
                    i++;
                else
                    goto dak;
            }
            break;
        }
        case 6:
        {
            system("cls");
            flot=1;
        }
        }
        if(flot==1)
            break;
    }
}







