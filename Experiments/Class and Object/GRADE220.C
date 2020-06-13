
//exp2
//grade in c
#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[5],sum=0,i;
	float per;
	clrscr();
	printf("enter marks of 5 subjects\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);

	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	per=sum/5;
	printf("percentage is %f\n",per);
	if(per>=90)
		printf("grade A\n");
	if(per>=70&&per<90)
		printf("grade B\n");
	if(per>=50&&per<70)
		printf("grade C\n");
	if(per>40&&per<50)
		printf("grade D\n");
	if(per<40)
		printf("fail\n");
getch();
}

/*
enter marks of 5 subjects
67                                                                              
89                                                                              
68                                                                              
90                                                                              
89
percentage is 80.000000                                                         
grade B                                                                         
*/
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
