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
// Online C compiler to run C program online
// #include <stdio.h>
// #include<math.h>
// int main() {
//     printf("enter n ");
//     int n;
//     scanf("%d",&n);
//     int x[n],y[n];
//     printf("enter n  elements of x ");
//     for(int j=0;j<n;j++){
//         scanf("%d",&x[j]);
//     }
//     for(int j=0;j<n;j++){
//         printf("%d ",x[j]);
//     }
//     printf("\n");
//     printf("enter n elements of y ");
//     for(int j=0;j<n;j++){
//         scanf("%d",&y[j]);
//     }
//     for(int j=0;j<n;j++){
//         printf("%d ",y[j]);
//     }
//     printf("\n");
//     printf("enter interpolation point ");
//     int z ;
//     scanf("%d",&z);
//     printf("%d\n",z);
//     int ans =0;
//     for(int i=0;i<n;i++){
//         float p=1,q=1;
//         for(int j =0;j<n;j++){
//             if(i!=j){
//                 p=p*(z-x[j]);
//                 q=q*(x[i]-x[j]);
//             }
//         }
//         ans =ans +(p/q)*y[i];
//     }
//     printf("the ans is %d",ans );
//     return 0;
// }