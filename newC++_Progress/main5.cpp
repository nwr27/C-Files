#include <iostream>

using namespace std;

const int MAX = 1000;

class ManajemenTugas {
private:
  struct Tugas {
    string nama;
    bool selesai;
  };
  Tugas tugas[MAX];
  int num_tugas = 0;

public:
  ManajemenTugas() : num_tugas(0) {}
  void TambahTugas() {
    if (num_tugas >= MAX) {
      cout << "Maaf, sudah mencapai batas maksimum tugas." << endl;
    }

    cout << "Masukkan nama tugas: ";
    cin.ignore();
    getline(cin, tugas[num_tugas].nama);
    tugas[num_tugas].selesai = false;
    num_tugas++;
    cout << "Tugas berhasil ditambahkan." << endl;
  }

  void DaftarTugas() {
    if (num_tugas == 0) {
      cout << "Tidak ada tugas saat ini." << endl;
    }

    cout << "Daftar Tugas:" << endl;
    for (int i = 0; i < num_tugas; ++i) {
      cout << i + 1 << ". ";
      cout << (tugas[i].selesai ? "[X] " : "[ ] ");
      cout << tugas[i].nama << endl;
    }
  }
  void tandaiSelesai() {
    DaftarTugas();
    int i;
    cout << "Masukkan nomor tugas yang sudah selesai: ";
    cin >> i;
    if (i <= 0 || i > num_tugas) {
      cout << "Nomor tugas tidak valid." << endl;
    }
    tugas[i - 1].selesai = true;
    cout << "Tugas '" << tugas[i - 1].nama << "' telah ditandai selesai." << endl;
  }
  void hapusTugas() {
    DaftarTugas();
    int i;
    cout << "Masukkan nomor tugas yang ingin dihapus: ";
    cin >> i;
    if (i <= 0 || i > num_tugas) {
      cout << "Nomor tugas tidak valid." << endl;
    }
    for (int j = i - 1; j < num_tugas - 1; ++j) {
      tugas[i] = tugas[i + 1];
    }
    num_tugas--;
    cout << "Tugas berhasil dihapus." << endl;
  }
};

int main() {
  ManajemenTugas Tgs;
  char pilihan;
  do {
    cout << "\n== SELAMAT DATANG DI PROGRAM MANAJEMEN TUGAS ==" << endl;
    cout << "Menu Utama:" << endl;
    cout << "a) Tambah Tugas Baru" << endl;
    cout << "b) Lihat daftar tugas" << endl;
    cout << "c) Tandai selesai" << endl;
    cout << "d) Hapus tugas" << endl;
    cout << "e) Selesai" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
    case 'a':
      Tgs.TambahTugas();
      break;
    case 'b':
      Tgs.DaftarTugas();
      break;
    case 'c':
      Tgs.tandaiSelesai();
      break;
    case 'd':
      Tgs.hapusTugas();
      break;
    case 'e':
      cout << "Terima kasih!" << endl;
      break;
    default:
      cout << "Pilihan tidak valid." << endl;
      break;
    }
  } while (pilihan != 'e');

  return 0;
}