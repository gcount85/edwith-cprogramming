#include <stdio.h>
#define SIZE 5   // 매크로 상수 정의 -> 마치 전역 변수 설정하듯이 
int main()
{
    int cost[SIZE] = {12000, 9000, 8700, 15000, 3500};
    int sum = 0;
    int count = 0;
    int average;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d원 \n", cost[i]);
        sum += cost[i];
    }

    average = sum / SIZE;

    for (int i = 0; i < SIZE; i++)
    {
        count += cost[i] >= average ? 1 : 0;
    }

    printf("총합: %d원\n평균: %.2d원\n평균 이상은 %d개\n", sum, average, count);
    return 0;
}
