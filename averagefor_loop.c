#include<stdio.h>
int value,valsread,total,numberofvals;
float average;
int main(void)
{
printf("pick a set of numbers (0 to cancel the program)");
valsread=scanf("%d",&value);
for(valsread;valsread>0;numberofvals++)
{
	printf("the value %d has been inputed\n",value);
	total=value+total;
	valsread=value;
	if(valsread!=0)
	{
	printf("put in another value:(0 to cancel the program)");
	valsread=scanf("%d",&value);
	valsread=value;
	}
}
average=total / (float)numberofvals;
printf("The avearge of %d set of numbers is:%f\n",numberofvals,average);
return (0);
}
