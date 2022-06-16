#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void VH(int x1,int y1,int x2,int y2){
int xmin = 100,xmax = 400,ymin = (getmaxy()/2)-100,ymax=(getmaxy()/2)+100;
int tx1 = x1,Y,ty1 = y1,X,ty2 = y2,tx2 = x2;
float m = (float)(y2-y1)/(x2-x1);
if((x1 > xmax)|| (x1<xmin)){
x1 = xmin;
if(x1 > xmax)
x1 = xmax;

Y = ty1 + m*(x1-tx1);
y1 = Y;
}
else if((y1>ymax)||(y1<ymin)){
if(y1>ymax)
y1 = ymax;
if(y1<ymin)
y1 = ymin;

X = tx1+((y1-ty1)/m);
x1 = X;
}

if((x2>xmax)||(x2<xmin)){
if(x2<xmin)
x2 = xmin;
if(x2>xmax)
x2 = xmax;

Y = ty2 + m*(x2-tx2);
y2 = Y;

}
else if((y2>ymax)||(y2<ymin))
{
if(y2>ymax)
y2 = ymax;
if(y2<ymin)
y2 = ymin;

X = tx2 = ((y2-ty2)/m);
x2 = X;
}
line(x1,y1,x2,y2);
}
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
int xmin = 100,xmax = 400,ymin = (getmaxy()/2)-100,ymax = (getmaxy()/2)+100;
int x1 = 90,y1 = (getmaxy()/2),x2 = 350+70,y2= (getmaxy()/2),x3 = getmaxx()/2;
int y3 = ymin-50;
setcolor(RED);
rectangle(100,(getmaxy()/2)-100,400,(getmaxy()/2)+100);

setcolor(WHITE);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
cleardevice();
setcolor(RED);
rectangle(100,(getmaxy()/2)-100,400,(getmaxy()/2)+100);
setcolor(WHITE);
VH(x1,y1,x2,y2);
VH(x2,y2,x3,y3);
VH(x3,y3,x1,y1);
getch();
closegraph();

}