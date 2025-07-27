#include <stdio.h>
#include <string.h>

struct Grade {
    char name[51];
    float importance;
    char grade[3];
    float grade_n;
};

int main() {
    float total_importance = 0;
    float tmp = 0;
    struct Grade grade[20];

    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", grade[i].name, &grade[i].importance, grade[i].grade);
        
        if (strcmp(grade[i].grade, "A+") == 0) {
            grade[i].grade_n = 4.5;
        } else if (strcmp(grade[i].grade, "A0") == 0) {
            grade[i].grade_n = 4.0;
        } else if (strcmp(grade[i].grade, "B+") == 0) {
            grade[i].grade_n = 3.5;
        } else if (strcmp(grade[i].grade, "B0") == 0) {
            grade[i].grade_n = 3.0;
        } else if (strcmp(grade[i].grade, "C+") == 0) {
            grade[i].grade_n = 2.5;
        } else if (strcmp(grade[i].grade, "C0") == 0) {
            grade[i].grade_n = 2.0;
        } else if (strcmp(grade[i].grade, "D+") == 0) {
            grade[i].grade_n = 1.5;
        } else if (strcmp(grade[i].grade, "D0") == 0) {
            grade[i].grade_n = 1.0;
        } else if (strcmp(grade[i].grade, "F") == 0) {
            grade[i].grade_n = 0.0;
        } else if (strcmp(grade[i].grade, "P") == 0) {
            grade[i].grade_n = 0.0;
            grade[i].importance = 0.0;
        }

        total_importance += grade[i].importance;
        tmp += grade[i].grade_n * grade[i].importance;
    }

    float result = tmp / total_importance;
    printf("%f\n", result);

    return 0;
}
