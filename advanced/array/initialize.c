#include<stdio.h>
int main(){
//     int num[5];
//     num[0]=1;
//     num[1]=12;
//     num[2]=13;
//     num[3]=15;
//     num[4]=100;
// printf("%d\n",num[0]);
// printf("%d\n",num[4]);
// printf("%d",num[7]);
int marks [5] = {100, 70, 20, 30, 40};
int i;
for(i=0;i<=4;i++)
{
printf("Marks of roll no.%d is %d\n",i+1,marks[i]);
}
return 0;
}