    //   templates 
#include<iostream>
using namespace std ;
template <class t,class t2>
void f(t a,t2 b ){
    cout <<a << " " <<b;
}
int main(){
    char a;
    int b ;
    cout<<"enter a and b ";
    cin>>a>>b ;
    f<char,int>(a,b);
    return 0;
}
#include <iostream>
using namespace std;
template <class t ,class t2>
class vaibhav{
    public:
    vaibhav(t a, t2 b){
        cout << a << " " << b;
        cout<<"\n";
    }
};
int main()
{   vaibhav<int, char> obj(20,'d');
    vaibhav<char ,int>obj2('c',100);
    return 0;
}