#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
int gd = DETECT,gm;
float xc,yc,x,y,t,s,r;
initgraph(&gd,&gm,"..\\BGI");
cout<<"Enter the coordinates of circle";
cin>>xc>>yc;
cout<<"Enter the radius";
cin>>r;
for(t = 0;t<=(2*3.14);t+=0.01){
x = xc+r*cos(t);
y = yc +r*sin(t);
putpixel(x,y,3);
}
getch();
closegraph();
}