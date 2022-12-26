
/* state=0 ideal
   state=1 right
   state=2 left
   state=3 wait
   state=4 ideal to wait
   state=5 right to wait
   state=6 left to wait
   state=7 wait to wait
   */

#include "ECUAL.h"

int main(void)
{
	initled();
	initbut();
	char pstate=0,nstate=0;  //readbutton1 for right,readbutton3 for left,readbutton2 for wait
    while(1)
    {
		if(pstate==0)
		{
			while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
			{  
				ledonpin1();   //right
				ledofpin2();  //left
				nstate=1;      
			}
			while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
			{
				ledofpin1();
				ledonpin2();
				nstate=2;
			}
			while(readbutton1()==0 && readbutton2()==1 && readbutton3()==0)
			{
				ledonpin1();
				ledonpin2();
				nstate=4;
			}
			while (0)
			{
				ledofpin1();
				ledofpin2();
				nstate=0;
			}
			pstate=nstate;
		}
     	if (pstate==1)
		{
			while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
			{
				ledonpin1();
				ledofpin2();
				nstate=1;
			}
			while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
			{
				ledofpin1();
				ledofpin2();
				nstate=0;
			}
			while(readbutton1()==0 && readbutton2()==1 && readbutton3()==0)
			{
				ledonpin1();
				ledonpin2();
				nstate=5;
			}
			while(0)
			{
				ledonpin1();
				ledofpin2();
				nstate=1;
			}
		pstate=nstate;
		}
    //pstate=nstate;
	if(pstate==2)
	{
		
		while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
		{
			ledonpin2();
			ledofpin1();
			nstate=2;
		}
		while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
		{
			ledofpin1();
			ledofpin2();
			nstate=0;
		}
		while(readbutton1()==0 && readbutton2()==1 && readbutton3()==0)
		{
			ledonpin1();
			ledonpin2();
			nstate=6;
		}
		while(0)
		{
			ledofpin1();
			ledonpin2();
			nstate=2;
		}
		pstate=nstate;
	}
	if(pstate==3)
	{
		while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
		{
			ledonpin1();
			ledonpin2();
			nstate=3;
		}
		while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
		{
			ledonpin1();
			ledonpin2();
			nstate=3;
		}
		while(0)
		{
			ledonpin1();
			ledonpin2();
			nstate=3;
		}
		pstate=nstate;
	}
	if(pstate==4)
	{
		while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
		{
			ledonpin1();
			ledonpin2();
			nstate=4;
		}
		while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
		{
			ledonpin1();
			ledonpin2();
			nstate=4;
		}
		 while(readbutton1()==0 && readbutton2()==1 && readbutton3()==0)
		{
			ledofpin1();
			ledofpin2();
			nstate=0;
		}
		while(0)
		{
			ledonpin1();
			ledonpin2();
			nstate=4;
		}
		pstate=nstate;
	}
	if(pstate==5)
	{
		while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
		{
			ledonpin1();
			ledonpin2();
			nstate=5;
		}
		while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
		{
			ledonpin1();
			ledonpin2();
			nstate=5;
		}
		while(readbutton1()==0 && readbutton2()==1 && readbutton3()==0)
		{
			ledonpin1();
			ledofpin2();
			nstate=1;
		}
		while(0)
		{
			ledonpin1();
			ledonpin2();
			nstate=5;
		}
		pstate=nstate;
	}
	if(pstate==6)
	{
		while(readbutton1()==1 && readbutton2()==0 && readbutton3()==0)
		{
			ledonpin1();
			ledonpin2();
			nstate=6;
		}
		while(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
		{
			ledonpin1();
			ledonpin2();
			nstate=6;
		}
	    while(readbutton1()==0 && readbutton2()==1 && readbutton3()==0)
		{
			ledofpin1();
			ledonpin2();
			nstate=2;
		}
		while(0)
		{
			ledonpin1();
			ledonpin2();
			nstate=6;
		}
		pstate=nstate;
	}
	}
}













/*}
if(state==1)
{
if(readbutton1()==0 && readbutton2()==0 && readbutton3()==1)
{
ledofpin1();
ledofpin2();
state=0;
}
} 
*/ 
