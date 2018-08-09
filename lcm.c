#include<stdio.h>

int main() 
{
    int n1,n2,g,l,p;
    scanf("%d%d",&n1,&n2);
    for(int i=1;i<= n1&& i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        g=i;
    }
  printf("%d",g);

// lcm= (n1*n2)/gcd (to find LCM using GCD by using this formula)
p=(n1*n2);
l=p/g;
printf(" %d",l);
    
}