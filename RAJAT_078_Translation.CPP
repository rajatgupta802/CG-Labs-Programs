#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void translatePoint(int P[], int T[])
{
	int gd=DETECT,gm,errorcode;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	cout<<"Original coordinates:"<<P[0]<<","<<P[1];
	putpixel(P[0],P[1],WHITE);

	P[0]=P[0]+T[0];
	P[1]=P[1]+T[1];
	cout<<"\n Translated coordinates:"<<P[0]<<","<<P[1];
	putpixel(P[0],P[1],WHITE);

	getch();
	closegraph();

}
void main()
{
int P[2]={5,8};
int T[]={2,1};
translatePoint(P,T);
//return 0;
//getch();
}
