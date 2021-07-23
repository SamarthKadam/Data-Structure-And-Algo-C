#include<stdio.h>
#include<string.h>
typedef struct student
{
	int rollno;
	char name[50];
	char add[50];
	
}stud;
int main()
{
	stud s1[3]={{33,"Samarth","Karwar"},{22,"Harry","Dublapur"},{32,"kamlesh","Dholokpur"}};//You can declare multiple structres of array like in here case
	strcpy(s1[1].name,"Rakshit");
	printf("%s",s1[1].name);
	s1[2].rollno=12;
	printf("%s",s1[0].name);
	printf(" The roll no of kamlesh is %d",s1[2].rollno);
	printf("What to assign to roll no now");
	scanf("%d",&s1[0].rollno);
	printf("%d",s1[0].rollno);
	return 0;
}
