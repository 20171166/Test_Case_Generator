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
            for(int j = 0; j < 128; j++){
                stringstream stream;
                stream << dec << (j + 1);
                string result(stream.str());
                writeF << result << "\n";
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeF.close();

    
    ofstream writeK;
    writeK.open("/Users/laurent01/Desktop/kernel.txt",ios::in|ios::app);
    if(writeK.is_open()){
        for(int i = 0; i < 128; i++){
            for(int j = 0; j < 9; j++){
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << (i + 1);
                    string result(stream.str());
                    writeK << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeK.close();

    return 0;
}
