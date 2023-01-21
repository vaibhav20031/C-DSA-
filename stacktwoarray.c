#include<stdio.h>
#define size 10
int arr[size];
int topa=-1,topb=size;
void  pusha(int value ){
    if(topa+1==topb ){
    printf("cannot insert = %d\n",value );
    printf("overflow \n");
    }
    else{
        topa++;
        arr[topa]=value ;
    }
}
void pushb(int value ){
    if(topa+1==topb ){
        printf("cannot insert = %d\n",value );
        printf("overflow \n");
    }
    else{
        topb--;
        arr[topb]=value ;
    }
}
void popa(){
    if(topa==-1)
    printf("EMPTY HAI STACK \n");
    else{
        printf("POP VALUE  = %d \n",arr[topa]);
        topa--; 
    }
}
void popb(){
    if(topb==size)
    printf("EMPTY HAI STACK \n");
    else{
        printf("POP VALUE = %d \n",arr[topb]);
        topb++;
    }
}
void dispay(){
    printf("  ..DISPLAYING THE VALUES ..\n");
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
}
int main(){
    printf(".....................VAIBHAV AGGARWAL.................... \n");
    popa();
    pusha(10);
    pusha(20);
    pusha(30);
    pusha(40);
    pusha(50);
    pushb(60);
    pushb(70);
    pushb(80);
    pushb(90);
    pushb(100);
    dispay();
    popa();
    pushb(110);
    dispay();
    return 0;
}

