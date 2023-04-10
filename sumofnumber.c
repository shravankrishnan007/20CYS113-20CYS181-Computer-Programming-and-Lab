//Program to find sum of numbers
#include<stdio.h>
int main(){
	int number,sum;
	printf("Enter the value of number \n");
	scanf("%d",&number);
        sum=(number*(number+1))/2;
	printf("The sum of %d numbers : %d",number,sum);
	return 0;
}
