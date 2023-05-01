#include <iostream>

using namespace std;

int main(){
    inicio:
    for(int n = 0; n < 1000; n++){
        cout << "==============" << endl;
    }
    for(int i = 1000; i < 2000; i++){
        cout << "============================" << endl;
    }
    for(int a = 2000; a < 3000; a++){
        cout << "==========================================" << endl;
    }
    for(int b = 3000; b < 4000; b++){
        cout << "========================================================" << endl;
    }
    for(int c = 4000; c < 5000; c++){
        cout << "======================================================================" << endl;
    }
    for(int d = 5000; d < 6000; d++){
        cout << "====================================================================================" << endl;
    }
    for(int e = 6000; e < 7000; e++){
        cout << "==================================================================================================" << endl;
    }
    for(int f = 7000; f < 8000; f++){
        cout << "================================================================================================================" << endl;
    }
    for(int g = 8000; g < 9000; g++){
        cout << "==============================================================================================================================" << endl;
    }
    for(int g = 9000; g < 10000; g++){
        cout << "============================================================================================================================================" << endl;
    }
    for(int g = 10000; g < 11000; g++){
        cout << "=============================================================================================================================================================" << endl;
    }
    for(int h = 11000; h < 12000; h++){
        cout << " SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS" << endl;
        cout << " SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS" << endl;
        cout << " SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS    SUCESS" << endl;
    }

    goto inicio;

    return 0;
}