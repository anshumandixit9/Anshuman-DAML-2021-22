#include<iostream>
#include<stack>
using namespace std;
int main(){
    int matrix[5][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };

    //Initializing the full visited nodes as false    
    bool visited[5] = {0, 0, 0, 0, 0};
    stack<int> dfs;
    
    //Initializing the initial node
    dfs.push(0);

    int node = dfs.top();
    dfs.pop();
    visited[0] = 1;
    cout<<node;

    while(true){

        for(int i=0;i<5;i++){
            if(matrix[node][i] == 1 && visited[i] == 0 ){
                dfs.push(i);
                visited[i]  = 1;
            }
        }

        if(dfs.empty())
            break;
        else{
            node = dfs.top();
            cout<<"->"<<node;            
            dfs.pop();
        }
    }
}