#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,v;
initgraph(&gd,&gm,"..\\BGI");
cout<<"\n Enter the coordinates of triangle";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
line(320,0,320,430);
line(0,240,640,240);
cout<<"\n Enter the axis of reflection";
cin>>v;
switch(v)
{
case 1:
cout<<"X-axis: ";
x1=x1;
x2=x2;
x3=x3;
y1=y1+240;
y2=y2+240;
y3=y3+240;
break;

case 2:
cout<<"Y-axis ";
y1=y1;
y2=y2;
y3=y3;
x1+=320;
x2+=320;
x3+=320;
break;
case 3:
cout<<"X-Y axis";
y1=-y1;
y2=-y2;
y3=-y3;
float t = ((double)90*3.14)/(double)180;
float a = x1*cos(t)-y1*sin(t);
float b = x2*cos(t)-y2*sin(t);
float c = x3*cos(t)-y3*sin(t);
float d = x1*sin(t)+y1*cos(t);
float e = x2*sin(t)+y2*cos(t);
float f = x3*sin(t)+y3*cos(t);
x1=a;
x2=b;
x3=c;
y1=d;
y2=e;
y3=f;
break;
}
cout<<"\n Triangle after reflection";
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
closegraph();
}