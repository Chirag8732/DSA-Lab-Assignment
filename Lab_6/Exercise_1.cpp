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
	        int k;
	        for (int i = 0; i < 5; i++){
	            cin >> k;
	            int j;
	            for (j = 0; j < l; j++){
	                int place_At = (k + j * 11) % (l);
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
	            int find_At = (n + j * 11) % (l);
	            if (hashTable[find_At] == n){
	                cout << endl <<"Found : " << n << endl;
	                break;
	            }
	            else if (hashTable[find_At] == -1){
	                j = l;
	                break;
	            }
	        }
	        if (j == l){
	            cout << endl <<"Not Found : " << n << endl;
	        }
	    }
	
	    void print(){
	        cout << "[ " << hashTable[0];
	        for (int i = 1; i < l - 1; i++){
	            cout << "," << hashTable[i];
	        }
	        cout << " ]";
	    }
	};
	
	int main(){
	    hash_Table obj(17);
	    obj.hash_Table_Insert();
	    obj.print();
	    obj.check_num(120);
	    obj.check_num(153);
	    obj.check_num(162);
	
	    hash_Table obj1(37);
	    obj1.hash_Table_Insert();
	    obj1.print();
	    obj1.check_num(120);
	    obj1.check_num(153);
	    obj1.check_num(164);
	    return 0;
	}
