#include<stdio.h>
struct person
{
	char name[20];
	int age;
	float height;
}p;
main()
{
	scanf("%s%d%f",p.name,&p.age,&p.height);
	printf("%s%d%f",p.name,p.age,p.height);
}
