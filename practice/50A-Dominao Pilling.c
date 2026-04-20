// 50-A domino pilling

#include<stdio.h>
int main()
{
	// asks size of board size
	int m,n;
	m<=16;
	n<=16;

	scanf("%d %d",&m,&n);

// finds number of domino piece can come in given space of 2*1 size	
	printf("%d",(m*n)/2);
	
}
/*

output:
3 3
4

*/