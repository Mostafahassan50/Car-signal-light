

#ifndef MCAL_H_
#define MCAL_H_

#define A 0x30


struct portname
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

void setdir(struct portconf conf);


void writepin(struct portconf conf);


char readpin(struct portconf conf);



#endif /* MCAL_H_ */