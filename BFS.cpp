/*
Change made to check branch change Github! 
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int matrix[5][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };

    //Intializing the visited array to false
    bool visited[5] = {0, 0, 0, 0, 0};
    queue<int> bfs;

    //Intializing the initial node
    bfs.push(0);
    visited[0] = 1;
    int node = bfs.front();
    cout<<node;
    bfs.pop();

    while(true){
        for(int i=0;i<5;i++){
            if(matrix[node][i] == 1 && visited[i] == 0){
                bfs.push(i);
                visited[i]=1;
            }
        }
        if(bfs.empty())
            break;
        else{
            node = bfs.front();
            bfs.pop();
            cout<<"->"<<node;
        }
    }
}