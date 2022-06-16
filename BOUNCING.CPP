#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
int gd = DETECT ,gm;
initgraph(&gd,&gm,"..\\BGI");

for(int i = 0;i<=330;i++){
line(10,340,800,340);
circle(140+i,320,17);
delay(5);
cleardevice();
}
getch();
closegraph();

}