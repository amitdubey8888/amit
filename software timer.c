#include<stdio.h>
#define DELAY 128000
struct mytime
{
	int hour;
	int minute;
	int second;
};
void display(struct mytime *t);
void update(struct mytime *t);
void delay();
int main()
{
	struct mytime systime;
	systime.hour=0;
	systime.minute=0;
	systime.second=0;
	for(;;)
	{
		update(&systime);
		display(&systime);
	}
	return 0;
}
void update(struct mytime *t)
{
	t->second++;
	if(t->second==60)
	{
		t->second=0;
		t->minute++;
	}
	if(t->minute==60)
	{
		t->minute=0;
		t->hour++;
	}
	if(t->hour==24)
	{
		t->hour=0;
		delay();
	}
}
void display(struct mytime *t)
{
	printf("%02d:",t->hour);
	printf("%02d:",t->minute);
	printf("%02d:",t->second);
}
void delay()
{
	long int t;
	for(t=1;t<DELAY;++t);
}
