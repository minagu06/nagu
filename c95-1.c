#include <stdio.h>
int main(){
    int kor, eng, math;
    printf("korean : "), scanf("%d", &kor);
    printf("english : "), scanf("%d", &eng);
    printf("math : "), scanf("%d", &math);
    kor >= 70 && eng>=70 || math <= 80 ? printf("great"):printf("ok");
    return 0;
}