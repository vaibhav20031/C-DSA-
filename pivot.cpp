// searching an elment index in rotated sorted array 
#include<iostream>
using namespace std ;
int first(int arr[],int piv,int key,int size){
    int s =piv,e=size-1,mid=(s+e)/2,ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            return mid ;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else 
        s=mid+1;
        mid =(s+e)/2;
    }
    return ans ;

}
int second(int arr[],int piv ,int key,int size ){
    int s =0,e=piv-1,mid=(s+e)/2,ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            return mid ;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else 
        s=mid+1;
        mid =(s+e)/2;
    }
    return ans ;
}
int pivot(int arr[],int size){
    int s =0,e=size-1,mid=(s+e)/2,ans=-1;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else 
        e=mid;
        mid =(s+e)/2;
    }
    return s;
}
int main(){
    int arr[5] ={7,8,1,3,5};
    int piv=pivot(arr,5);
    int key=7;
    if(key>=arr[piv] && key<=arr[4]){
        cout<<first(arr,piv,key,5);
    }
    else{
        cout<<second(arr,piv,key,5);
    }
    return 0;
}