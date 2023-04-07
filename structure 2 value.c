#include<stdio.h>
struct employee
{
	char name[10];
	int year,id;
	float sal;
};
int main()
{
	
	int i=0;
	struct employee x[10];
	for(i=0;i<2;i++)
	{
	scanf("%s %d %d %f",&x[i].name,&x[i].year,&x[i].id,&x[i].sal);
	

	}
	for(i=0;i<2;i++)
	{
	
		printf("%s %d %d %f",x[i].name,x[i].year,x[i].id,x[i].sal);
	

	}

}
