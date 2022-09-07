#include<stdio.h>
int main(){
    int m,p,s,p1;
    int m1[4],d,f,f1=0,f2=2,fra1,fra2,s1,i;
    printf("enter the memory space :");
    scanf("%d",&m);
    printf("enter the no of partitions :");
    scanf("%d",&p);
    s=m/p;
    printf("\n enter the no of processes :");
    scanf("%d",&p1);
    for(i=0;i<p1;i++){
        printf("\n enter the memory req for process %d ",i+1);
        scanf("%d",&m1[i]);
        if(m1[i]<=s){
            printf("\n process is allocated in partition %d ",i+1);
            fra1 =s-m1[i];
            printf("\n internal fragmentation for process is : %d",fra1);
            f1=f1+fra1;
        }
        else{
            printf("\n process \t memory \t allocation memory");
            s1=m1[i]-s;
            fra2=s-s1;
            f2=f2+fra2;
            printf("\n External fragmentation for partition is :%d",fra2);

        }

    }
    printf("\n\n process \t\t memory\t\t allocationmemory ");
    for(i=0;i<p1;i++){
        printf("\n %5d \t\t %5d\t\t %5d",i+1,s,m1[i]);
    }
    f =f1+f2;
    printf("\n\n\n Total no of fragmentation is = %d",f);

}