#include<iostream>
using namespace std;

//Fungsi Linear Search
int linearSearch(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

//Fungsi Binary Search
int binarySearch(int arr[], int n, int x){
    for(int i=n; i>=0; i--){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, m, x;
    cin >> n >> m;
    
    int array_A[n];
    int array_B[m];

    //Input array A
    for(int i=0; i<n; i++){
        cin >> array_A[i];
    }

    //Input array B
    for(int i=0; i<m; i++){
        cin >> array_B[i];
    }

    //Input nilai yang dicari
    cin >> x;

    //Pencarian
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);
    cout << index_A << " " << index_B <<endl;

    //Output hasil pencarian : Isilah Output sesuai Deskripsi Soal
    if(index_A != -1 && index_B != -1){
        cout << "KEDUANYA " << index_A << " " << index_B <<endl;
    } else if(index_A == -1 && index_B == -1){
        cout << "TIDAK DITEMUKAN" <<endl;
    } else if(index_A != -1){
        cout << "BHASA " << index_A <<endl;
    } else if(index_B != -1){
        cout << "SENA " << index_B <<endl;
    }
    
    return 0;
}