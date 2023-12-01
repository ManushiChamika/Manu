#include <stdio.h>

//int areaOfRect(int length, int breadth)
//{
//	int area;
//	area = length *breadth;
//	return area;	
//}
//int main ()
//{
//	int l=10, b=5;
//	int area = areaOfRect(l,b);
//	printf("%d\n", area);
//	
//	l=50, b=20;
//	area = areaOfRect (l,b);
//	printf("%d", area);
//}

char fun();// function prototype
int main()
{
	char c= fun();
	printf("character is: %c", c);	
}
char fun()
{
	return 'a';
}


