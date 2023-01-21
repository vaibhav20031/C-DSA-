#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
void finalans(char arr[]){
    int max=-1,ans ;
    for(int i =0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    // cout<<arr[ans];
    char key='a'+ans ;
    cout<<key<<" ";
} 
void ans(string s ,int size ){
    char arr[26]={0};
    for(int i =0;i<size;i++){
        char ch=tolower(s[i]);
        // cout<<ch;
        // break;
        int a=0;
        a =ch-'a';
        arr[a]++;
    }
    finalans(arr);
}
int main(){
    string s="vaibhav";
    ans(s,s.size());
    return 0;
}