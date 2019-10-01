#include<stdio.h>
int main()
{int a;
printf("Please Enter Your Age :\n");
scanf("%d",&a);
if(a<18)
printf("\nSorry, you are not eligible to vote");
else 
printf("\nCongrats, you are eligible to vote. See you at the next elections.");
return 0;
}
