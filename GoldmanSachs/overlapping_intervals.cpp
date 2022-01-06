#include <iostream>
using namespace std;

int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        if(L1[0]>R2[0]||L2[0]>R1[0])
           return false;
       if(R1[1]>L2[1]||R2[1]>L1[1])
           return false;
       return true;
    }
    int main(){
        int L1[2] = {0, 10};
        int L2[2] = {10, 0};
        int R1[2] = {5, 5};
        int R2[2] = {15, 0};
        if(doOverlap(L1, R1, L2, R2) == true){
            cout << "Its OverLaping";
        }
        else{
            cout << "Its not overlapping";
        }
    }