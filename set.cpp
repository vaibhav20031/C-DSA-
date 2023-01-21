#include<iostream>
#include<set>
using namespace std ;
int main(){ 
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    for(int i:s)
    cout<<i<<" "<<"\n";
    cout<<" \n";
    // set<int>::iterator  it=s.begin();
    auto it=s.begin();
    it++;
    s.erase (it);
    for(int i :s)
    cout<<i<<" "<<"\n";
    cout<<"\n"<<s.count(5);
    cout<<"\n";
    auto itr=s.find(2);
    cout<<*itr++;
    return 0;
}