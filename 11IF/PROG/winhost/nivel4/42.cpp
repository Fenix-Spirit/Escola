#include <iostream>
using namespace std;

int n;
int m;

int main(){
    cin >> n>>m;
    int V_jogadores[n];
    int somas[m];
    for (int i=0;i<n;i++){
        V_jogadores[i]=0;
    }
    for (int i=0;i<m;i++){
        somas[i]=0;
    }
    int matriz[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matriz[i][j];
            somas[i]+=matriz[i][j];
        }
    }
    for (int i=0;i<m;i++){
        int resto=somas[i]%n;
        V_jogadores[resto]++;
    }
    for (int i=0;i<n-1;i++){
        cout << V_jogadores[i] << " ";
    }
    cout << V_jogadores[n-1];
    cout << endl;
    for (int i=0;i<m;i++){
        cout << " " << somas[i];
    }
    cout << endl;
    for (int i=0;i<m;i++){
        cout << " " <<somas[i]%n ;
    }
    return 0;
}