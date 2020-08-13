#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    
    unsigned int count = 0;
    
    ofstream writeIF;
    writeIF.open("/Users/laurent01/Desktop/IF.txt",ios::in|ios::app);
    if(writeIF.is_open()){
        for(int i = 0; i < 1000 ; i++){ // Input Feature Size
            stringstream stream;
            stream << dec << i + 1;
            string result(stream.str());
            writeIF << result << "\n";
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeIF.close();
    
    ofstream writeIFR;
    writeIFR.open("/Users/laurent01/Desktop/Buffer_Test.txt",ios::in|ios::app);
    if(writeIFR.is_open()){
        for(int i = 0; i < 1000; i++){
            for(int j = 0; j < 4; j++){ // Vector Lane Size
                stringstream stream;
                stream << dec << i + 1;
                string result(stream.str());
                writeIFR << result << "\n";
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeIFR.close();

    ofstream writeW;
    writeW.open("/Users/laurent01/Desktop/Weight.txt",ios::in|ios::app);
    if(writeW.is_open()){
        for(int i = 0; i < 1000 ; i++){
            for(int j = 0; j < 1000; j++){
                stringstream stream;
                stream << dec << (i + 1) * (j + 1);
                string result(stream.str());
                writeW << result << "\n";
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeW.close();
    
    ofstream writeWT;
    writeWT.open("/Users/laurent01/Desktop/Weight_DRAM.txt",ios::in|ios::app);
    if(writeWT.is_open()){
        for(int i = 0; i < 250; i++){
            for(int j = 0; j < 1000; j++){
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << (4 * i + 1) * (j + 1) + (j + 1) * k;
                    string result(stream.str());
                    writeWT << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeWT.close();
    
    ofstream writeF;
    writeF.open("/Users/laurent01/Desktop/feature.txt",ios::in|ios::app);
    if(writeF.is_open()){
        for(int i = 0; i < 88 * 88; i++){
            for(int j = 0; j < 25; j++){
                stringstream stream;
                stream << dec << i * j % 7 + 1;
                string result(stream.str());
                writeF << result << "\n";
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeF.close();

    ofstream writeFS;
    writeFS.open("/Users/laurent01/Desktop/Buffer_Test.txt",ios::in|ios::app);
    if(writeFS.is_open()){
        for(int i = 0; i < 88 * 88; i++){
            for(int j = 0; j < 25; j++){
                for(int k = 0; k < 8; k++){
                    stringstream stream;
                    stream << dec << i * j % 7 + 1;
                    string result(stream.str());
                    writeFS << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeFS.close();

    
    ofstream writeK1;
    writeK1.open("/Users/laurent01/Desktop/kernel1.txt",ios::in|ios::app);
    if(writeK1.is_open()){
        for(int i = 0; i < 9; i++){ // Kernel Size * Kernel Size
            for(int j = 0; j < 25; j++){ // Input Channel Size
                for(int k = 0; k < 8; k++){
                    stringstream stream;
                    stream << dec << i * j % 9 + 1;
                    string result(stream.str());
                    writeK1 << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeK1.close();

    ofstream writeK2;
    writeK2.open("/Users/laurent01/Desktop/kernel2.txt",ios::in|ios::app);
    if(writeK2.is_open()){
        for(int i = 0; i < 9; i++){ // Kernel Size * Kernel Size
            for(int j = 0; j < 25; j++){ // Input Channel Size
                for(int k = 0; k < 8; k++){
                    stringstream stream;
                    stream << dec << i * j % 11 + 1;
                    string result(stream.str());
                    writeK2 << result << "\n";
                }
            }
        }
    }
     else cout << "ERROR : File is not open" << endl;
     writeK2.close();

    ofstream writeK3;
    writeK3.open("/Users/laurent01/Desktop/kernel3.txt",ios::in|ios::app);
    if(writeK3.is_open()){
        for(int i = 0; i < 9; i++){ // Kernel Size * Kernel Size
            for(int j = 0; j < 100; j++){ // Input Channel Size
                for(int k = 0; k < 8; k++){
                    stringstream stream;
                    stream << dec << i * j % 22 + 1;
                    string result(stream.str());
                    writeK3 << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeK3.close();

    ofstream writeK4;
    writeK4.open("/Users/laurent01/Desktop/kernel4.txt",ios::in|ios::app);
    if(writeK4.is_open()){
        for(int i = 0; i < 9; i++){ // Kernel Size * Kernel Size
            for(int j = 0; j < 4; j++){ // Input Channel Size
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << 1;
                    string result(stream.str());
                    writeK4 << result << "\n";
                }
            }
        }
    }

    else cout << "ERROR : File is not open" << endl;
    writeK4.close();


    return 0;
}
