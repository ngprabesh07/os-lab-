#include <stdio.h> 
#include<conio.h>
 void main(){
    #include<stdio.h> #include<conio.h> void main
int m=0,m1=0,m2=0,p,count=0,i; clrscr(); printf("Enter the memory capacity:");
scanf("%d",&m); printf("Enter the no of processes:"); scanf("%d",&p);
for(i=0;i<p;i++)
{
printf("\nEnter memory req for process%d: ",i+1); scanf("%d",&ml);
count=count+ml; if(ml<=m)
if(count==m)printf("There is no further memory remaining:");
else
printf("The memory allocated for process%d is: %d ",i+1,m); m2=m-ml;
printf("\nRemaining memory is: %d",m2); m=m2;
else
{
printf("Memory is not allocated for process%d",i+1);
printf("\nExternal fragmentation for this process is:%d",m2);
}
getch();
 }