void(int n,int a[])
{
	int i,j,elem;
	for(i=1;i<n;i++)
	{
		next = a[i];
		for(j=i-1;j>=0&&a[j]>a[next];j--)
		{
			a[j+1]=a[j];
		}
		a[j+1] = next;
	}
//time complexity O(n^2)
}

other kinds of ways:

//binsearch insertion sort easy

//Link insertion sort
//non_test
void(int n,Node* head)
{
	Node* m,n = head;
	//in proper order
	Node* k,l = head;
	int i=1;
	while(n!=NULL&& i <= n)
	{
		m = n;
		n = n->next;
		i++;
		while(l!=n)
		{
		 k = l;
		 l = l->next;
			if(l->data > n->data)
			{
				//kk = l
				//malloc
				//k->next=malloc
				//k->next->next=kk
				//m->next=n->next
				//free(n)
			}
		}
	}
}
