#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
// void rowsum(int arr[3][3],int rows,int cols){
//     int maxsum=-1,row;
//     for(int i =0;i<3;i++){
//         int sum=0;
//         for(int j =0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         // cout<<"sum  "<<sum<<" ";
//         if(sum>maxsum){
//             maxsum=sum;
//             row=i;
//         }
//     }
//     cout<<"maximum sum ="<<maxsum<<"\n";
//     cout<<"maximum sum at row index="<<row;
// }
// void ttb(int arr[3][3],int rows,int columns ){
//     for(int j=0;j<3;j++){
//         if(j&1){
//             cout<<"bottom to top"<<"\n";
//             for(int i=rows-1;i>=0;i--){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
//         else{ 
//             cout<<"top to bottom  "<<"\n";
//             for(int i=0;i<3;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<"\n";
//         }        
//     }
// }
void spiral(int arr[3][3],int rows,int columns){
    int startingrow=0,endingrow=rows-1,startingcolumn=0,endingcolumn=columns-1;
    int total=rows*columns;
    int count=0;
    while(count<total){
        for(int index=startingcolumn;count<total && index<=endingcolumn;index++){
            cout<<arr[startingrow][index]<<" ";
            count++;
        }
        startingrow++;
        for(int index=startingrow;count<total && index<=endingrow;index++){
            cout<<arr[index][endingcolumn]<<" ";
            count++;
        }
        endingcolumn--;
        for(int index=endingcolumn;count<total && index>=startingcolumn;index--){
            cout<<arr[endingrow][index]<<" ";
            count++;
        }
        endingrow--;
        for(int index=endingrow;count<total && index>=startingrow;index--){
            cout<<arr[index][startingcolumn]<<" ";
            count++;
        }
        startingcolumn++;
    }
    
}
int main(){
    int arr[3][3];
    cout<< "enter the elements "<<endl ;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n"<<"printing the spiral elements" <<endl;
    // ttb(arr,3,3);
    spiral(arr,3,3);   
    return 0;
}