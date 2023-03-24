#include <iostream>

int func (int n){
    if (n == 0)
        printf("fim");
    else
    {
        func(n-1);
        printf("\n%d\n",n);
        func(n-1);
    }
}




int main(int argc, char const *argv[])
{
    int res;
    res=func(5);
    printf("\n%d\n", res);
    return 0;
}
