#include <iostream>
int main(){
    int tarif = 0;
    int umur;
   std::cout << "Masukkan Umur Anak =" << std::endl;
    std::cin >> umur;
    int tinggiBadan;
   std::cout << "Masukkan Tinggi Badan Anak(dalam cm) =" << std::endl;
    std::cin >> tinggiBadan;
    
    if (umur < 1){
        std::cout << "Dilarang Masuk" << std::endl;
        return 0;
    } else if (umur < 3){
        tarif += 30000;
        if(tinggiBadan > 70){
            tarif += 10000;
        }
    } else if (umur < 7){
        tarif += 40000;
        if (tinggiBadan > 120){
            tarif += 15000;
        }
    } else if (umur < 10){
        tarif += 50000;
        if (tinggiBadan > 150){
            tarif += 20000;
        }
    } else {
        tarif += 80000;
    }
    
    std::cout << "Tarif Wahana Untuk Anak Anda Adalah Rp." << tarif << std::endl;
    std::cin.get();
    return 0;
}