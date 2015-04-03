#include <iostream.h>
#include "headda.h"

int main()
{
double secs;
cout<<"Enter seconds to wait"<<endl;
cin>>secs;
wait(secs);
cout<<"You just waited for "<<secs<<" seconds"<<endl<<endl;


int a;
cout<<"Random number generation, give me the high number for the range"<<endl;
cin>>a;
char keypress;
do
{
	int numb=random_number(a);
	cout<<"You random number is "<<numb<<endl<<endl;
	cout<<"New number?";
	cin>>keypress;
} while (keypress!='q');


do
{
	int die=roll_dice();
	cout<<die<<" Roll die? ";
	cin>>keypress;
} while (keypress!='q');

return 0;
}
