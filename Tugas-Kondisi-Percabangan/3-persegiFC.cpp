#include <iostream>
using namespace std;
int main(){

int nomorPunggung;
   std::cout << "Masukan Nomor Punggung =" << std::endl;
    std::cin >> nomorPunggung;

if (nomorPunggung % 2 == 0){
    std::cout << "Target Attacker" << std::endl;
    if (nomorPunggung > 50 && nomorPunggung < 100){
        std::cout << "Berhak dipilih menjadi capten team" << std::endl;
    }
} else if(){ 
    std::cout << "Defender" << std::endl;
    if (nomorPunggung > 90){
    std::cout << "Playmaker" << std::endl;
}  
    if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0){
    std::cout << "Keeper" << std::endl;
} 
}
    cin.get();
    return 0;
}