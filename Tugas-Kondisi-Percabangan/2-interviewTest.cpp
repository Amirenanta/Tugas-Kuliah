#include <iostream>
using namespace std;
int main(){
    int nilaiCoding;
   std::cout << "Masukan Nilai Coding =" << std::endl;
    std::cin >> nilaiCoding;
    char nilaiInterview;
   std::cout << "Masukan Nilai Interview =" << std::endl;
    std::cin >> nilaiInterview;

    if (nilaiCoding < 60){
        std::cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << std::endl;
    }
    else if (!nilaiInterview == 'A' || 'B'){
        std::cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << std::endl;
    }
    else if (60 < nilaiCoding < 100) {
        std::cout << "Selamat Kamu Berhasil Menjadi Calon Programmer!" << std::endl;
    } else std::cout << "Maaf Input yang Kamu Masukan Tidak Sesuai." << std::endl;


    cin.get();
    return 0;
}