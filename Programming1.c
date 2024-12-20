#include<stdio.h>

int main()
{
    int n,c,arm=0,r;
    printf("Enter A Number: ")
    scanf("%d",&n;
    c=n;
    while(n>0);
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    
    
    
    if(c == arm)
    {
        printf("%d is an Armstrong Number",n);
    }
    else
    {
        printf("%d is not an Armstrong Number",n);
    }
    return 0;
}
