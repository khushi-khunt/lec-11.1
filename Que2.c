#include<stdio.h>

 void main(){
    int a,b,c;
    int*p;
    int*q;
    
    printf("Enter the value of A:-");
    scanf("%d",&a);
     
	printf("Enter the value of B:-");
    scanf("%d",&b);
    
    p=&a;
    q=&b;
    c=*p;
    *p=*q;
    *q=c;
    
    printf("Swaping:\n");
    printf("a:%d\n",*p);
    printf("b:%d\n",*q);
}

