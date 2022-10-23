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
            hashTable[i] = -1;
        }
    }

    void hash_Table_Insert(){
        int e = 0;
        cout<<"How many number you want to insert : ";
        cin>>e;
        
        int k;
        for (int i = 0; i < e; i++){
            cout<<"Enter Number : ";
            cin >> k;
            cout << "Remainder : " << (k % l) << endl;
            int j;
            for (j = 0; j < l; j++){
                int place_At = (k + j) % (l);
                if (hashTable[place_At] == -1){
                    hashTable[place_At] = k;
                    break;
                }
            }
            if (j == l){
                cout << "Array Full.";
            }
        }
    }

    void check_num(int n){
        int j;
        for (j = 0; j < l; j++){            
            int find_At = (n + j) % (l);            
            if (hashTable[find_At] == n){
                cout << "Found : " << n << endl;
                break;
            }
            else if(hashTable[find_At] == -1){
                j = l;
                break;
            }
        }
        if (j == l){
            cout << "Not Found : "<< n << endl;
        }
    }

    void print(){
        cout<<"Array is :";
        cout << " [ ";
        for (int i = 0; i < l - 1; i++){
            if (hashTable[i] == -1){
                cout << 0 << ", ";
            }
            else{
                cout << hashTable[i] << ",";
            }
        }
        if (hashTable[l - 1] == -1){
            cout << 0 << " ]\n";
        }
        else{
            cout << hashTable[l - 1] << " ]";
        }
    }
};

int main(){
    hash_Table obj(17);
    obj.hash_Table_Insert();
    obj.print();
    obj.check_num(120);
    obj.check_num(153);
    obj.check_num(98);
    return 0;
}
