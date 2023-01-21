#include<iostream>
#include<map>
using namespace std ;
int main(){ 
    map<int,string>s;
    s[1]="vaibhav ";
    s[2]="jethalal";
    s[3]="popatlal ";
    s[4]="daya gada ";
    // or alternate method....
    s.insert({5, "aggarwal"});
    for(auto i:s)
    cout<<i.first<<" "<<"\n";
    for(auto i:s)
    cout<<i.second <<" "<<"\n";
    cout<<s.count(2)<<"\n";
    s.erase(1);
    for(auto i:s)
    cout<<i.second <<" "<<"\n";
    return 0;
}