#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main() {
int gd = DETECT, gm;
initgraph(&gd,&gm,"..\\BGI");
int x1,x2,x3,y1,y2,y3,xt,sx;
cout<<"Enter the co-ordinates " ;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
cout<<"Triangle ";
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
cout<<"Enter the scaling factor";
cin>>sx;
cout<<"Scaled Triangle";
x1 = x1*sx;
x2 = x2*sx;
x3 = x3*sx;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
cout<<"Enter the transaltion factor ";
cin>>xt;
line(x1+xt,y1,x2+xt,y2);
line(x2+xt,y2,x3+xt,y3);
line(x3+xt,y3,x1+xt,y1);
getch();
closegraph();
}