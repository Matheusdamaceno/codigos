#include <iostream>
    int ret;

int contar(int i){
    if (i==0)
        return 0;
    else
        printf("%d", i);
        ret=contar(i-1); 
        return ret;

    
}

int main(int argc, char const *argv[])
{
    int res;
    res=contar(5);
    return 0;
}
