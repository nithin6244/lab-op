#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main() {
int gd = DETECT, gm;
initgraph(&gd,&gm,"..\\BGI");
int x1,x2,x3,y1,y2,y3,xt1,xt2;
cout<<"Entet the Co-ordinates";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
cout<<"Enter the translation ";
cin>>xt1;
x1 = x1 + xt1;
x2 = x2 + xt1;
x3 = x3 + xt1;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
cout<<"Enter the second transalation factor ";
cin>>xt2;
y1 = y1 + xt2;
y2 = y2 + xt2;
y3 = y3 + xt2;
setcolor(RED);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
closegraph();
}