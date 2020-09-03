#include<stdio.h>
int main()
{
	int CollectPoints,midterm,final,score;
	scanf("%d %d %d",&CollectPoints,&midterm,&final);
	score = CollectPoints + midterm + final;
	if(score>=80)
	{
		printf("A");
	}
	else if(score<80 and score>=75)
	{
		printf("B+");
	}
	else if(score<75 and score>=70)
	{
		printf("B");
	}
	else if(score<70 and score>=65)
	{
		printf("C+");
	}
	else if(score<65 and score>=60)
	{
		printf("C");
	}
	else if(score<60 and score>=55)
	{
		printf("D+");
	}
	else if(score<55 and score>=50)
	{
		printf("D");
	}
	else if(score<=49)
	{
		printf("F");
	}
	return 0;
}
