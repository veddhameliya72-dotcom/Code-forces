//112A-Petya And Strings:

#include <stdio.h>
int main()
{
	char a[101];
	char b[101];
	int i=0;
		
//	asks characters for strings

    scanf("%s",a);
    scanf("%s",b);

//converts uppercase letters to lowercase letters and tells whether which one is bigger, equal or small
 while(a[i] != '\0'){
 	
 	if(a[i]>='A' && a[i]<='Z')
 	a[i]=a[i]+32;

 	if(b[i]>='A' && b[i]<='Z')
 	b[i]=b[i]+32;


    if(a[i]>b[i]){
	 
	  printf("1");
      return 0;
      }
	  else if(a[i]<b[i]){
 	
	    printf("-1");
    	return 0;
     }
     i++;
   }
   printf("0");
   return 0;
}
/*

output:
abcde
abcef
-1

*/