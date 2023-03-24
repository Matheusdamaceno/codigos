#include <iostream>

int fibo(int i){
    if(i<3){
        return 1;
    }else{
        
        return fibo(i-1) + fibo(i-2);
    }
}

int main(int argc, char const *argv[])
{
    int res;
    int ele;
    printf("\n digirte um numero");
    scanf("%d", &ele);
    res =fibo(ele);
    printf("\n%d", res);
    return 0;
}
