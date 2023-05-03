#include <iostream>
void coding(int nilaiCoding) {
    if (nilaiCoding >= 80) {
        std::cout << "LOLOS" << std::endl;
    } else if (nilaiCoding >= 60) {
        std::cout << "DIPERTIMBANGKAN" << std::endl;
    } else {
        std::cout << "GAGAL" << std::endl;
    }
}

void interview(char nilaiInterview) {
    if (nilaiInterview == 'A' || nilaiInterview == 'B') {
        std::cout << "LOLOS" << std::endl;
    } else {
        std::cout << "GAGAL" << std::endl;
    }
}

int main(){
   std::cout << "Masukan Nilai Coding (0 - 100) =" << std::endl;
   int nilaiCoding;
    std::cin >> nilaiCoding;
   std::cout << "Masukan Nilai Interview (A/B/C/D/F) =" << std::endl;
   char nilaiInterview;
    std::cin >> nilaiInterview;

if (nilaiCoding > 60 && nilaiCoding <= 100 && (nilaiInterview == 'A' || nilaiInterview == 'B')) {
        std::cout << "Selamat Kamu Berhasil Menjadi Calon Programmer!" << std::endl;
    } else {
        std::cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << std::endl;
    }
    std::cin.get();
    return 0;
}