#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
vector <int> adjList[9];
char nodes[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'J', 'K'};
void BFS(int u){
    queue <int> q ;
    bool visited[9] = {false};
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << nodes[v] << ", ";
        for (int element : adjList[v]){
            if(!visited[element]){
                q.push(element);
            }
            visited[element] = true;
        }

    }

}
void DFS(int u){
    stack <int> s ;
    bool visited[9] = {false};
    s.push(u);
    visited[u] = true;
    while (!s.empty())
    {
        int v = s.top();
        s.pop();
        cout << nodes[v] << ", ";
        for (int element : adjList[v]){
            if(!visited[element]){
                s.push(element);
            }
            visited[element] = true;
        }

    }

}
int main (){
    //A --> FCB
    adjList[0].push_back(5);
    adjList[0].push_back(2);
    adjList[0].push_back(1);
    //B --> ACG
    adjList[1].push_back(0);
    adjList[1].push_back(2);
    adjList[1].push_back(6);
    //c --> ABDEFG
    adjList[2].push_back(0);
    adjList[2].push_back(1);
    adjList[2].push_back(3);
    adjList[2].push_back(4);
    adjList[2].push_back(5);
    adjList[2].push_back(6);
    //D --> CFEG
    adjList[3].push_back(2);
    adjList[3].push_back(5);
    adjList[3].push_back(4);
    adjList[3].push_back(6);
    //E --> CDGJK
    adjList[4].push_back(2);
    adjList[4].push_back(3);
    adjList[4].push_back(6);
    adjList[4].push_back(7);
    adjList[4].push_back(8);
    //F --> ACD
    adjList[5].push_back(0);
    adjList[5].push_back(2);
    adjList[5].push_back(3);
    //G --> BCEK
    adjList[6].push_back(1);
    adjList[6].push_back(2);
    adjList[6].push_back(4);
    adjList[6].push_back(8);
    //J --> DEK
    adjList[7].push_back(3);
    adjList[7].push_back(4);
    adjList[7].push_back(8);
    //K --> EGJ
    adjList[8].push_back(4);
    adjList[8].push_back(6);
    adjList[8].push_back(7);

    for(int i= 0; i < 9; i++){
        cout << nodes[i] << "-->";
        for (int element : adjList[i]){
            cout << nodes[element];
        }
        cout << endl;
    }
cout << "BFS -->";
BFS(0);
 cout << endl;
 cout  <<  "DFS -->";
DFS(0);
    return 0;
}
