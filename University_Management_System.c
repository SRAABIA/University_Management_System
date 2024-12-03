#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct schedule
{

    char day[20];
    char first[60];
    int room1;
    char second[60];
    int room2;
    char third[60];
    int room3;
    char fourth[60];
    int room4;
    char fifth[60];
    int room5;
    char sixth[60];
    int room6;
    char seventh[60];
    int room7;
    char eighth[60];
    int room8;
};
int n, no;
struct discipline
{
    int En;
    int batch;
    char disci[20];
    char section[10];
    struct schedule s[7];
} d;
struct dep_time
{
    int hr;
    int mins;
};

struct bus
{
    char day[20];
    int point_no;
    struct dep_time atime;
    struct dep_time detime;
};
struct bus b[6];

void admin();
void student();
void addclassschedule();
void editclassschedule();
void deleteclassschedule();
void displayschedule();
void addbus();
void editbus();
void deletebus();
void viewbus();

// main()

void main()
{
    int ch;
    while (ch != 3)
    {
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\t_________________________________________________");
        printf("\n\t\t\t\tWELCOME TO UNIVERSITY INFORMATION PORTAL");
        printf("\n\t\t\t\t_________________________________________________");
        printf("\n\t\t\t\tEnter:");
        printf("\n\t\t\t\t\t1. Administrator\n\t\t\t\t\t2. Student\n\t\t\t\t\t3. Exit\n\n");
        printf("\t\t\t\t_________________________________________________");
        printf("\n\t\t\t\tEnter your choice please: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 2:
            system("cls");
            student();
            break;
        case 1:
            system("cls");
            admin();
            break;
        } // switch closing
    } // while loop closing

} // main closing

void admin()
{
    char pass[] = "123";
    int i = 0, ch, ch1, ch2;
    char PASS[3];
    printf("\n\n\n\n");
    printf("\t\t\t\tPLEASE CONFIGURE YOUR IDENTITY");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tPlease Enter Password: ");
    while (PASS[i] != 13 && i < 3)
    {

        PASS[i] = getch();
        printf("*");
        i++;
    }

    if (strcmp(pass, PASS) == 0)
    {
        while (ch != 4)
        {
            system("cls");
            printf("\n\n\n\n");
            printf("\t\t\t\tWELCOME ADMIN");
            printf("\n\t\t\t\t_________________________________________________");
            printf("\n\t\t\t\tEnter:");
            printf("\n\t\t\t\t\t1. Add Record\n\t\t\t\t\t2. Edit Record\n\t\t\t\t\t3. Delete Record\n\t\t\t\t\t4. Go Back To Main Menu\n\n");
            printf("\t\t\t\t_________________________________________________");
            printf("\n\t\t\t\tEnter your choice please: ");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1: // add record case
                system("cls");
                printf("\n\n\n\n");
                printf("\t\t\t\tWELCOME ADMIN");
                printf("\n\t\t\t\t_________________________________________________");
                printf("\n\t\t\t\tEnter:");
                printf("\n\t\t\t\t\t1. Add Class Schedule\n\t\t\t\t\t2. Add Bus Schedule\n\t\t\t\t\t3. Go Back To Main Menu\n\n");
                printf("\t\t\t\t_________________________________________________");
                printf("\n\t\t\t\tEnter your choice please: ");
                scanf("%d", &ch1);
                switch (ch1)
                {
                case 1:
                    system("cls");
                    addclassschedule();
                    break;
                case 2:
                    system("cls");
                    addbus();
                    break;
                }
                break;
            case 2: // edit record case
                system("cls");
                printf("\n\n\n\n");
                printf("\t\t\t\tWELCOME ADMIN");
                printf("\n\t\t\t\t_________________________________________________");
                printf("\n\t\t\t\tEnter:");
                printf("\n\t\t\t\t\t1. Edit Class Schedule\n\t\t\t\t\t2. Edit Bus Schedule\n\t\t\t\t\t3. Go Back To Main Menu\n\n");
                printf("\t\t\t\t_________________________________________________");
                printf("\n\t\t\t\tEnter your choice please: ");
                scanf("%d", &ch2);
                switch (ch2)
                {
                case 1:
                    system("cls");
                    editclassschedule();
                    break;
                case 2:
                    system("cls");
                    editbus();
                    break;
                }
                break;
            case 3: // delete info case
                system("cls");
                printf("\n\n\n\n");
                printf("\t\t\t\tWELCOME ADMIN");
                printf("\n\t\t\t\t_________________________________________________");
                printf("\n\t\t\t\tEnter:");
                printf("\n\t\t\t\t\t1. Delete Class Schedule\n\t\t\t\t\t2. Delete Bus Schedule\n\t\t\t\t\t3. Go Back To Main Menu\n\n");
                printf("\t\t\t\t_________________________________________________");
                printf("\n\t\t\t\tEnter your choice please: ");
                scanf("%d", &ch2);
                switch (ch2)
                {
                case 1:
                    system("cls");
                    deleteclassschedule();
                    break;
                case 2:
                    system("cls");
                    deletebus();
                    break;
                }
                break;
            }
        } // while loop closing

    } // PASSWORD MATCHING'S IF CLOSING

} // FUCTION ADMIN CLOSING

