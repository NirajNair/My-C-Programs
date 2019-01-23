#include<stdio.h>

int main()
{
    int num = 0;
    check(num, 10);
    return 0;
}

void check(int a, int n)
{
	comeback:
		
   	a+=1;
	if (a>=0 && a <= n)
   	{
   		if (a%2 == 0 ) {
   			printf("%d is Even\n",a);
       		goto comeback;
       	}
   		else {
   			printf("%d is Odd\n",a);
       		goto comeback;
       	}
	}
	
	
	
}
