#include <bits/stdc++.h>
using namespace std;

class hash_Table{
public:
    int l;
    int hashTable[];
    hash_Table(int m){
        this->l = m;
        hashTable[l];
        for (int i = 0; i < l; i++){
            hashTable[i] = 0;
        }
    }

    void bit_Hash(){
        int e = 0;
        cout << "How many number you want to insert : ";
        cin >> e;
        int k;
        for (int i = 0; i < e; i++){
            cout << "Enter Number : ";
            cin >> k;
            int place_At = k % l;
            hashTable[place_At] = 1;
        }
    }

    void check_num(int n){
        int find_At = n % l;
        if (hashTable[find_At] == 1){
            cout << "Found : " << n << endl;
        }
        else{
            cout << "Not found : " << n << endl;
        }
    }

    void print(){
        cout << "Array is : ";
        cout << "[" << hashTable[0];
        for (int i = 1; i < l - 1; i++){
            cout << "," << hashTable[i];
        }
        cout << "]" << endl;
    }
};

int main(){
    hash_Table obj(17);
    obj.bit_Hash();
    obj.print();
    obj.check_num(120);
    obj.check_num(153);
    obj.check_num(162);

    return 0;
}
