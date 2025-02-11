#include<iostream>
using namespace std;
int main(){
    class Graph{
        int vertices;
        Graph(int x){
            vertices = x;
            edges.resize(vertices);
        }
        void addNewEdge(int v,int u){
            edges[u].push_back(v);
            edges[v].push_back(u);

        }
        void BFS(int start){
            queue<int> que;
            vector<int> visited= vector<int>(n,0);
            que.push_back(start);
            while(!que.empty()){
                int y = que.front();
                que.pop();
                cout<<y<<" ";
                vector<int> friends = edges[y];
                for(auto friend : friends){
                    if(!visited[friends]){
                        que.push_back(friend);
                        visited[friend]=true;
                        
                    }
                }
            }
        }
    }

}
