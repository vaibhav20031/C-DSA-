#include<stdio.h>
int main(){
    printf("bubble sorting \n");
    int n=5;
    int arr[5]={5,1,2,0,9};
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    printf("selection sorting \n");
    int n=5;
    int arr[5]={5,1,2,0,9};
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    printf("insertion sorting \n");
    int n=5;
    int arr[5]={5,1,2,0,9};
    for(int i=1;i<=n-1;i++){
        int j=i-1;
        int temp=arr[i];
        for(j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else
            break;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>
void merge(int arr[],int low ,int high,int mid){
    int i=low ,j=mid+1 ,k=low,arr2[100];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            arr2[k]=arr[i];
            i++,k++;
        }
        else{
            arr2[k]=arr[j];
            k++,j++;
        } 
    }
    while(i<=mid){
        arr2[k]=arr[i];
        i++,k++;
    }
    while(j<=high){
        arr2[k]=arr[j];
        j++,k++;
    }
    for(int i=0;i<=high;i++){
        arr[i]=arr2[i];
    }
}
void mergesort(int arr[],int low,int high ){
    int mid ;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid );
        mergesort(arr,mid+1,high );
        merge(arr,low,high,mid);
    }
}
int main(){
    printf("merge sorting \n");
    int arr[7]={5,8,0,1,2,3,9};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include <stdio.h>
int partition(int arr[],int low ,int high ){
    int i=low ,j=high ,pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp2;
    temp2=arr[low];
    arr[low]=arr[j];
    arr[j]=temp2;
    return j;
}
void quicksort(int arr[],int low ,int high){
    if(low<high){
        int loc=partition(arr,low,high);
        quicksort(arr,low,loc-1);
        quicksort(arr,loc+1,high);
    }
}
int main()
{
    printf("quick sort \n");
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}