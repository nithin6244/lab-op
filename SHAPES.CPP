#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
float l,t,r,b,s,m1,m2,m3,e;
int v;
cout<<"\n 1.RECTANGLE \n2.ARC \n3.ELLIPSE,4.CIRCLE";
cin>>v;
switch(v)
{
case 1:
setcolor(RED);
rectangle(125,115,215,165);
break;
case 2:
arc(200,200,0,90,100);
setcolor(WHITE);
break;
case 3:
ellipse(120,350,0,360,30,20);
setcolor(GREEN);
break;
case 4:
circle(120,270,30);
setcolor(GREEN);
break;
default :
cout<<"\n WRONG INPUT";
}

getch();
closegraph();
}