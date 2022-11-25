#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    void **ptr = 0x00000000FFFF8392; // 예시로 든 값 입니다.
    char *name = (char *)*ptr;
    printf("%s", name);
    void **ptr2 = 0x00000000FFFF3821; // 마찬가지
    int64_t *number = (int64_t *)*ptr2;
    printf("%lx", *number); // %llx: long long 16진수 형식지정자
    return 0;
}
