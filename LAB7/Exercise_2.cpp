#include <bits/stdc++.h>
using namespace std;

struct Node{
public:
    int d;
    vector<Node *> children;
    Node(int d){
        this->d = d;
    }
};

Node *take_input(){
    int d, n;
    cout << "Data : ";
    cin >> d;
    if (d == -1){
        return NULL;
    }
    Node *temp = new Node(d);
    cout << "Enter the number of children of " << d << " : ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter " << i+1 << "th child of " << d << endl;
        Node *child = take_input();
        temp->children.push_back(child);
    }
    return temp;
}

vector<vector<int>> breadth_first_search(Node *root){
    if (root == NULL){
        return {};
    }
    queue<Node *> q;
    q.push(root);
    vector<vector<int>> ans;
    while (!q.empty()){
        int n = q.size();
        vector<int> v;
        for (int i = 0; i < n; i++){
            Node *temp = q.front();
            q.pop();
            for (auto i : temp->children){
                q.push(i);
            }
            v.push_back(temp->d);
        }
        ans.push_back(v);
    }
    return ans;
}

int main(){
    Node *root = take_input();
    vector<vector<int>> ans = breadth_first_search(root);
    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
    }
return 0;
}