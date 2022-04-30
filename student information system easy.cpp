#include<stdio.h>
#include<string.h>

struct student
{
	int stuId;
	int stuAge;
	char stuName[100];
	
	
	struct student*next; 
};

void printstudent(struct student*curp)
{
	printf("学号：%d  年龄：%d  姓名：%s\n",curp->stuId,curp->stuAge,curp->stuName);
}

void printLinkedList(struct student*headp)
{
	while(headp!=NULL)
	{
		printstudent(headp);
		headp=headp->next;
	}
 } 
int main()
{
	printf("欢迎使用建议学生信息查询系统(●ˇˇ●)\n\n"); 
	struct student s1,s3,s4;
	s1.stuId =2001;
	s1.stuAge=18;
	strcpy(s1.stuName,"魏安");
	
	struct student s2;
	s2.stuId=2002;
	s2.stuAge=19;
	strcpy(s2.stuName,"李南") ;
	
	s3.stuId=2003;
	s3.stuAge=20;
	strcpy(s3.stuName,"张梦");
	
	s4.stuId=2004;
	s4.stuAge=18;
	strcpy(s4.stuName,"赵感");
	
	//s1->s2->s3->s4
	s1.next=&s2;
	s2.next= &s3;
	s3.next=&s4;
	s4.next=NULL;
	 
	struct student*curp=&s1;
	printLinkedList(curp);
/*	while(curp!=NULL)
	{
		printstudent(curp);
		curp=curp->next;
	}*/
	
	printf("请输入你想要查询学生的学号："); 
	int id;
	scanf("%d",&id);
	curp=&s1;
	int flag=0;
	while(curp!=NULL)
	{
		if(curp->stuId==id)
		{
			printstudent(curp);
			flag=1;
			break;
		}
		else curp=curp->next;
	}
	if(flag==0)
	{
		printf("对不起，不存在该学生信息。\n");
	}
	printf("接下来删除s2\n");
	s1.next=&s3; //s1->s3
	s2.next=NULL; //
	
	curp=&s1;
	printLinkedList(curp);
	
	
	return 0;	
} 
