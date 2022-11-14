#include <iostream>
using namespace std;

void build_heap(int array[], int n, int i){
    int index = i;
    int l = (2*i) + 1;
    int r = (2*i) + 2;

    if (l < n && array[l] < array[index]){
        index = l;
    }

    if (r < n && array[r] < array[index]){
        index = r;
    }

    if (index != i){
        swap(array[i], array[index]);
        build_heap(array, n, index);
    }
}

void heapSort(int array[], int n){
    for (int i = n / 2 - 1; i >= 0; i--){
        build_heap(array, n, i);
    }

    for (int i = n - 1; i >= 0; i--){
        swap(array[0], array[i]);
        build_heap(array, i, 0);
    }
}

int main(){
    cout << "Enter the length of the array : ";
    int n;
    cin >> n;
    cout << "Enter array elements in proper sequence seperated by space : ";
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    heapSort(array, n);
    cout<<endl;

    cout << "Array in increasing order : ";
    for (int i = n - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
    cout<<endl;
    
    cout << "Array in decreasing order : ";
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
}