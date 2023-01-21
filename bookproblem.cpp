// no of maximum pages is assinged to student is minimum 
#include<iostream>
using namespace std ;
bool isposs(int arr[],int size,int student,int mid ){
    int count=1,sum=0;
    for(int i =0;i<size;i++){
        if(arr[i]+sum<=mid){
            sum+=arr[i];
        }
        else{
            count++;
            if(count>student || arr[i]>mid ){
                return false ;
            }
            sum=arr[i];
        }
    }
    return true ;
}
int main(){
    // 5 books ka array hai jisme ki pages diyr hue  hain ....
    int arr [5]={10,20,30,40,50};
    int min=0,sum=0;
    for(int i =0;i<5;i++){
        sum+=arr[i];
    }
    int max=sum;
    int mid =(min+max)/2,ans =-1;
    while(min<=max){
        if(isposs(arr,5,2,mid)){
            ans =mid ;
            max=mid -1;
        }    
        else 
        min=mid+1;
        mid =(min+max)/2;
    }
    cout<< ans ;
    return 0;
}