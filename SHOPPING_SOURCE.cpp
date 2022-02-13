#include<bits/stdc++.h>
#include<fstream>
#include<conio.h>
#include"../../../conio2.h"
#include"../../../men_section.h"
#include"../../../women_section.h"
#include"../../../windowms.h"
#include"../../../locTime.h"
#include"../../../kids_section.h"
#define el cout<<endl;
using namespace std;

void window1();
void welcome()
{
    time();
    int a = 70;
    int b = 18;
    gotoxy(a,b);
    string element[]={"||WELCOME TO THE SHOP||", "||CREATED BY||", "||ARIJIT CHAKRABORTY||", "||SUBHRADIP KUNDU||", "||KAJAL ROY||", "||PRABIR PAL||"};
    for(int i = 0;i<6;i++)
    {
        textcolor(GREEN);
        gotoxy(a+3,b+2*i);
        cout<<element[i];
    }

   {
        textcolor(WHITE);
        gotoxy(a+3,b+2*6);
        cout<<" PRESS ENTER";
    }

    int choice = getch();
    switch(choice)
    {
    case 13:
        window1();
        break;
    }
}

void window1()
{
    int a = 70;
    int b = 18;
	system("cls");
	time();
	gotoxy(a,b);
    textcolor(GREEN);
    string element[]={"FOR WHOM YOU WANT TO BUY?", "1. MEN'S", "2. WOMEN'S", "3. KID'S", "4. EXIT"};
    for(int i = 0;i<5;i++)
    {
        textcolor(GREEN);
        gotoxy(a+1,b+2*i);
        cout<<element[i];
    }
    gotoxy(a+1,b+2*5);
    cout<<"ENTER YOUR CHOICE(1 TO 4) : ";
    textbackground(WHITE);
    cout<<"    ";
    textbackground(BLACK);
    int choice;
    gotoxy(a+29,b+10);
    cin>>choice;
    textbackground(BLACK);
    switch(choice)
    {
    case 1:
        menmain();
        break;
    case 2:
        womenmain();
        break;
    case 3:
        kidsmain();
        break;
    case 4:
        exit(1);
        break;
    default:
        gotoxy(a,b+12);
        cout<<"WRONG INPUT!";
}
}
int main()
{
    MoveWindowSize(-8,-5,2000,2000);
    welcome();
}

