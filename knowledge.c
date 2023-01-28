#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct data{
    int age ;
    char *name ;
    int salary ;
};
void data(struct data *obj,char*name,int age ){     // or void data(struct data *obj,char name[],int age )
    obj->name=name ;
    obj->age=age;
    printf("NAME IS=%s\n",obj->name);
    printf("AGE IS =%d\n",obj->age);
}
int main(){
    struct data *obj=(struct data*)malloc(sizeof(struct data));
    data(obj,"vaibhav aggarwal",20);
    data(obj,"kunal",20);
    return 0 ;
}
