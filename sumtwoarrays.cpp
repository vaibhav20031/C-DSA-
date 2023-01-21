#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    vector<int>a={9,9,9};
    vector<int>b={9,9,9};   
    vector<int>final;  
    // ans =3  7  2  
    int sum =0,i=a.size()-1,j=b.size()-1,carry=0,ans ;
    while(i>=0 && j>=0){
        sum=a[i]+b[j]+carry;
        carry=sum/10;
        ans=sum%10;
        final.push_back(ans);
        i--;j--;
    }
    while(i>=0){
        final.push_back(a[i]);
        i--;  
    }
    while(j>=0){
        final.push_back(b[j]);
        j--;  
    }
    while(carry!=0){
        final.push_back(carry);
        carry--;
    }
    reverse(final.begin(),final.end());
    for(int i:final)
    cout<<i<<"  ";
    return 0;
}