#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    
    ofstream writeFILE;
    writeFILE.open("/Users/laurent01/Desktop/kernel.txt",ios::in|ios::app);
    if(writeFILE.is_open()){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 9; j++){
                for(int k = 0; k < 4; k++){
                    stringstream stream;
                    stream << dec << (k+1);
                    string result(stream.str());
                    writeFILE << result << "\n";
                }
            }
        }
    }
    else cout << "ERROR : File is not open" << endl;
    writeFILE.close();

    

    return 0;
}
