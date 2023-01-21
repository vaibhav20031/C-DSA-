#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;
int main(){
    vector<int>v ;
    v.push_back(100);
    v.push_back(101);
    v.push_back(199);
    v.push_back(200);
    v.push_back(110);
    cout<<binary_search(v.begin(),v.end(),100)<<"   ";
    cout<<lower_bound(v.begin(),v.end(),199)-v.begin()<<"   ";
    cout<<upper_bound(v.begin(),v.end(),101)-v.begin()<<"   ";
    string abcd="vaibhav ";
    reverse(abcd.begin(),abcd.end());
    cout<< abcd <<"  ";
    sort(v.begin(),v.end());
    for(int i :v)
    cout<<i<<"    ";
    cout<<"   ....  ";
    rotate(v.begin(),v.begin()+4,v.end());
    for(int i :v)
    cout<<i<<"    ";
    return 0;
}