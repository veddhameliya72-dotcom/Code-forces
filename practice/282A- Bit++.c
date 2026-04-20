// 281A Bit++

#include<stdio.h>
int main()
{
	int n;
	int X=0;
	char op[4];
	int i;
// asks number of statements:
	scanf("%d",&n);
	
// aks statements and then executes it:	
	for(i=0;i<n;i++){
		scanf("%s\n",&op);
		
		if(op[1]=='+')
		X++;
		else
		X--;
		
	}
// print value of x:	
	printf("%d",X);
}
/*

output:
3
X++
X--
X++
1

*/