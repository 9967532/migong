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
	printf("ѧ�ţ�%d  ���䣺%d  ������%s\n",curp->stuId,curp->stuAge,curp->stuName);
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
	printf("��ӭʹ�ý���ѧ����Ϣ��ѯϵͳ(�񡦡���)\n\n"); 
	struct student s1,s3,s4;
	s1.stuId =2001;
	s1.stuAge=18;
	strcpy(s1.stuName,"κ��");
	
	struct student s2;
	s2.stuId=2002;
	s2.stuAge=19;
	strcpy(s2.stuName,"����") ;
	
	s3.stuId=2003;
	s3.stuAge=20;
	strcpy(s3.stuName,"����");
	
	s4.stuId=2004;
	s4.stuAge=18;
	strcpy(s4.stuName,"�Ը�");
	
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
	
	printf("����������Ҫ��ѯѧ����ѧ�ţ�"); 
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
		printf("�Բ��𣬲����ڸ�ѧ����Ϣ��\n");
	}
	printf("������ɾ��s2\n");
	s1.next=&s3; //s1->s3
	s2.next=NULL; //
	
	curp=&s1;
	printLinkedList(curp);
	
	
	return 0;	
} 
