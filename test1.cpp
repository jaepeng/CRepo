#include <stdio.h>
int main()
{
	
	 int a[3][4]={1,2,3,4,5,6,7,8};
	int (*p)[4]=a;//�����ָ�룬ָ���СΪ4��һά���� 
	
	printf("%d\n",*(p)[2]);
	
return 1;
}

