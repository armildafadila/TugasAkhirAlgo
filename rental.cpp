#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct motor
{
    char namaMtr[50];
    char plat[10];
    char status[20];
    char penyewa[60];
    int harga, tahun, nama, total;
    motor *next;
};

motor *head = NULL;

// LOADING FILE

// SIMPAN FILE

// TAMBAH DATA MOTOR

// HAPUS DATA MOTOR

// SEWA MOTOR

// KEMBALI MOTOR

// CARI BERDASARKAN NAMA
// CARI BERDASARKAN PLAT NOMOR

// URUTKAN HARGA (asc)
// URUTKAN NAMA (A-Z)

// TAMPIL SEUA DATA
