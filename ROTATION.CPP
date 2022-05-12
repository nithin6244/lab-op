#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<math.h>
void rotate(int *x1, int *y1,int *x2,int *y2,int *x3,int *y3,int *x4, int *y4,int *a)
{
 float c=cos(*a*3.14/180);
 float  s=sin(*a*3.14/180);
 *x1 = floor(*x1*c - *y1*s);
 *y1 = floor(*x1*s + *y1*c);
 *x2 = floor(*x2*c - *y2*s);
 *y2 = floor(*x2*s + *y2*c);
 *x3 = floor(*x3*c - *y3*s);
 *y3 = floor(*x3*s + *y3*c);
 *x4 = floor(*x4*c - *y4*s);
 *y4 = floor(*x4*s + *y4*c);
}

void main()
{
 int gd =DETECT, gm;
 initgraph(&gd,&gm,"..\\BGI");
 int x1=300, y1=150, x2=400, y2=150,x3=400,y3=250,y4=250,x4=300,a;
 cout<<"Enter the angles";
 cin>>a;
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x4,y4);
 line(x4,y4,x1,y1);
 rotate(&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&a);
 setcolor(RED);
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x4,y4);
 line(x4,y4,x1,y1);
 getch();
 closegraph();
}