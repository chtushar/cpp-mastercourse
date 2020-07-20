#include <bits/stdc++.h>
using namespace std;


bool findPath(char maze[][10],int n,int m,int i,int j,bool visited[][10]){

    //base
    if(i == n-1 && j == m-1){
        visited[i][j] = true;
        return true;
    }
    //recursive
    bool top,right,down,left;
    //top
    if(i-1 >= 0 && maze[i-1][j] != 'X' && visited[i-1][j] == 0){
      visited[i][j] = 1;
      top = findPath(maze,n,m,i-1,j,visited);
    }
    //right
    if(j+1<m && maze[i][j+1] != 'X' && visited[i][j+1] == 0){
      visited[i][j] = 1;
      right = findPath(maze,n,m,i,j+1,visited);
    }
    //down
    if(i+1 < n && maze[i+1][j] != 'X' && visited[i+1][j] == 0){
      visited[i][j] = 1;
      down = findPath(maze,n,m,i+1,j,visited);
    }
    //left
    if(j-1 >= 0 && maze[i][j-1] != 'X' && visited[i][j-1] == 0){
      visited[i][j] = 1;
      left = findPath(maze,n,m,i,j-1,visited);
    }

    if(top || right || down || left){
      return true;
    }


    visited[i][j] = 0;
    return true;
}


int main() {

  int n,m;
  cin >> n >> m;
  char maze[10][10];
  bool visited[10][10] = {false};

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> maze[i][j];
    }
  }

  if(findPath(maze,n,m,0,0,visited)){
    for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout << visited[i][j] << " ";
    }
    cout << endl;
    }
  }else{
    cout << -1 << endl;
  }



  return 0;
}