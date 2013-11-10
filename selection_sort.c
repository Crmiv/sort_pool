#include<stdio.h>
#define SWAP(a,b,c) ((c)=(a),(a)=(b),(b)=(c))
int main(void)
{}
void sort(int a[],int n)
{
	//temporary variable
	int temp;
	//every loop put a min in a[i]'s order
	for(i=0;i<n-1;i++){
		
		min = i;
		//choose min variable
		for(j=i+1;j<n;j++)
		{

			if(a[min]>a[j])
				min = j;
			SWAP(a[i],a[min],temp);
		
		}

	}
}
