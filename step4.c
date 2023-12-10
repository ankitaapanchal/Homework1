#include<stdio.h>

#include<stdlib.h> /*Include this library for atoi function*/

int sum(int n)
{
int i, total=0;

for(i=1; i<=n; i++)
{
total=total+i;
}
return total; /* Return the result */
}
int main(int argc, char* argv[])
{
int n=atoi(argv[1]);

int ans=sum(n);

printf("Sum of the natural numbers=%d\n", ans);

return 0;

}