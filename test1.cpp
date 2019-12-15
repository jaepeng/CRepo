#include <stdio.h>
int main()
{
	
	 int a[3][4]={1,2,3,4,5,6,7,8};
	int (*p)[4]=a;//数组的指针，指向大小为4的一维数组 
	
	printf("%d\n",*(p)[2]);
	
return 1;
}

