#include <stdio.h>
#include <string.h>
int main()
{
	printf("please input a sentence:\n");
	char s[1000];
	gets(s);
	printf("please input a word:\n");
	char w[10];
	gets(w);
	strlwr(s);
	strlwr(w);

	int wlen=strlen(w);
	int slen=strlen(s);
	int cnt=0;

	for(int i=0;i<=slen-wlen;i++)
	{
		char tempw[10];
		tempw[wlen]='\0';
		for(int j=0;j<wlen;j++)
		
			tempw[j]=s[i+j];
		if(strcmp(tempw,w)==0)
			cnt++;	
	}
	printf("%d\n",cnt);
	return 0;
}