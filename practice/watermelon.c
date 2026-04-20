// watermelon:

#include<stdio.h>
int main()
{
	
	int w;
	
	printf("Enter the weight of watermelon:");
	scanf("%d",&w);
	
	if(w>2&&w%2==0){
		printf("yes");
	}else{
		printf("no");
	}
}
/*

output:
Enter the weight of watermelon:7
no

Enter the weight of watermelon:6
yes

*/