#include<iostream>
using namespace std ;
int main(){
    cout<<" VAIBHAV AGGARWAL lagrange interpolation code \n";
    int n ;
    cout<<"enter n = ";
    cin>>n;
    float x[n];
    float y[n];
    cout<<"enter "<<n<<" values for x : ";
    for(int i =0;i<n;i++){
        cin>>x[i];
    }
    cout<<"enter "<<n<<" values for y : ";
    for(int i =0;i<n;i++){
        cin>>y[i];
    }
    cout<<"enter x or interpolation point ";
    float z ;
    cin>>z ;
    float ans =0;
    for(int i=0;i<n;i++){
        float p,q;
        p=q=1;
        for(int j =0;j<n;j++){
            if(i!=j){
                p=p*(z-x[j]);
                q=q*(x[i]-x[j]);
            }
        }
        ans =ans +(p/q)*y[i];
    }
    cout<<"value at  " <<z <<" = "<<ans;
    return 0;
}
