
#include "MCAL.h"
struct portconf c1={A,6,1,1},c2={A,6,1,0},c3={A,7,1,1},c4={A,7,1,0},c5={A,0,0},c6={A,1,0},c7={A,2,0};   //portx,pinno,dir,val 
char state1,state2,state3;
void initled()
{
	setdir(c1);
	setdir(c2);
	setdir(c3);
	setdir(c4);
}
void initbut()
{
	setdir(c5);
	setdir(c6);
	setdir(c7);
}

void ledonpin1()
{
	writepin(c1);
}

void ledofpin1()
{
	writepin(c2);
}

void ledonpin2()
{
	writepin(c3);
}
void ledofpin2()
{
	writepin(c4);
}
char readbutton1()  //for right direction 
{
	state1=readpin(c5);
	return state1;
}
char readbutton2()  //for left direction
{
	state2=readpin(c6);
	return state2;
}
char readbutton3()   //for wait
{
	state3=readpin(c7);
	return state3;
}
	
