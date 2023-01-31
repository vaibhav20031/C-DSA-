// #include<iostream>
// using namespace std ;
// class complex{
//     public :
//     int real,imaginary ;
//     static string  name ;
//     complex(){
//         this-> real=0;
//         this-> imaginary=0;
//     }
//     complex(int value ){
//         this-> real=value ;
//         this-> imaginary=value ;
//     }
//     complex(int v1,int v2){
//         this-> real=v1;
//         this-> imaginary=v2;
//     }
//     void add(complex c2 ,complex c3 ){
//         this-> real=c2.real+c3.real;
//         this-> imaginary=c2.imaginary+c3.imaginary;
//     }
//     void display(complex c1 ){
//         cout<<this->real<<this->imaginary<<"\n" ;
//         // cout<<real<<imaginary ;
//     }
//     inline static string  random(){
//         return name ;
//     }
// };
// string complex :: name ="vaibhav is a great leader ";
// int main(){
//     complex c1;
//     complex c2(40);
//     complex c3(20,20);
//     c1.add(c2,c3);
//     c1.display(c1);
//     cout<<"\n ";
//     cout<<c1.real<<c2.real<<"\n";
//     cout<<complex::name<<"\n" ;
//     cout<<complex::random() ;
//     complex a;
//     // cout << a.name;
//     return 0;
// }
// #include<bits\stdc++.h>
// using namespace std ;
// class math{
//     public :
//     int a;
    // double  operator -(math y ){
    //     int val=this->a  ;
    //     int val2=y.a;
    //     return  val+val2;
    // }
//     virtual inline void hello(){
//         cout<<"mei toh math mei define hu \n";
//     }
// };
// class solve{
//     public :
//     inline void hello(){
//         cout<<"mei toh solve mei define hu \n";
//     }
// };
// class hybrid :public math,public solve {       
//     public :
//     inline void hello() {
//         cout<<"mei hybrid mei define hu \n";
//     }
// };
// int main(){
//     math x,y;
//     x.a =3;y.a=8;
//     cout<< y-x<<"\n";
    // hybrid obj;
    // cout<<"hum example hu inheritance ambihity ka \n";
    // obj.solve ::hello();
    // obj.math ::hello();
    // cout<<"mei exmample hu polymorphism run time ka \n ";
    // obj.hello();
//     cout<<"mei exmample hu polymorphism run time ka via virtual function \n ";
//     math *obj=new math;
//     hybrid a;
//     obj=&a;
//     obj->hello();
// }