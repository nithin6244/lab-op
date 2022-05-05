#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
int sx,sy;
cout<<"Enter the transalation coordinates";
cin>>sx>>sy;
line(200,150,300,200);
line(200,150,100,200);
line(100,200,300,200);
line(200+sx,150+sy,300+sx,+200+sy);
line(200+sx,150+sy,100+sx,200+sy);
line(100+sx,200+sy,300+sx,200+sy);
getch();
closegraph();
}