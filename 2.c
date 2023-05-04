#include<stdio.h>

void rotate_array(int n,int a[])
{	//int temp,temp2;
	int i=0;
	
	int temp=a[n-1];
	for(int i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;

}
		
int main()
{
	int n,temp;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	rotate_array(n,a);
	for(int i=0;i<n;i++)
	{	printf("%d ",a[i]);
	}
	return 0;
}
