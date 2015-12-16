/*
this is eg 107 actually 
and it do something like change the 对应的数组元素对掉，意思是1调到10 那里
*/
#include <stdio.h>
void inv (int x[],int n)
{
	int temp,i,j,m=(n-1)/2;
	for (i=0;i<=m;i++)
		{
		j=n-i-1;
		temp=x[i];x[i]=x[j];x[j]=temp;
		}
}
void main()
{
	int i,a[10];
	printf("enter 10 numbers\n");
	for(i=0;i<10;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("the origin array is as followed\n");	
	for(i=0;i<10;i++)
		{
		printf("%d-",*(a+i));
		}
	i=10;
	inv(a,i);
	printf("after sorting :\n");
	for(i=0;i<10;i++)
		{
		printf("%d-",*(a+i));//Id love to tell you that if you write the second param  like "*a+i",ull get only the first and last changed
		}
		
}
