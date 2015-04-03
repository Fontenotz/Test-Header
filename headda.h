#ifndef headda_h

#include <iomanip.h>
#include <iostream.h>
#include <time.h>
#include <stdlib.h>


void wait(double seconds)
{
	clock_t endwait;
	endwait=clock()+seconds*CLK_TCK;
	while (clock()<endwait){}
}

int random_number(int high)
{
	srand(time(0));
	int numba=0;
	numba=rand()%high;
	return numba;
}

int roll_dice()
{
	srand(time(0));
	int die=rand()%6+1;
	return die;
}

#define headda_h
#endif
