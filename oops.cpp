// #include<bits/stdc++.h>
// using namespace std ;
// class vaibhav{
//     public :
//     int a ,b ;
//     void set(int x ){
//         this->a =x;
//     }
//     friend class vaib;
// };
// class vaib{
//     public :
//     void set(vaibhav &k,int data){
//         k.b=data;
//     }
//     void check(vaibhav &k ){
//     if(k.a>k.b){
//         cout<<"ans is = "<<k.a ;
//     }
//     else 
//     cout<< "ans is = "<<k.b ;
//     }
// };
// int main(){
//     vaibhav k;
//     k.set(10);
//     vaib p;
//     p.set(k,30);
//     p.check(k);
//     cout<<"\n"<<k.b ;
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// class vaibhav{
//     public :
//     string s1;
//     string s2;
//     void operator +(vaibhav obj2){
//         cout<<"\noverloading of + ="<<this->s1+obj2.s2<<"\n";
//     }
//     void operator =(vaibhav obj2){
//         cout<<"phle string 2 tha ="<<obj2.s2<<"\n";
//         obj2.s2=this->s1;
//         cout<<"\noverloading ke baad string 2 string1 ke equal hogya ="<<obj2.s2<<"\n";
//     }
//     void operator <=(vaibhav obj2){
//         if(this->s1==obj2.s2){
//             cout<<"\nstrings are equal \n";
//         }
//         else
//         cout<<"\nnot equal "<<"\n";
//     }
//     void length(vaibhav obj2){
//         int count =0;int i=0;
//         string s3=this->s1+obj2.s2;
//         while(s3[i]!='\0'){
//             count++;
//             i++;
//         }
//         cout<<"\nlength is "<<count<<"\n";
//     }
//     void uppercase(vaibhav obj2){
//         int i=0;
//         cout<<"\nconverting to uppercase = ";
//         while(this->s1[i]!='\0'){
//             if(this->s1[i]>='A' && this->s1[i]<='Z'){
//                 cout<<this->s1[i];
//                 i++;
//             }
//             else{
//                 cout<<char(this->s1[i]-32);
//                 i++;
//             }
//         }
//         cout<<" ";
//         int j=0;
//         while(obj2.s2[j]!='\0'){
//             if(obj2.s2[j]>='A' && obj2.s2[j]<='Z'){
//                 cout<<obj2.s2[j];
//                 j++;
//             }
//             else{
//                 cout<<char(obj2.s2[j]-32);
//                 j++;
//             }
//         }
//         cout<<"\n";
//     }
//     void lowercase(vaibhav obj2){
//         int i=0;
//         cout<<"\nconverting to lowercase = ";
//         while(this->s1[i]!='\0'){
//             if(this->s1[i]>='a' && this->s1[i]<='z'){
//                 cout<<this->s1[i];
//                 i++;
//             }
//             else{
//                 cout<<char(this->s1[i]+32);
//                 i++;
//             }
//         }
//         cout<<" ";
//         int j=0;
//         while(obj2.s2[j]!='\0'){
//             if(obj2.s2[j]>='a' && obj2.s2[j]<='z'){
//                 cout<<obj2.s2[j];
//                 j++;
//             }
//             else{
//                 cout<<char(obj2.s2[j]+32);
//                 j++;
//             }
//         }
//         cout<<"\n";
//     }
// };
// int main(){
//     string s1;
//     string s2;
//     cout<<"enter string s1  ";
//     cin>>s1;
//     cout<<"enter string s2  ";
//     cin>>s2;
//     vaibhav obj;
//     vaibhav obj2;
//     obj.s1=s1;
//     obj2.s2=s2;
//     while(true){
//         cout<<"enter 1 for + overloading\n ";
//         cout<<"enter 2 for = overloading\n ";
//         cout<<"enter 3 for <= overloading\n ";
//         cout<<"enter 4 for length\n ";
//         cout<<"enter 5 for uppercase\n ";
//         cout<<"enter 6 forlowercase\n ";
//         cout<<"enter choices \n";
//         int choice ;
//         cin>>choice; 
//         switch(choice){
//         case(1):obj+obj2;
//         break;
//         case(2):obj=(obj2);
//         break;
//         case(3):obj<=(obj2);
//         break;
//         case(4):obj.length(obj2);
//         break;
//         case(5):obj.uppercase(obj2);
//         break;
//         case(6):obj.lowercase(obj2);
//         break;
//         }   
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std ;
class employee{
    public :
    string name ;
    char gender;
    int age ;
    char designation[20];
    int salary ;
    int experience;
    void getdata(){
        cout<<"enter name \n";cin>>this->name; 
        cout<<"enter gender \n"; cin>>this->gender;
        cout<<"enter age\n"; cin>>this->age;
        cout<<"enter designation \n";cin>>this->designation;
         cout<<"enter salary \n";cin>>this->salary;
        cout<<"enter experience \n";cin>>this->experience;  
    }
    void print(){
        cout<<this->name<<"\n"; 
        cout<<this->gender<<"\n"; 
        cout<<this->age<<"\n";     
        cout<<this->designation<<"\n";
        cout<<this->salary<<"\n"; 
        cout<<this->experience<<"\n"; 
    }
};
int main(){
    employee obj;
    int count =0;
    while(count!=10){
        obj.getdata();
        obj.print();
        count ++;
    }
    return 0;
}