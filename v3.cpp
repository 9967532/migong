#include<stdio.h>
#include<string.h>
int main()
{
	// v3;
	char strf[]="2+2*3+2/2-1";
	char strt[strlen(strf)];
	
	int strx=-1;
	for(int i=0;i<strlen(strf);i++)
	{
		if(strf[i]=='*')
		{
			int le = strt[strx]-'0';
			int ri = strf[i+1]-'0';
			strt[strx] = le*ri+'0';
			i++;
		}
		else if(strf[i]=='/')
		{
			int le = strt[strx]-'0';
			int ri = strf[i+1]-'0';
			strt[strx] = le/ri+'0';
		}
		else strt[++strx]=strf[i];
	}
	
	int res=strt[0]-'0';
	for(int j=1;j<strlen(strt);j++)
	{
		if(strt[j]=='+')
		res+=strt[++j]-'0';
		else if(strt[j]=='-')
		res-= strt[++j]-'0';
	}
	printf("results=%d\n",res);
	
	return 0;
} 
