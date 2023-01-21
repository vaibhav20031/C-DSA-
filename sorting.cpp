                                                      // selection sort ....??
#include<iostream>
using namespace std ;
int main(){
    int arr[5]={10,0,11,5,3};
    for(int i =0;i<4;i++){
        int min=i;
        for(int j =i+1;j<5;j++){
            if(arr[min]>arr[j])
            min=j;
        }
        swap(arr[min],arr[i]);
    }
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

                                                   // bubble sort ......???
#include<iostream>
using namespace std ;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i =0;i<4;i++){
        int j =0;int count=0;
        for(j =0;j<5-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j+1],arr[j]);
            count =1;
        }
        if(count ==0)
        break;
        cout<<"already sorted array hi tha "<<"\n";
    }
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
                                                   // insertion sorting ....?????
#include<iostream>
using namespace std ;
int main(){
    int arr[5]={10,9,1,12,3};
    for(int i =1;i<5;i++){
        int temp=arr[i];
        int j =i-1;
        for(j =i-1;j>=0;j--){
            if(arr[j]>temp)
            arr[j+1]=arr[j];
            else 
            break;
        }
        arr[j+1]=temp;
    }
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
