/*#include<stdio.h>
int main()
{int N,t;
scanf("%d",&N);
do
  {if(N==1)break;
      if(N%2!=0)
    {N=N*3+1;
    printf("%d*3+1=%d\n",(N-1)/3,N);}
  else
    {N=N/2;
    printf("%d/2=%d\n",N*2,N);}
  t=N;}
while(t>1);
printf("End");

}*/
#include<stdio.h>
int a[1000000];
int main()
{
   int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int t=1,ans=0;
for(int j=0;j<n;j++){
if(a[j+1]>a[j]) {
t++;
if(t>ans)
ans=t;
}
else
t=1;
}
printf("%d",ans);
return 0;
}
/*#include<stdio.h>
int t[100];
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
scanf("%d/n",&t[i]);
int d=0;
for(int i=1;i<=n;i++){ //外边的 for 循环用来让 t[i]往下个数字走
for(int j=1;j<=i;j++) //里面的 for 循环用来与前面的数字比较
if(t[j]<t[i])
d++;
printf("%d ",d);
d=0; // 输出 d 的值，然后 d 归 0，用于下一条鱼的计算
}
return 0;
}
#include<stdio.h>
int main()
{
int n;
scanf("%d",n);
}
*/
