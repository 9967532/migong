#include<stdio.h>
#include<string.h>

int main()
{
	char strexp[]="3+4";
	char strExp[]="1+2+2+1+2+5+4-1-3+4-8";
	char strcc[]="2*2/4*1/1*2*3/2";
	char strhh[]="2+2*3+2/2-1";
	// v1:
	int a=strexp[0]-'0';
	int b=strexp[2]-'0';
	int res=a+b;
	printf("res=%d\n",res);
	
	// v2:
	int re=strExp[0]-'0';
	for(int i=1;i<strlen(strExp);i++)
	{
		if(strExp[i]=='+')
		{
			int c=strExp[i+1]-'0';
			re=re+c;
			i++;
		}
		else if(strExp[i]=='-')
		{
			int d=strExp[i+1]-'0';
			re=re-d;
			i++;
		}
	}
	printf("re=%d\n",re);
	
	// v3;
	int end=strcc[0]-'0';
	for(int j=1;j<strlen(strcc);j++)
	{
		if(strcc[j]=='*')
		{
			int e=strcc[j+1]-'0';
			end=end*e;
			j++;
		}
		else if(strcc[j]=='/')
		{
			int f=strcc[j+1]-'0';
			end=end/f;
			j++;
		}
	}
	printf("end=%d\n",end); 
	
	// v4:
	int jg1,jg2,jg3,r3;
	for(int m=1;m<strlen(strhh);m++)
	{
		if(strhh[m]=='*')
		{
			jg1=strhh[m-1]-'0';
			jg2=strhh[m+1]-'0';
			jg3=jg1*jg2;
			m++;
		}
		if(strhh[m]=='/')
		{
			int r1=strhh[m-1]-'0';
			int r2=strhh[m+1]-'0';
			r3=r1/r2;
			m++;
		}
	}
	printf("2*3=%d\n2/2=%d\n",jg3,r3);
	char strsg[]="2+6+1-1";
	int sum= strsg[0]-'0';
	for(int h=1;h<strlen(strsg);h++)
	{
		if(strsg[h]=='+')
		{
			int t1=strsg[h+1]-'0';
			sum=sum+t1;
			h++;
		}
		else if(strsg[h]=='-')
		{
			int t2=strsg[h+1]-'0';
			sum=sum-t2;
			h++;
		}
	}
		printf("sum=%d\n",sum);
	

	return 0;
} 
