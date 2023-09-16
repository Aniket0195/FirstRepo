
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    char * ptr = (char*) malloc(n*sizeof(char)+1);
    
    for(int i = 0; i < (n*sizeof(char)+1); i++){
        scanf("%c",(ptr+i));
    }
    printf("%s",ptr);

    return 0;
}

