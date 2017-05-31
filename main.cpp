#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char masv[7];
    char hoten[32];
    float dtb;
} Sinhvien;

typedef struct {
    Sinhvien dssv[80];
    char tenlop[8];
    int n;
} Lop;

void nhap_dssv(Lop *lop) {
    printf("   Nhap ten lop: ");
    gets(lop->tenlop);
    fflush(stdin);
    printf("\n Nhap sy so lop:");
    gets(lop->n);
    fflush(stdin);
//    for (int i = 0; i < lop->n; i++) {
//        printf("NHap ma sv:");
//        gets(lop->dssv[i].masv);
//        fflush(stdin);
//        printf("\n Nhap ho ten: ");
//        gets(lop->dssv[i].hoten);
//        fflush(stdin);
//        printf("\n Nhap diem tb:");
//        scanf("%f", &lop->dssv[i].dtb);
//    }
}

//void sapxep_dssv(Sinhvien ds[], int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n + 1; j++) {
//            if (ds[i].dtb < ds[j].dtb) {
//                Sinhvien temp = ds[i];
//                ds[i] = ds[j];
//                ds[j] = temp;
//            }
//        }
//    }
//}

//void in_dssv(Sinhvien ds[], int n) {
//    printf("%-20s %-30s %-7s\n", "MSV", "Ho ten", "DTB");
//    for (int i = 0; i < n; i++) {
//        printf("%d %-20s %-30s %-7.2f\n", i, ds[i].masv, ds[i].hoten, ds[i].dtb);
//    }
//}

int main() {
    Lop *lop;
    nhap_dssv(lop);
//    sapxep_dssv(lop->dssv, lop->n);
//    in_dssv(lop->dssv, lop->n);
    return 0;
}