void student()
{
    int ch;
    while (ch != 3)
    {
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\tWELCOME STUDENT");
        printf("\n\t\t\t\t_________________________________________________");
        printf("\n\t\t\t\tEnter:");
        printf("\n\t\t\t\t\t1. See Your Schedule\n\t\t\t\t\t2. See Your Bus Schedule\n\t\t\t\t\t3. Go Back To Main Menu\n\n");
        printf("\t\t\t\t_________________________________________________");
        printf("\n\t\t\t\tEnter your choice please: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            displayschedule();
            break;
        case 2:
            viewbus();
            break;
        }
    } // loop closing
}

void addclassschedule()
{
    int i, sec;
    FILE *fc;

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Batch You Want To Add Schedule (i.e: 21,20..): ");
    scanf("%d", &d.batch);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Discipline You Want To Add Schedule (i.e: BCS): ");
    scanf("%s", &d.disci);
    fflush(stdin);
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Section You Want To Add Schedule (i.e: A,B,...): ");
    gets(d.section);
    fflush(stdin);

    fc = fopen("class.txt", "ab+");
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor How Many Days You Want To Add Schedule: ");
    scanf("%d", &n);
    fflush(stdin);

    for (i = 0; i < n; i++)
    {
        system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t\tINSTRUCTION: Type FREE For Free slot, And 00 For ROOM Of FREE Slot.\n");
        printf("\n\t\t\t\t_________________________________________________________________________");
        printf("\n\t\t\t\tEnter The Day-%d Name (i.e: Monday): ", i + 1);
        gets(d.s[i].day);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 1st Slot: ");
        gets(d.s[i].first);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 1st Slot: ");
        scanf("%d", &d.s[i].room1);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 2nd Slot: ");
        gets(d.s[i].second);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 2nd Slot: ");
        scanf("%d", &d.s[i].room2);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 3rd Slot: ");
        gets(d.s[i].third);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 3rd Slot: ");
        scanf("%d", &d.s[i].room3);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 4th Slot: ");
        gets(d.s[i].fourth);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 4th Slot: ");
        scanf("%d", &d.s[i].room4);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 5th Slot: ");
        gets(d.s[i].fifth);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 5th Slot: ");
        scanf("%d", &d.s[i].room5);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 6th Slot: ");
        gets(d.s[i].sixth);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 6th Slot: ");
        scanf("%d", &d.s[i].room6);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 7th Slot: ");
        gets(d.s[i].seventh);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 7th Slot: ");
        scanf("%d", &d.s[i].room7);
        fflush(stdin);

        printf("\n\t\t\t\tEnter The Course Code For 8th Slot: ");
        gets(d.s[i].eighth);
        fflush(stdin);
        printf("\n\t\t\t\tEnter The Room-No For 8th Slot: ");
        scanf("%d", &d.s[i].room8);
        fflush(stdin);

        fwrite(&d, sizeof(d), 1, fc);

    } // subject adding loop closing
    if (i == n)
    {

        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tYour Record Added Successfully...THANKS\n\t\t\tPress Any Key To Return To Main Menu");
        getch();
    }
    fclose(fc);
} // addschedule closing

