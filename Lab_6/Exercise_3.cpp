#include <bits/stdc++.h>
using namespace std;

class hash_Table{
public:
    int l;
    int p;
    int hashTable[];
    hash_Table(int m,int p){
        this->l = m;
        this->p = p;
        hashTable[l];
        for (int i = 0; i < l; i++){
            hashTable[i] = -1;
        }
    }

    void Double_Hashing(){
        int e = 0;
        cout<<"How many number you want to insert : ";
        cin>>e;
        int k;
        for (int i = 0; i < e; i++){
            cout<<"Enter Number : ";
            cin >> k;
            int j;
            for (j = 0; j < l; j++){
                int hp = 1 + k%p;
                int place_At = (k + j*hp) % (l);
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
            int hp = 1 + n%p;            
            int find_At = (n + j*hp) % (l);            
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
        cout<<"Array is : ";
        cout << " [ ";
        for (int i = 0; i < l - 1; i++){
            if (hashTable[i] == -1){
                cout << 0 << ",";
            }
            else{
                cout << hashTable[i] << ",";
            }
        }
        if (hashTable[l - 1] == -1){
            cout << 0 << "]" << endl;
        }
        else{
            cout << hashTable[l - 1] << "]" << endl;
        }
    }
};

int main(){
    hash_Table obj(17,11);
    obj.Double_Hashing();
    obj.print();
    obj.check_num(120);
    obj.check_num(153);
    obj.check_num(162);

    return 0;
}
