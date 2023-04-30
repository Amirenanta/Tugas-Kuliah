#include <iostream>
int main(){
    int nilaiCoding;
   std::cout << "Masukan Nilai Coding (0 - 100) =" << std::endl;
    std::cin >> nilaiCoding;
    char nilaiInterview;
   std::cout << "Masukan Nilai Interview (A/B/C/D/F) =" << std::endl;
    std::cin >> nilaiInterview;

if (nilaiCoding > 60 && nilaiCoding <= 100 && (nilaiInterview == 'A' || nilaiInterview == 'B')) {
        std::cout << "Selamat Kamu Berhasil Menjadi Calon Programmer!" << std::endl;
    } else {
        std::cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << std::endl;
    }
    std::cin.get();
    return 0;
}