void displayschedule()
{
    char disp[20], sec[20], Day[20];
    int i, Batch = 0;

    FILE *fc;
    fc = fopen("class.txt", "r");
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tEnter Your Batch (i.e: 21,20..): ");
    scanf("%d", &Batch);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tEnter Your Discipline: ");
    scanf("%s", &disp);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tEnter Your Section: ");
    scanf("%s", &sec);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\n\t\t\t\tEnter The Day For Which You Want To Search: ");
    scanf("%s", &Day);
    fflush(stdin);

    while (fread(&d, sizeof(d), 1, fc))
    {

        if ((strcmp(disp, d.disci) == 0) && (strcmp(sec, d.section) == 0) && (Batch == d.batch))
        {

            system("cls");
            printf("\n\n\n\n");
            printf("\n\t\t\t\t_________________________________________________");
            printf("\n\t\t\t\tYour Batch: %d", Batch);
            printf("\n\t\t\t\t_________________________________________________");
            printf("\n\t\t\t\tYour Discipline: %s", disp);
            printf("\n\t\t\t\tYour Section:    %s", sec);
            printf("\n\t\t\t\t_________________________________________________");

            for (i = 0; i < 7; i++)
            {
                if (strcmp(d.s[i].day, Day) == 0)
                {

                    printf("\n\t\t\t\t    SLOTS         ROOM-NO    	COURSE   ");

                    printf("\n\t\t\t\t_________________________________________________");

                    printf("\n\t\t\t\t8:00  - 9:00      R.No-%.2d     %s   ", d.s[i].room1, d.s[i].first);

                    printf("\n\t\t\t\t9:00  - 10:00     R.No-%.2d     %s   ", d.s[i].room2, d.s[i].second);

                    printf("\n\t\t\t\t10:00 - 11:00     R.No-%.2d     %s  ", d.s[i].room3, d.s[i].third);

                    printf("\n\t\t\t\t11:00 - 12:00     R.No-%.2d     %s  ", d.s[i].room4, d.s[i].fourth);

                    printf("\n\t\t\t\t12:00 - 1:00      R.No-%.2d     %s  ", d.s[i].room5, d.s[i].fifth);

                    printf("\n\t\t\t\t1:00  - 2:00      R.No-%.2d     %s  ", d.s[i].room6, d.s[i].sixth);

                    printf("\n\t\t\t\t2:00  - 3:00      R.No-%.2d     %s  ", d.s[i].room7, d.s[i].seventh);

                    printf("\n\t\t\t\t3:00  - 4:00      R.No-%.2d     %s  ", d.s[i].room8, d.s[i].eighth);

                    printf("\n\t\t\t\t_________________________________________________");

                    getch();

                    break;
                }
                // sred
                else if (i == 7)
                {
                    printf("\n\t\t\t________________________________________________________________________");
                    printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
                    printf("\n\t\t\t________________________________________________________________________");
                    getch();
                }
            }
        }

        //	else
        //	{
        //		printf("\n\t\t\t________________________________________________________________________");
        //		printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
        //		printf("\n\t\t\t________________________________________________________________________");
        //		getch();
        //	}
    } // while loop closing
    fclose(fc);

} // display class schedule closing

void editclassschedule()
{
    int i, j, Batch;
    char disp[20], sec[20], Day[20];

    FILE *fc;

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Batch You Want To Edit Record:  (i.e: 21,20..): ");
    scanf("%d", &Batch);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Discipline You Want To Edit Record (i.e: BCS..): ");
    scanf("%s", &disp);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Section You Want To Edit Record (i.e: A,B..):  ");
    scanf("%s", &sec);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\n\t\t\t\tFor Which Day You Want To Edit Record (i.e: Monday..): ");
    scanf("%s", &Day);
    fflush(stdin);

    if ((strcmp(disp, d.disci) == 0) && (strcmp(sec, d.section) == 0) && (d.batch == Batch))
    {

        for (j = 0; j < 7; j++)
        {
            if (strcmp(Day, d.s[j].day) == 0)
            {

                system("cls");
                printf("\n\n\n\n");
                printf("\n\t\t\t\tINSTRUCTION: Type FREE For Free slot, And 00 For ROOM Of FREE Slot.\n");
                printf("\n\t\t\t\t_________________________________________________________________________");
                printf("\n\t\t\t\tEnter The Course Code For 1st Slot: ");
                gets(d.s[j].first);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 1st Slot: ");
                scanf("%d", &d.s[j].room1);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 2nd Slot: ");
                gets(d.s[j].second);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 2nd Slot: ");
                scanf("%d", &d.s[j].room2);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 3rd Slot: ");
                gets(d.s[j].third);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 3rd Slot: ");
                scanf("%d", &d.s[j].room3);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 4th Slot: ");
                gets(d.s[j].fourth);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 4th Slot: ");
                scanf("%d", &d.s[j].room4);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 5th Slot: ");
                gets(d.s[j].fifth);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 5th Slot: ");
                scanf("%d", &d.s[j].room5);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 6th Slot: ");
                gets(d.s[j].sixth);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 6th Slot: ");
                scanf("%d", &d.s[j].room6);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 7th Slot: ");
                gets(d.s[j].seventh);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 7th Slot: ");
                scanf("%d", &d.s[j].room7);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Course Code For 8th Slot: ");
                gets(d.s[j].eighth);
                fflush(stdin);
                printf("\n\t\t\t\tEnter The Room-No For 8th Slot: ");
                scanf("%d", &d.s[j].room8);
                fflush(stdin);

                fc = fopen("class.txt", "w+");
                fwrite(&d, sizeof(d), 1, fc);
                fclose(fc);

                printf("\n\t\t\t________________________________________________________________________");
                printf("\n\t\t\tYour Record Edited Successfully...THANKS\n\t\t\tPress Any Key To Return To Main Menu");
                getch();
                break;
            }
        }
        if (j == 7)
        {
            printf("\n\t\t\t________________________________________________________________________");
            printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
            getch();
        }
    }
    else
    {
        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
        getch();
    }

} // edit class schedule closing

