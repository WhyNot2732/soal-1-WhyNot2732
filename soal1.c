/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : R. Damar Prawiro Kusumo Sudradjat (13224109)
 *   Nama File           : Modul1_soal1.c
 *   Deskripsi           : Sebuah gerbang keamanan memproses data satu peneliti
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int izin, suhu, radiasi, jam;
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    if (!(1 <= izin <= 3) || (radiasi <0) || !(0 <= jam <= 23))
    {
        printf("TOLAK\n");
        return 0;
    }
    
    if (radiasi >= 6)
    {
        printf("TOLAK\n");
    } else if (suhu >= 390)
    {
        printf("KARANTINA\n");
    } else if ((izin == 1) && ((jam < 6) || (jam >20)))
    {
        printf("TOLAK\n");
    } else if (izin == 1)
    {
        printf("MASUK\n");
    } else if ((izin == 2) && (radiasi <= 2) && (8 <= jam <= 18))
    {
        printf("MASUK\n");
    } else if (izin == 2)
    {
        printf("PEMERIKSAAN\n");
    } else if ((izin == 3) && (radiasi == 0) && suhu < 380)
    {
        printf("MASUK\n");
    }else{
        printf("TOLAK\n");
    }

    return 0;
}
