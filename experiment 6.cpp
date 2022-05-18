#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct country 
{
	char name[100];
	int goldNum;
	int silverNum;
	int bronzeNum;
	int totalNum;	
};

typedef struct country country;

void printcountry(country c)
{
	printf("%s\t%d\t%d\t%d\t%d\n",c.name,c.goldNum,c.silverNum,c.bronzeNum,c.totalNum);
}
void bubblesort(country a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j].goldNum<a[j+1].goldNum)
			{
				country temp=a[i];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	country c[8];
	FILE*fp=fopen("D:/a/modal.txt","r");
	if(fp==NULL)
	{
		printf("error\n");
		exit(0);
	}
	for(int i=0;i<8;i++)
	{
		fscanf(fp,"%s  %d  %d  %d  %d",c[i].name,&c[i].goldNum,&c[i].silverNum,&c[i].bronzeNum,&c[i].totalNum);
	}
	fclose(fp);
	
	for(int i=0;i<8;i++)
	{
		printcountry(c[i]);
	}
	country min=c[0];
	country max=c[0];
	for(int i;i<8;i++)
	{
		if(c[i].totalNum<min.totalNum)
		{
			min=c[i];
		}
		
		if(c[i].totalNum>max.totalNum)
		{
			max=c[i];
		}
	}
	printf("\n");
	printcountry(min);
	printf("\n");
	printcountry(max);
	bubblesort(c,8);
	
	FILE*outfp=fopen("D:/a/new.txt","w");
	for(int i=0;i<8;i++)
	{
		fprintf(outfp,"%s\t%d\t%d\t%d\t%d\n",c[i].name,c[i].goldNum,c[i].silverNum,c[i].bronzeNum,c[i].totalNum);
	}
	fclose(fp);
	return 0;
}
