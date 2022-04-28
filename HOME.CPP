#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void sun(){
setcolor(YELLOW);
circle(50,80,20);
}
void home()
{
setcolor(WHITE);
line(200,150,300,200);
line(200,150,100,200);
rectangle(100,200,300,300);
rectangle(180,230,220,300);
}

void car()
{
rectangle(280,350,300,300);
rectangle(250,350,330,380);
circle(270,380,10);
circle(320,380,10);
}

void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
sun();
home();
car();
getch();
closegraph();
}