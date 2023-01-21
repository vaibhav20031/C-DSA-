#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
bool valid(char ch ){
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
    return 1 ;
    return 0 ;
}
bool palindrome(string s,int size){
    string t;int count=0;
    for(int i =0;i<size;i++){
        if(valid(s[i]))
        t.push_back(s[i]);
    }
    for(int i =0;i<t.size();i++){
        t[i]=tolower(t[i]);
    }
    int l=0,r=t.size()-1;
    while(l<=r){
        if(t[l]==t[r]){       
            l++;r--;
        }
        else 
        return 0;
    }
    return 1 ;
}
int main(){
    string s ="A man, a plan, a canal: Panama";
    // string s ="acha chalta hu duae mei yaad rakhna mere zikar ka suma pe samar rakhna ";
    int size=s.size();
    if(palindrome(s,size))
    cout<<"yes it is palindrome ";
    else 
    cout<<"no it is not palindrome ";
    return 0;
}