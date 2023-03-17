#include<bits/stdc++.h>
using namespace std; 
const int V = 10; //인접행렬
bool a[V][V], visited[V]; //viscited[V] = 방분한 정점은 재방문X
void go(int from){ 
	visited[from] = 1; //방문처리 출력 
	cout << from << '\n';
	for(int i = 0; i < V; i++){
		if(visited[i]) continue;
		if(a[from][i]){ 
			go(i);
		}
	}
	return;
}
int main(){
	a[1][2] = 1; a[1][3] = 1; a[3][4] = 1;
	a[2][1] = 1; a[3][1] = 1; a[4][3] = 1;
	//2중 for문
	for(int i = 0;i < V; i++){
		for(int j = 0; j < V; j++){
			if(a[i][j] && visited[i] == 0){
				go(i); 
			}
		}
	} 
} 