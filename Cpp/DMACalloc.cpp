
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int *ptr = (int*) calloc(5,sizeof(int));
    for(int i = 0; i < 5; i++){
        scanf("%d",(ptr+i));
        sum = sum +*(ptr+i);
   }
   for(int i = 0; i < 5; i++){
       printf("%d", *(ptr+i));
   }
   printf("%d", sum);
    return 0;
}