void deleteclassschedule()
{

    int i, j, Batch;
    char disp[20], sec[20], Day[20];

    FILE *fc;

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Batch You Want To Delete Record:  (i.e: 21,20..): ");
    scanf("%d", &Batch);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Discipline You Want To Delete Record (i.e: BCS..): ");
    scanf("%s", &disp);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\t\t\t\tFor Which Section You Want To Delete Record (i.e: A,B..):  ");
    scanf("%s", &sec);
    fflush(stdin);

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t_________________________________________________");
    printf("\n\n\t\t\t\tFor Which Day You Want To Delete Record (i.e: Monday..): ");
    scanf("%s", &Day);
    fflush(stdin);

    if ((strcmp(disp, d.disci) == 0) && (strcmp(sec, d.section) == 0) && (d.batch == Batch))
    {

        for (j = 0; j < 7; j++)
        {

            if (strcmp(Day, d.s[j].day) == 0)
            {

                strcpy(d.s[j].first, " ");
                strcpy(d.s[j].second, " ");
                strcpy(d.s[j].third, " ");
                strcpy(d.s[j].fourth, " ");
                strcpy(d.s[j].fifth, " ");
                strcpy(d.s[j].sixth, " ");
                strcpy(d.s[j].seventh, " ");
                strcpy(d.s[j].eighth, " ");
                d.s[j].room1 = 00;
                d.s[j].room2 = 00;
                d.s[j].room3 = 00;
                d.s[j].room4 = 00;
                d.s[j].room5 = 00;
                d.s[j].room6 = 00;
                d.s[j].room7 = 00;
                d.s[j].room8 = 00;

                fc = fopen("class.txt", "w+");
                fwrite(&d, sizeof(d), 1, fc);
                fclose(fc);

                printf("\n\t\t\t________________________________________________________________________");
                printf("\n\t\t\tYour Record Deleted Successfully...THANKS\n\t\t\tPress Any Key To Return To Main Menu");
                getch();
                break;
            }
        }
        if (j == 7)
        {
            printf("\n\t\t\t________________________________________________________________________");
            printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
            getch();
        }
    }

    else
    {
        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
        getch();
    }

} // function closing...

// BUSS PART

void addbus()
{
    int i = 0;

    FILE *fb;

    printf("\n\n\n\n");
    printf("\n\t\t\t________________________________________________________________________");
    printf("\n\t\t\tFor How Many Days You Want To Add Record (MINIMUM: 6): ");
    scanf("%d", &no);
    system("cls");

    for (i = 0; i < no; i++)
    {

        system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tEnter The Day (i.e: Monday...): ");
        scanf("%s", &b[i].day);
        fflush(stdin);

        printf("\n\t\t\tEnter The Point Number (i.e: 1,2,..): ");
        scanf("%d", &b[i].point_no);

        printf("\n\t\t\tEnter The Arrival time (In Hour): ");
        scanf("%d", &b[i].atime.hr);

        printf("\n\t\t\tEnter The Arrival time (In Mins): ");
        scanf("%d", &b[i].atime.mins);

        printf("\n\t\t\tEnter The Departure time (In Hour): ");
        scanf("%d", &b[i].detime.hr);

        printf("\n\t\t\tEnter The Departure time (In Mins): ");
        scanf("%d", &b[i].detime.mins);

        fb = fopen("bus.txt", "ab+");
        fwrite(&b[i], sizeof(b), 1, fb);
        fclose(fb);
    }

    if (i == no)
    {

        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tYour Record Added Successfully...THANKS\n\t\t\tPress Any Key To Return To Main Menu");
        getch();
    }
}

