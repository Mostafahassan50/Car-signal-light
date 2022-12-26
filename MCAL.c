/*struct portname
{
char pinx;
char ddrx;
char portx;
};
struct portconf
{
struct portname * portx;
char pinno;
char dir ;
char val ;
};
*/
//**************************************************************
#include "MCAL.h"
void setdir(struct portconf conf)    
{
	if (conf.dir==0)
	{
		conf.portx->ddrx &= ~(1<<conf.pinno);              
	}
	else
	{
		conf.portx->ddrx |= (1<<conf.pinno);	
	}
}


void writepin(struct portconf conf)
{
	if (conf.val==0)
	{
		conf.portx->portx &= ~(1<<conf.pinno);
		
	}
	else
	
	{
		conf.portx->portx |= (1<<conf.pinno);
	}
}

char readpin(struct portconf conf)

{
	if(conf.portx->pinx & (1<<conf.pinno))
	
	return 1;
	
	else
	
	return 0;
}

void writeport(struct portconf conf)
{
	conf.portx->pinx=conf.val;
}

char readport(struct portconf conf)

{
	return  conf.portx->pinx;

}