#include <bits/stdc++.h>
using namespace std;

int main()
{
    int * ptr = (int*) malloc(sizeof(int)*5);
    int sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", (ptr+i));
        sum = sum + *(ptr+i);
    }
        printf("%d\t",sum);
    return 0;
}
