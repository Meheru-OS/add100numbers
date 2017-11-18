#include<stdio.h>
#include<unistd.h>
int toSum(arr[],i,n)
void init_Array(arr[],n)

int main()
{
int cpid;
inti,j;
int final_sum;
int sum1=0,sum2=0;
int length;
init_Array(arr,100);
for(i=0;i<3;i++)
{
cpid=fork();
if(cpid==0)
{
sum1+=toSum(arr,i+25,i*25)
}
else
{
sum2+=toSum(arr,0,25);
final_sum=sum1+sum2;
printf("Final Sum:" %d,final_sum);
}
wait(NULL);

}

}
init_Array(arr[],n)
{
for(int i=0;i<n;i++)
{
 arr[i]=i;
}
}

int toSum(arr[],i,n)
{
int j, sum=0;
for(j=i;j<n;j++)
{
  sum +=arr[j];
}
return sum;
}
