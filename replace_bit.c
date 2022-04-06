#include <stdio.h>

int main()
{
	int first,second,pos;

	printf("enter first & second no:\n");
	scanf("%d %d",&first,&second);

	printf("enter specified position(0-indexed)\n");
	scanf("%d",&pos);

	//collect corresponding bit of second no
	int temp=(second>>pos)&1;

	//if bit at specified position is 1
	if(temp==1){
		temp=temp<<pos;
		first|=temp;
	}
	else{ //if bit at specified position is 0
		int flag=255;//FF, all bit set to 1(considering 8 bit)
		temp=1<<pos;
		//this set only the specified position bit 0 others 1
		flag=flag^temp;
		first&=flag;
	}

	printf("converted no %d\n",first);

	return 0;
}
