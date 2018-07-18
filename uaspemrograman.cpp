#include <iostream>
using namespace std;

class SalesPerson{
private :
       double sales[12];
public :
    SalesPerson(){
    for(int x=0;x<12;x++){
        sales [x]= 0;
    }
    }
    void setSales(int bln,double nominal){
        bln = bln - 1;

        sales[bln] = nominal;
        //cout << "Isi " << sales[0];
    }
    void setAllSales(){
   double input,jumlah=0;
    for(int p=1;p<=12;p++){
        cout << "Gaji pokok bulan ke-" << p << " = ";
        cin >> input;
        //jumlah = sales[p-1] + input;

        setSales(p,input);
    }
    }
    void printAnnualSales(){
        double tahun=0;
        for(int y=1;y<=12;y++){
                tahun += sales[y-1];
           
        }
        cout << "Total gaji setahun= " << tahun << endl;
    }
};

int main(){

SalesPerson data;
data.setSales(3,200);
cout << endl << endl;
data.setAllSales();
data.printAnnualSales();
}
