#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
setcolor(1);
rectangle(10,20,30,30);
setcolor(2);
circle(20,50,10);
setcolor(3);
ellipse(40,100,0,360,30,20);
setcolor(4);
arc(10,50,0,120,18);
setcolor(5);
bar(12,160,20,300);
getch();
closegraph();
}