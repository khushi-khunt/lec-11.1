#include<stdio.h>

 void main(){
    int n;
    
	printf("Enter array size:-");
    scanf("%d",&n);
    
    int *p;
    int a[n];
    int i;
    
   	printf("Enter the array element:-\n");
   	
   	for(i=0;i<n;i++){
   		printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
	   }
	  p=&a;
	   
    printf("Sqaure of element is:");
   
   	for(i=0;i<n;i++){
   		printf("%d\n",*(p+i)* *(p+i));
	   }
}

