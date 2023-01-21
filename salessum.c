#include<stdio.h>
void sumpair(int arr[],int n ,int targetsale){
    int count =0;
    printf("target sale is %d\n",targetsale );
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==targetsale)
            count ++;
        }
    }
    printf(" SALE PAIRS FOR TARGET SALE IS =%d ",count );
}
int main(){
    int n ;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d sales values : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sumpair(arr ,n ,50);
    return 0;
}