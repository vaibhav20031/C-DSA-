#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    string s1 ="hello my name is vaibhav aggarwal";
    ofstream out ;
    out.open("hello.txt");
    out<<s1;
    out<<"\nhi my name is kunal ";
    out<<"\nmy name is sakshi";
    out.close();
    ofstream obj2("hello2.txt");     //opening file using constructor
    ifstream in("hello.txt");
    string s2;
    // in>>s2;
    //  or
    // getline(in,s2);
    // cout<<s2 ;
    while(!in.eof()){
        getline(in,s2);
        obj2<<s2<<"\n" ;
    }
    in.close();
    obj2.close();
    ifstream obj4("hello2.txt");string str3 ;
    while(!obj4.eof()){
        getline(obj4,str3);
        cout<<str3 <<"\n";
    }
    obj4.close();
    return 0;
}
// #include<iostream>
// using namespace std ;
// int main(){
//     int a=2;
//     try{
//         if(a==1)
//         throw (1 );  //( ) is not neccesary 
//         if(a==2)
//         throw ("change kar bhai");
//         if(a==3)
//         throw 4.9;
//     }
//     catch(int ch){
//         cout<<ch;
//     }
//     catch(const char* ch){
//         cout<<ch;
//     }
//     catch(double ch){
//         cout<<ch;
//     }
//     return 0;
// }