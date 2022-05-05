#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
int gd = DETECT ,gm;
initgraph(&gd,&gm,"..\\BGI");

for(int i = 0;i<=330;i++){
line(10,400,800,400);
rectangle(100+i,200,300+i,300);
rectangle(300+i,230,360+i,300);
rectangle(310+i,240,350+i,260);
line(110+i,330,310+i,110);
arc(330+i,320,0,180,20);
arc(140+i,320,0,180,20);
line(160+i,320,310+i,320);
circle(140+i,320,17);
circle(330+i,320+i,17);
delay(5);
cleardevice();
}
getch();
closegraph();

}