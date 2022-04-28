#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
float x1,y1,x2,y2,dx,dy,xinc,yinc,i,steps;
cout<<"\n Enter coordinates of line";
cin>>x1>>y1;
cout<<"\n Ebter the end point";
cin>>x2>>y2;
dx = x2-x1;
dy = y2-y1;
if(dx>dy)
{
steps = dy;
}
else{
steps = dy;
}
xinc = dx/steps;
yinc = dy/steps;
for(i = 0;i<=steps;i++){
putpixel(x1,y1,2);
x1 = x1+xinc;
y1 = y1+yinc;
}
getch();
closegraph();
}