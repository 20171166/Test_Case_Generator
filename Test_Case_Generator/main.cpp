#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    
    unsigned int count = 0;
    
    ofstream writeF;
    writeF.open("/Users/laurent01/Desktop/feature.txt",ios::in|ios::app);
    if(writeF.is_open()){
        for(int i = 0; i < 25; i++){
            for(int j = 0; j < 280; j++){
                stringstream stream;
                stream << dec << (i * j) % 99 + 1 ;
                string result(stream.str());
                writeF << result << "\n";
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeF.close();

    
    ofstream writeK1;
    writeK1.open("/Users/laurent01/Desktop/kernel1.txt",ios::in|ios::app);
    if(writeK1.is_open()){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 280; j++){
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << (i * j) % 99 + 1;
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
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 280; j++){
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << (i * j) % 99 + 1;
                    string result(stream.str());
                    writeK2 << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeK2.close();


    return 0;
}
