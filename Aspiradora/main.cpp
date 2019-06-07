#include <iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>

using namespace std;

void gotoxy(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hcon,dwPos);
}

class sensor{
    int x1,y1;

public:
    sensor(int,int);
    void leer();
};

sensor::sensor(int _x1,int _y1)
{
    x1 = _x1;
    y1 = _y1;
}

void sensor::leer()
{

}



char opcion;
int x=60,y=12;

int main()
{
    while(true)
    {
        gotoxy(x,y);printf("||");
        gotoxy(x,y);printf(" ");
        Sleep(100);
        y--;
        system("cls");
    }
//    while(opcion!='z')
//    {
//        system("cls");
//        gotoxy(x,y);
//        cout<<"*";
//        opcion=getch();
//        switch(opcion)
//        {
//            case 'a': x--; break;
//            case 'd': x++; break;
//            case 'w': y--; break;
//            case 's': y++; break;
//        }
//    }

    return 0;
}
