#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
int sx,sy;
cout<<"Enter the scaling factor : ";
cin>>sx>>sy;
line(10,50,100,50);
line(10*sx,50*sy,100*sx,50*sy);
getch();
closegraph();

}