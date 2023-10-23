#include<stdio.h>

#include<math.h>
#define e 0.0001

float f(float x){
    return pow(x,3)+pow(x,2) -1;
}

float findvalat(float x){
    return 1/sqrt(1+x);
}
float diff(float x){
    return 1/2*sqrt(1+x);
}

int main(){
    int maxit,i;
    float a,b,x,x0;
    printf("enter the number of iteation in the field\n");
    scanf("%d",&maxit);
    do{
        printf("enter the value of expected root in the field\n");
        scanf("%f%f",&a,&b);
        if(f(a)*f(b)>0){
            printf("invalid\n");
        }
        else{
            printf("\nvalid\n");
            break;
        }
    }while(1);
    x0=(a+b)/2;
    if(diff(x0)<1){
        printf("\ncorrect form\n");
    }
    else{
        printf("\nnot a correct form\n");
        return 0;
    }
   
    for( i=1;i<=maxit;i++){
        x=findvalat(x0);
        if(fabs(x-x0)<e){
            printf("\niteration ::%d final root::%f\n",i,x);
            return 0;
        }
        printf("\niteration ::%d  root::%f\n",i,x);
        x0=x;
    }
    printf("root==%f total iterations::%d",x,--i);
    return 0;
}

/*
enter the max iteration in the field
17
enter the expected value of a and b
0 1

valid

correct
iter  root::0::: root::0.816497
iter  root::1::: root::0.741964
iter  root::2::: root::0.757671
iter  root::3::: root::0.754278
iter  root::4::: root::0.755007
iter  root::5::: root::0.754850
iter final root::6:::final root::0.754884
    */
