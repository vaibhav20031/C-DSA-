#include<bits/stdc++.h>
using namespace std ;
#define f(x) 1/(1+pow(x,2))
int main(){
    cout<<"simpson 1/3 \n";
    float a ,b,n,h;
    cout<<"enter lower and upper limit ";
    cin>>a>>b ;
    cout<<"enter intervals and step size ";
    cin>>n>>h;
    float k=a;
    float ans =f(a)+f(b);
    for(int i=1;i<n;i++){
        k=k+h;
        if(i&1)
        ans =ans+4*f(k);
        else 
        ans=ans+2*f(k);
    }
    ans=(ans*h)/3;
    cout<<"the ans is "<<ans ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std ;
#define f(x) 1/(1+pow(x,2))
int main(){
    cout<<"simpson 3/8 \n";
    float a ,b,n,h;
    cout<<"enter lower and upper limit ";
    cin>>a>>b ;
    cout<<"enter intervals and step size ";
    cin>>n>>h;
    float k=a;
    float ans =f(a)+f(b);
    for(int i=1;i<n;i++){
        k=k+h;
        if(i%3!=0)
        ans =ans+3*f(k);
        else 
        ans=ans+2*f(k);
    }
    ans=(ans*3*h)/8;
    cout<<"the ans is "<<ans ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std ;
#define f(x) 1/(1+pow(x,2))
int main(){
    cout<<"trapezoidal \n";
    float a ,b,n,h;
    cout<<"enter lower and upper limit ";
    cin>>a>>b ;
    cout<<"enter intervals  ";
    cin>>n;
    h=(b-a)/n;
    float k=a;
    float ans =f(a)+f(b);
    for(int i=1;i<n;i++){
        k=k+h;
        ans=ans+2*f(k);
    }
    ans=(ans*h)/2;
    cout<<"the ans is "<<ans ;
    return 0;
}