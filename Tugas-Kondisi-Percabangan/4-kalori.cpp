#include <iostream>
using namespace std;
int main(){
    int lari;
   std::cout << "Lama Anda Berlari (Dalam Menit) =" << std::endl;
    std::cin >> lari;
    int pushUP;
   std::cout << "Lama Anda Push-Up (Dalam Menit) =" << std::endl;
    std::cin >> pushUP;
    int plank;
   std::cout << "Lama Anda Plank (Dalam Menit) =" << std::endl;
    std::cin >> plank;

    int kaloriLari = (lari / 5) * 60;
    int kaloriPushUp = (pushUP / 30) * 200;
    int kaloriPlank = plank * 5;
    int totalKalori = kaloriLari + kaloriPushUp + kaloriPlank;

    cout << "Total Kalori yang Dibakar Adalah = " << totalKalori << " Kalori" << endl;

    cin.get();
    return 0;
}