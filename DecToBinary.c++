// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    bool benar = true;
    int tambah, biner;
    
    cout << "masukkan angka biner";
    cin >> biner;
    
        if(biner >= 128){
            cout << 1;
            biner = biner - 128;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 64){
            cout << 1;
            biner = biner - 64;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 32){
            cout << 1;
            biner = biner - 32;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 16){
            cout << 1;
            biner = biner - 16;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 8){
            cout << 1;
            biner = biner - 8;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 4){
            cout << 1;
            biner = biner - 4;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 2){
            cout << 1;
            biner = biner - 2;
        }
        else{
            cout << 0;
        }
        
        if(biner >= 1){
            cout << 1;
            biner = biner - 1;
        }
        else{
            cout << 0;
    }
    return 0;
}
