#include <iostream>
using namespace std;
int main(){
    int nilaiCoding;
   std::cout << "Masukan Nilai Coding =" << std::endl;
    std::cin >> nilaiCoding;
    char nilaiInterview;
   std::cout << "Masukan Nilai Interview =" << std::endl;
    std::cin >> nilaiInterview;

if (nilaiCoding > 60 && (nilaiInterview == 'A' || nilaiInterview == 'B')) {
        std::cout << "Selamat Kamu Berhasil Menjadi Calon Programmer!" << std::endl;
    } else {
        std::cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << std::endl;
    }
    cin.get();
    return 0;
}