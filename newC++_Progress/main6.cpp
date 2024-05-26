#include <iostream>
#include <string>

// Struktur data untuk menyimpan kontak
struct Kontak {
  std::string nama;
  std::string alamat;
  std::string nomorTelepon;
  std::string email;
};

// Array untuk menyimpan daftar kontak
Kontak daftarKontak[100];
int jumlahKontak = 0;

// Fungsi untuk menampilkan menu utama
void menuUtama() {
  std::cout << "Manajemen Kontak\n";
  std::cout << "--------------\n";
  std::cout << "a) Tambah kontak baru\n";
  std::cout << "b) Cari kontak\n";
  std::cout << "c) Tampilkan semua kontak\n";
  std::cout << "d) Hapus kontak\n";
  std::cout << "e) Selesai\n";
  std::cout << "--------------\n";
  std::cout << "Pilih opsi: ";
}

// Fungsi untuk menambahkan kontak baru
void tambahKontak() {
  Kontak kontak;
  std::cout << "Masukkan nama: ";
  std::cin >> kontak.nama;
  std::cout << "Masukkan alamat: ";
  std::cin.ignore(); // Membersihkan input buffer
  std::getline(std::cin, kontak.alamat);
  std::cout << "Masukkan nomor telepon: ";
  std::cin >> kontak.nomorTelepon;
  std::cout << "Masukkan email: ";
  std::cin >> kontak.email;

  // Menambahkan kontak ke dalam array
  daftarKontak[jumlahKontak++] = kontak;

  std::cout << "Kontak berhasil ditambahkan!\n";
}

// Fungsi untuk mencari kontak
void cariKontak() {
  std::string nama;
  std::cout << "Masukkan nama kontak yang ingin dicari: ";
  std::cin >> nama;

  // Mencari kontak dengan nama yang diberikan
  bool found = false;
  for (int i = 0; i < jumlahKontak; ++i) {
    if (daftarKontak[i].nama == nama) {
      // Menampilkan informasi kontak
      std::cout << "Nama: " << daftarKontak[i].nama << '\n';
      std::cout << "Alamat: " << daftarKontak[i].alamat << '\n';
      std::cout << "Nomor Telepon: " << daftarKontak[i].nomorTelepon << '\n';
      std::cout << "Email: " << daftarKontak[i].email << '\n';
      found = true;
    //   break;
    }
  }

  if (!found) {
    std::cout << "Kontak tidak ditemukan!\n";
  }
}

// Fungsi untuk menampilkan semua kontak
void tampilkanSemuaKontak() {
  for (int i = 0; i < jumlahKontak; ++i) {
    std::cout << "Kontak " << i + 1 << '\n';
    std::cout << "-------\n";
    std::cout << "Nama: " << daftarKontak[i].nama << '\n';
    std::cout << "Alamat: " << daftarKontak[i].alamat << '\n';
    std::cout << "Nomor Telepon: " << daftarKontak[i].nomorTelepon << '\n';
    std::cout << "Email: " << daftarKontak[i].email << '\n';
    std::cout << '\n';
  }
}

// Fungsi untuk menghapus kontak
void hapusKontak() {
  std::string nama;
  std::cout << "Masukkan nama kontak yang ingin dihapus: ";
  std::cin >> nama;

  bool found = false;
  for (int i = 0; i < jumlahKontak; ++i) {
    if (daftarKontak[i].nama == nama) {
      // Menggeser semua kontak setelah kontak yang dihapus
      for (int j = i; j < jumlahKontak - 1; ++j) {
        daftarKontak[j] = daftarKontak[j + 1];
      }
      --jumlahKontak;
      std::cout << "Kontak berhasil dihapus!\n";
      found = true;
      break;
    }
  }

  if (!found) {
    std::cout << "Kontak tidak ditemukan!\n";
  }
}

int main() {
  char pilihan;

  while (true) {
    menuUtama();
    std::cin >> pilihan;

    switch (pilihan) {
    case 'a':
      tambahKontak();
      break;
    case 'b':
      cariKontak();
      break;
    case 'c':
      tampilkanSemuaKontak();
      break;
    case 'd':
      hapusKontak();
      break;
    case 'e':
      std::cout << "Terima kasih telah menggunakan program manajemen kontak!\n";
      return 0;
    default:
      std::cout << "Pilihan tidak valid!\n";
      break;
    }
  }
}