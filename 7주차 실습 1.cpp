#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void) {

    struct student s;

    s.number = 20230001;
    strcpy(s.name, "홍길동");
    s.grade = 4.3;

    printf("학번 : %d\n", s.number);
    printf("학번 : %s\n", s.name);
    printf("학번 : %.2f\n", s.grade);

    return 0;
}