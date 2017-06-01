#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 80

typedef struct {
    char masv[7];
    char hoten[32];
    float dtb;
} Student;

typedef struct {
    Student dssv[MAX];
    char tenlop[8];
    int n;
} Class;

void input_class(Class *aClass) {

    printf(" Nhap ten aClass: \n");
    gets(aClass->tenlop);
    fflush(stdin);
    printf("\n Nhap sy so aClass: \n");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    aClass->n = n;
    int i = 0;
    for (i = 0; i < aClass->n; i++) {
        printf("Nhap ma sv:\n");
        scanf("%s", aClass->dssv[i].masv);
        printf("\n Nhap ho ten: \n");
        scanf("%s",aClass->dssv[i].hoten);
        printf("\n Nhap diem tb: \n");
        scanf("%f", &aClass->dssv[i].dtb);
    }
}

void decreasing_sort(Student member[], int n) {
    int i = 0, j = 0;
    Student temp;
    for (j = 1; j < n; j++) {
        temp = member[j];
        i = j - 1;
        while ((i >= 0) && (member[i].dtb < temp.dtb)) {
            member[i + 1] = member[i];
            i -= 1;
        }
        member[i + 1] = temp;
    }
}

void show_menber(Student nember[], int n) {
    printf("%-20s %-20s %-30s %-7s\n", "TT", "MSV", "Ho ten", "DTB");
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%-20d %-20s %-30s %-7.2f\n", i, nember[i].masv, nember[i].hoten, nember[i].dtb);
    }
}

int main() {
    Class aClass;
    input_class(&aClass);
    decreasing_sort(&aClass.dssv, aClass.n);
    show_menber(aClass.dssv, aClass.n);
    return 0;
}
