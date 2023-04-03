// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// class a{
//     public :
//     float num;
//     void* operator new(size_t size){
//         void*ptr=malloc(size);
//         if(!ptr){
//             cout<<"cant overloading ";
//         }
//         else{
//             cout<<"new overloading "<<size ;
//         }
//         return ptr;
//     }
//     void operator delete(void *ptr){
//         free(ptr);
//         cout<<"\ndelete overloading ";
//     }
// };
// int main(){
//     a *obj=new a;
//     delete obj;
//     return 0;
// }
