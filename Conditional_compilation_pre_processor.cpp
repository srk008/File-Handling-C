#define a100
#define b200
#include<stdio.h>
int main()
{
	#if (a>b)
	printf("A is greater");
	# else
	printf("B is greater ");
	#endif

}
