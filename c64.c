#include<stdio.h>
int main(){
    int korean=0;
    int math=0, english=0, total=0;
    float average;
    int science = 95, history = 97;
    char grade = 'A';
    total = korean + math + english + science + history;
    average = total / 5.0;
    printf(" total is %d, average is %.1f, grade is %c\n", total, average, grade);
    
    return 0;
}