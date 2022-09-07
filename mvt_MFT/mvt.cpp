#include<stdio.h>
int main(){
    int m=0,m1=1,m2=0,p,count = 0,i;
    printf("enter the memory capacity: ");
    scanf("%d",&p);
    for(i=0;i<p;i++){
        printf("enter the memory req for process %d ",i++);
        scanf("%d",&m);
        count=count+m1;
        if(m1<=m){
            if(count==m){
                printf("there is no further memory remaining ");

            }
            else{
                printf("the memory allocated for process %d is : %d ",i+1,m);
                m2=m-m1;
                printf("\n Remaining memory is : %d \n\n",m2);
                m=m2;
            }

        }
        else{
            printf("memory is not allocated for process % d",m2);
        }
    

    }
}