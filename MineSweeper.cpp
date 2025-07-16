#include<iostream>
using namespace std;


void draw(int n,int m){

    char space[n][m];
    int showtime[n][m];
    for (int i=0; i<n ;i++){
        for(int j =0; j<m ; j++){
            cin>>space[i][j];
        }
    }
    for (int i=0; i<n ;i++){
        for(int j =0; j<m ; j++){
            if (space[i][j] == '*'){
                showtime[i][j] = '*';
            }
            else{
                showtime[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        if (space[i][j] == '*') continue;
        if (i > 0 && space[i - 1][j] == '*') showtime[i][j]++;
        if (i < n - 1 && space[i + 1][j] == '*') showtime[i][j]++;
        if (j > 0 && space[i][j - 1] == '*') showtime[i][j]++;
        if (j < m - 1 && space[i][j + 1] == '*') showtime[i][j]++;
        if (i > 0 && j > 0 && space[i - 1][j - 1] == '*') showtime[i][j]++;
        if (i > 0 && j < m - 1 && space[i - 1][j + 1] == '*') showtime[i][j]++;
        if (i < n - 1 && j > 0 && space[i + 1][j - 1] == '*') showtime[i][j]++;
        if (i < n - 1 && j < m - 1 && space[i + 1][j + 1] == '*') showtime[i][j]++;
    }
}

cout<<endl;

        for (int i=0; i<n ;i++){
        for(int j =0; j<m ; j++){

            if (showtime[i][j] == '*'){
                cout<<'*'<<" ";
            }
            else{
                cout<<showtime[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}


int main(){
    int n,m;
    cin>>n;
    cin>>m;

    draw(n,m);
}


