#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                if(j%2!=0){
                    printf("%d",j);
                }
            }
             printf("\n");
        }
    }
    return 0;
}