void editbus()
{
    int i;
    char Day[20];
    FILE *fb;

    printf("\n\n\n\n");
    printf("\n\t\t\t________________________________________________________________________\n");
    printf("\n\t\t\tFor Which Day You Want To Edit (i.e: Monday..): ");
    scanf("%s", &Day);
    fflush(stdin);

    for (i = 0; i < 6; i++)
    {
        if (strcmp(b[i].day, Day) == 0)
        {

            system("cls");
            printf("\n\t\t\t________________________________________________________________________\n");

            printf("\n\t\t\tEnter Your New Point Number(1,2,3..): ");
            scanf("%d", &b[i].point_no);

            printf("\n\t\t\tEnter The Arrival time (In Hour): ");
            scanf("%d", &b[i].atime.hr);

            printf("\n\t\t\tEnter The Arrival time (In Mins): ");
            scanf("%d", &b[i].atime.mins);

            printf("\n\t\t\tEnter The Departure time (In Hour): ");
            scanf("%d", &b[i].detime.hr);

            printf("\n\t\t\tEnter The Departure time (In Mins): ");
            scanf("%d", &b[i].detime.mins);

            printf("\n\t\t\t________________________________________________________________________");
            printf("\n\t\t\tYour Record Edited Successfully...THANKS\n\t\t\tPress Any Key To Return To Main Menu");

            fb = fopen("bus.txt", "w+");
            fwrite(&b, sizeof(b), 1, fb);
            fclose(fb);

            getch();
            break;
        }
    }

    if (i == 6)
    {
        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
        getch();
    }
}

void deletebus()
{
    /////////////////////////////////////////////////////////////////////////////// IS

    int i;
    char Day[20];
    FILE *fb;

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t________________________________________________________________________\n");
    printf("\n\t\t\tFor Which Day You Want To Delete Record (i.e: Monday..): ");
    scanf("%s", &Day);
    fflush(stdin);

    for (i = 0; i < 6; i++)
    {
        if (strcmp(b[i].day, Day) == 0)
        {

            //				strcpy(b[i].day  , " ");
            //    			b[i].point_no = 0;
            //				b[i].detime.hr = 0;
            //				b[i].detime.mins = 0;
            //				b[i].atime.hr = 0;
            //				b[i].atime.mins = 0;
            //				printf("\n\t\t\t________________________________________________________________________");
            //   				printf("\n\t\t\tYour Record Deleted Successfully...THANKS\n\t\t\tPress Any Key To Return To Main Menu");
            //
            fb = fopen("bus.txt", "w+");
            fwrite(&b, sizeof(b), 1, fb);
            fclose(fb);

            getch();
            break;
        }
    }

    if (i == 6)
    {
        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");
        getch();
    }
}

void viewbus()
{
    int i;
    char Day[20];
    FILE *fb;

    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t________________________________________________________________________\n");
    printf("\n\t\t\tEnter the day  you want to view timetable for (i.e: Monday..): ");
    scanf("%s", &Day);
    fflush(stdin);

    fb = fopen("bus.txt", "r");
    while (fread(&b, sizeof(b), 1, fb))
    {

        for (i = 0; i < 6; i++)
        {
            if (strcmp(b[i].day, Day) == 0)
            {

                system("cls");
                printf("\n\n\n\n");
                printf("\n\t\t\t_______________________________________________________________________________\n");

                printf("\n\t\t\tDay\t\tPoint Number\t\tArrival Time\t\tDeparture time\n");
                printf("\n\t\t\t_______________________________________________________________________________\n");
                printf("\n");
                printf("\n\t\t\t%s\t\t     %d\t\t\t     %d:%.2d\t\t\t%d:%.2d", b[i].day, b[i].point_no, b[i].atime.hr, b[i].atime.mins, b[i].detime.hr, b[i].detime.mins);

                printf("\n\t\t\t________________________________________________________________________________\n");

                getch();
                break;
            }
        }
    }
    fclose(fb);
    if (i == 6)
    {
        printf("\n\t\t\t________________________________________________________________________");
        printf("\n\t\t\tRecord Not Found ...TRY AGAIN\n\t\t\tPress Any Key To Return To Main Menu");

        getch();
    }
}
