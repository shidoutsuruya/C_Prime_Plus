#include<stdio.h>
#include<limits.h>
#include<float.h>
#define PI 3.1416
#define string "hello world"
void hello_world(){
    /*hello world*/
    printf("hello world");
}
int dogs(){
    int dogs;
    printf("how many dog do your have?\n");
    scanf("%d",&dogs);
    printf("you have %.5d",dogs);
}
void char_test(){
    char name;
    printf("hello what is your name?\n");
    scanf("%s",name);
    printf("%s",name);
}
void change_type(){
    int a=5,b=4;
    printf("%f",(float)a/(float)b );
}
int integer(int a,int b){
    return a+b;
}
void loop(){
    int n=0;
    while (n++<3){
        printf("%d, %5.3f\n",n,n);
    }
}
void sum(){
    float num;
    float sums=0;
    float input;
    printf("enter integer(q to quit):");
    input=(scanf("%f",&num));
    while (input){
        sums+=num;
        printf("enter integer(q to quit):");
        input=(scanf("%f",&num));
    }
    printf("sum is %f",sums);
}
float array(){
    const int num=50;
    float sum=0;
    float a[num];
    for(int i=0;i<num;i++){
        a[i]=i;
    }
    for(int i=0;i<num;i+=2){
        printf("%f\n",a[i]);
    }
    for(int i=0;i<num;i+=1){
        sum+=a[i];
    }
    printf("sum is %f",sum);
}
double power(double n,int p){
    double pow=1;
    for(int i=0;i<p;i+=1){
        pow*=n;
    }
    return pow;
}
void char_func(){
    
}
void main(){
    printf("pow is %f",power(2,5));
    array();
}