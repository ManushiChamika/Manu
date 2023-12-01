#include <stdio.h>
int main(void)
{
	int i,item;
	char name[10] = {0};
	
	for(i = 0;i < 5;i++)
	{
		printf("Enter the item code : ");
		scanf("%d",&item);
		printf("Enter the item name : ");
		scanf("%s",name[i]);
	}
	for(i = 0;i < 5;i++)
	{
		printf("\n%d\t%s\n",item , name[i]);
	}
	
	return 0;
}