#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main(){
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	line(0,400,639,400);
	line(50,370,90,370);
	arc(110,370,0,180,20);
	line(260,370,300,370);
	line(300,370,300,350);
	line(300,350,240,330);
	line(240,330,200,300);
	line(200,300,110,300);
	line(110,300,80,330);
	line(80,330,50,340);
	line(50,340,50,370);

	//car window
	line(165,305,165,330);
	line(165,230,330,330);
	line(230,330,195,305);
	line(195,305,165,305);
	line(160,305,160,330);
	line(160,330,100,330);
	line(95,330,120,305);
	line(120,305,160,305);

	//wheels
	circle(110,370,17);
	circle(240,370,17);

	//road
	line(0,390,639,390);

}
