#include <stdio.h>

int main(void)
{
    int age;

    age = 15;

    printf("age가 %d라면 \n\n", age);
    // 아래처럼 논리 연산자의 결과를 숫자로 출력할 수 있음!
    printf("age >= 20은 %d이다. \n", age >= 20);
    printf("age <= 20은 %d이다. \n", age < 20);

    
    return 0;
}