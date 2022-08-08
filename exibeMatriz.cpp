#include<iostream>

using namespace std;

void exibeMatriz(int n, int m, int** MA){
    for(int i=0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << MA[i][j] << " ";
        }
        cout << endl;
    }
}


