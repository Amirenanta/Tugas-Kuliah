#include <iostream>
using namespace std;
int main()
{
   string nama;
   std::cout << "Masukan Nama Suspect=" << std::endl;
    std::cin >> nama;
    int umur;
   std::cout << "Masukan Umur Suspect =" << std::endl;
    std::cin >> umur;
    string tempatTinggal;
   std::cout << "Masukan Tempat Tinggal Suspect =" << std::endl;
    std::cin >> tempatTinggal;
    int tabungan;
   std::cout << "Masukan Jumlah Uang Tabungan Suspect (dalam US dolar) = " << std::endl;
    std::cin >> tabungan;
    
if (nama == "Underboss" || "Don" || "Capo"){
      if ((nama == "Don") && (umur >= 40) && (tempatTinggal == "New York" || "Havana" || "Nevada") && (tabungan > 10000000)) {
        std::cout << nama << " Kemungkinan adalah seorang anggota mafia dengan [pangkat]." << std::endl;
    }
    else if ((nama == "Underboss") && (25 <= umur <= 40) && (tempatTinggal == "New Jersey" || "Manhattan" || "Nevada") && (1000000 < tabungan < 2000000)) {
        std::cout << nama << " Kemungkinan adalah seorang anggota mafia dengan [pangkat]." << std::endl;
    }
    else if ((nama == "Capo") && (18 <= umur <= 24) && (tempatTinggal == "California" || "Detroit" || "Boston") && (tabungan > 10000000)) {
        std::cout << nama << " Kemungkinan adalah seorang anggota mafia dengan [pangkat]." << std::endl;
    }
    
     else std::cout << nama << " Tidak Mencurigakan." << std::endl;
 }
    cin.get();
    return 0;
}
