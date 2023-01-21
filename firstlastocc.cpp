// finding the first andlast occurences of an element 
#include<iostream>
using namespace std ;
int first(int arr[] ,int size,int element ){
    int s=0,e=size-1,mid=(s+e)/2,ans=-1 ;
    while(s<=e){
        if(arr[mid]==element){
            ans=mid ;
            e=mid -1;
        }
        else if (arr[mid]>element)
        e=mid-1;
        else 
        s=mid +1;
        mid=(s+e)/2;
    }
    return ans;
}
int last(int arr[],int size,int element){
    int s=0,e=size-1,mid=(s+e)/2,ans=-1 ;
    while(s<=e){
        if(arr[mid]==element){
            ans=mid ;
            s=mid +1;
        }
        else if (arr[mid]>element)
        e=mid-1;
        else 
        s=mid +1;
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,2,3,4};
    cout<<first(arr,5,2)<<"  ";
    cout<<last(arr,5,2)<<"   ";
    return 0;
}