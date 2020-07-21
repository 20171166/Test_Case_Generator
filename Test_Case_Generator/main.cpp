#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    
    ofstream writeF;
    writeF.open("/Users/laurent01/Desktop/feature.txt",ios::in|ios::app);
    if(writeF.is_open()){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 25; j++){
                    stringstream stream;
                    stream << dec << (i + 1) * (j + 1);
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
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 9; j++){
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << (k+1);
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
