#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    void **ptr = malloc(sizeof(int64_t) * 50); // malloc으로 메모리 할당 
    char *name = (char *)*ptr;
    printf("%s", name);
    void **ptr2 = malloc(sizeof(int64_t) * 50); // malloc으로 메모리 할당 
    int64_t *number = (int64_t *)*ptr2;
    // printf("%lx", *number); // %llx: long long 16진수 형식지정자
    return 0;
}
