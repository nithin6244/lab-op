#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm,i;
float x1,y1,x2,y2,x,y,d,dx,dy;
initgraph(&gd,&gm,"..\\BGI");
cout<<"Enter the Co-ordinates of line";
cin>>x1>>y1>>x2>>y2;
dx = x2-x1;
dy = y2-y1;
x = x1;
y = y1;
d = 2*dy-dx;
while(x<x2)
{
putpixel(x,y,4);
if(d>0)
{
x++;
y++;
d = d+2*(dy-dx);
}
else
{
x++;
d= d+2*dy;
}
}
getch();
closegraph();
}