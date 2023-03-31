#include<stdio.h>
struct book
{
	char title[20];
	char author[20];
	float price;
}p;
main()
{
scanf("%s,%s,%f",p.title,&p.author,&p.price);
printf("%s%s%f",p.title,p.author,p.price);
}
