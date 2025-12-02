#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    cout << "\nNama : Muhamad Johan Putra Pratama\n";
    cout << "NIM    : 25104410007\n";
    cout << "Prodi  : Teknik Informatika A1\n";
    cout << "Tugas  : Praktikum 4 - Perkalian Matriks 4x4\n";

    int angka;

    cout << "\n=== Program Perkalian Matriks 4x4 ===\n\n";
    
    int A[4][4] = 
    {
        {1, 0, 2, 0},
        {0, 1, 0, 1},
        {2, 0, 1, 0},
        {0, 2, 0, 1},
    };

    int B[4][4] = 
    {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2},
    };

    int C[4][4] = {0};

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            for (int k = 0; k < 4; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matriks A:\n";
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            cout << setw(4) << A[i][j] << " ";
        }
        cout << endl;
    }    
        
    cout << "\nMatriks B:\n";
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            cout << setw(4) << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n==============================\n";

    cout << "Hasil Perkalian Matriks A x B:\n";
    cout << "Matriks A x B:\n";
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            cout << setw(4) << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}