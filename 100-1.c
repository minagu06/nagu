#include <stdio.h>
int main(){
    int n1,n2,n3,Min;
    printf("input 3 numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    Min = n1;
    Min = n2<Min?n2:Min;
    Min = n3<Min?n3:Min;
    printf("Min : %d\n", Min);
    return 0;
}