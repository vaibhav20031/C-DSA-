#include<iostream>
using namespace std ;
class vaibhav{
    public :
    char name[20] ;
    int age ;
    int slary;
    void data (){
        cout<<"enter name \n";
        cin>>name ;
        cout<<"enter age \n";
        cin>>age ;
        cout<<"enter slry\n";
        cin>>slary;
    }
};
int main(){
    vaibhav obj;
    obj.data();
    cout<<obj.name<<"   ";
    cout<<obj.age<<"   ";
    cout<<obj.slary;
    return 0;
}
// #include<iostream>
// using namespace std ;
// class vaibhav{
//     public :
//     static int a ;
//     int b =20;
//     static void set(){
//         a=20;
//     }
// };
// int vaibhav::a=10 ;
// int main(){
//     vaibhav obj;
//     vaibhav::set();
//     cout<<vaibhav::a;
//     // cout<<  ;
//     return 0;
// }