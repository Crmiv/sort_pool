void quicksort(int list[],int left,int right)
{
	int pivot,i,j;
	int temp;//type of temp in terms of list[]
	if(left<right)
	{
		i = left;
		j = right + 1;
		do{
			//PAY ATTENTION! 'do' first and judge while()
			do
				i++;
			while(list[i].key<pivot);
			do 
				j--;
			while(list[j].key>pivot);
			if(i<j)
				SWAP(list[i],list[j],temp);
		}while(i<j);
	}
	SWAP(list[left],list[j],temp);
	quicksort(list,left,j-1);
	quicksort(list,j+1,right);
}

//every quicksort put a data in acorrect order
