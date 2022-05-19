 #include<iostream.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 void main(){
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"..\\BGI");
 float x1,y1,x2,y2,x3,y3,x4,y4;
 float sx,sy;
 x1 = 100,y1=100,x2=150,y2=100,x3 = 150,y3=150,x4=100,y4=150;
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x4,y4);
 line(x4,y4,x1,y1);
 cout<<"Y-direction Shear";
 cin>>sy;
 y1 = y1+sy*x1;
 y2 = y2+sy*x2;
 y3 = y3+sy*x3;
 y4 = y4+sy*x4;
 setcolor(RED);
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x4,y4);
 line(x4,y4,x1,y1);
 getch();
 closegraph();
 }