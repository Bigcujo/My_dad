#include<stdio.h>
int i, numberofnums=0,total=0,valsread,value,done,valued;
float average;
int main()
{
	printf("pick a set of numbers(use 0 to exit from this program:)");
	valsread=scanf("%d",&value);

while(valsread>0)
{
	numberofnums++; //this counts the number of values
	total+=value; //this sums up the total of inputed values
	printf("READ %d\n",value); //this prints out the value entered
	valsread=value; //this equates forces valuesread to be equal to value
	if(valsread!=0){  //this checks if the value is equal to 0
	valsread=scanf("%d",&value);//this takes another data for value if it's not equal to 0
	valsread=value;			    
	}
	
}
average =(float)total/numberofnums; //this calculates the average of the inputed set of data
printf("you read %d values. average= %f.\n",numberofnums,average); //this prints the average answer in standard output
return (0);
}
