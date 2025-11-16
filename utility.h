#ifndef UTILITY_H
#define UTILITY_H

#include <time.h>

                                            //ENUMERATION
// Kategori Buku
typedef enum { 
    FIKSI, NON_FIKSI, KOMIK, MAJALAH, REFERENSI 
} Kategori;

// Status Buku
typedef enum { 
    TERSEDIA, DIPINJAM 
} Status;

                                           //UTILITY
void clear_input_buffer(void);
void pause_screen(void);
const char* kategori_string(Kategori k);
const char* status_string(Status s);

// Tanggal
void get_tanggal_sekarang(char* buffer);
void tambah_hari(const char* tanggal, int hari, char* hasil);
int hitung_selisih_hari(const char* t1, const char* t2);

// Pencarian data
int cari_index_buku(const char* id);
int cari_index_anggota(const char* id);
int hitung_pinjaman_aktif(const char* id_anggota);

#endif