#include<stdio.h>
int main()
{
     int a, *b, **c;
     a= 10;
     b =&a;
     c = &b;
     printf (" \n  a=%d, &a = %d",a,&a);
     printf("  \n b = %d   \n *b = %d   \n  &b = %d",b,*b,&b);
     printf("  \n c = %d   \n **c = %d   \n  &c = %d \n *c =%d",c,**c,&c,*c);
    **c=20;
     printf (" \n  a=%d, **c = %d",a,**c);
     return 0;
 
}

