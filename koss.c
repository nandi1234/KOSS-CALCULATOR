#include<stdio.h>
#include<stdlib.h>
int main()
{
	int I_N,I_M;
	while(1)
	{
	printf("Choose any operation\n\n");
	printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.FACTORIAL\n6.a POWER b\n");
	scanf("%d",&I_N);
	if(I_N==1)
	{
		ADDITION();
		AGAIN ();
		
	}
	else if(I_N==2)
	{
		SUBTRACTION();
		AGAIN();
	}
	else if(I_N==3)
	{
		MULTIPLICATION();
		AGAIN();
	}
	else if(I_N==4)
	{
		DIVISION();
		AGAIN();
	}
	else if(I_N==5)
	{
		factorial();
		AGAIN();	
	}
	else if(I_N==6)
	{
		POWER();
		AGAIN();
	}
	else
	{
		printf("Invalid Entry");
		AGAIN();
	}
	}
		return 0;
}
ADDITION()
{   
    int num,i;
    float sum=0;
	printf("How many numbers do you want to add \n");
	scanf("%d",&num);
	float arr[num];
	printf("Enter the numbers\n");
	for(i=0;i<num;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		sum+=arr[i];
	}
	printf("The sum is %f",sum);
}
SUBTRACTION()
{
	float F_A,F_B;
	printf("Enter two numbers\n");
	scanf("%f %f",&F_A,&F_B);
	printf("The diffference of the two numbers is %f",F_A-F_B);
}
MULTIPLICATION()
{
	float product=1;
	int I_M,i;
	printf("How many numbers do you want to multiply\n");
	scanf("%d",&I_M);
	float arr[I_M];
	printf("Enter the numbers\n");
	for(i=0;i<I_M;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<I_M;i++)
	{
		product*=arr[i];
	}
	printf("The product of the given numbers are %f",product);
}
DIVISION()
{
	float F_A,F_B;
	printf("Enter two numbers\n");
	scanf("%f %f",&F_A,&F_B);
	printf("The division of the two numbers is %f",F_A/F_B);
}
factorial()
{
	int I_A,i;
    unsigned long long int fact=1;
	printf("Enter any integer upto 12\n");
	scanf("%d",&I_A);
	for(i=1;i<=I_A;i++)
	{
		fact*=i;
	}
	printf("The factorial of %d is %d ",I_A,fact);
}
POWER()
{
	double I_A,I_B,i;
	 double value=1;
	printf("Enter two integer\n");
	scanf("%lf %lf",&I_A,&I_B);
	if(I_B>=0)
	{
	for(i=1;i<=I_B;i++)
	{
		value=value*I_A;
	}
}
else
{
	I_B=-I_B;
	for(i=1;i<=I_B;i++)
	{
		value=value/I_A;
	}
}
	printf("%lf raised to the power %lf is %lf",I_A,I_B,value);
}
AGAIN()
{
	int I_M;
	printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		main();
		else if(I_M==2)
		exit(0);
		else 
		{
		printf("Invalid Entry");
	    printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		main();
	    }		
}
