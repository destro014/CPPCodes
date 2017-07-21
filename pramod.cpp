#include<iostream.h>
#include<conio.h>
#include<graphic.h>
#include<math.h>
#include<dos.h>
void midpointfunction(int x1,int y1,int x2,int y2,int color);
void main(){
int x1,y1,x2,y2,color;
int gDriver=DETECT,gmode;
initgraph(&gDriver,&gmode,"C:\\TurboC3\BGI);


void midpointfunction(int x1,int y1,int x2,int y2,int color){
	int x,y,dx,dy,d,NEd,Ed,xEnd;
	dx=ads(x2-x1);
	dy=abs(y2-y1);
	s=2*dy-dx;
	Ed=2*dy;
	NEd=2*dy-2dx;
	if(x1>x2){
		x=x2;
		y=y2;
		xEnd=x1;
	}
	else{
		x=x1;
		y=y1;
	}
	putpixel(x,y,color);
	int rainbow=1;
	while(x<xEnd){
	x++;
	if (d<0){
		d=d+Ed;
	}
	else{
		y++;
		d=d+NEd;
	}
	putpixel(x,y, rainbow);
	rainbow++;
	delay(15);
