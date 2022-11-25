#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 50;
    int *p1 = &n;
    int **p2 = &p1;
    printf("%p\n", p1);   // p1 변수가 가리키는 화살표 -> n으로 가는 주소 값
    printf("%p\n", p2);   // p2 변수가 가리키는 화살표 -> p1으로 가는 주소 값
    printf("%i\n", *p1);  // p1 변수가 가리키는 곳에 담겨 있는 것 -> n 값
    printf("%i\n", **p2); // p2 변수가 가리키는 곳에 담겨 있는 것 -> n 값
    printf("%p\n", *p2);  // p2 변수의 화살표 하나가 가리키는 곳에 담긴 것 -> n으로 가는 주소★★
    printf("%p\n", &p1);  // p1의 주소 = p2
    printf("%p\n", &n);   // n의 주소 = p1
    return 0;
}
