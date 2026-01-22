#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void display()
{
    
    int a,b;
    scanf("%d" "%d",&a,&b);
     int res1 = a%10;
     int res2 = b%10;
     int sum = res1 +res2;
    printf("The sum of last digits is: %d",sum);
}

   int main() 
   { 
       display();

    return 0;
}
