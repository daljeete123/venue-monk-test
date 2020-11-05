#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int count( int S[], int m, int n ) 
{ 
    int i, j, x, y; 
  
    int table[n + 1][m]; 
      
    for (i = 0; i < m; i++) 
        table[0][i] = 1; 
  
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        {
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0; 
            y = (j >= 1) ? table[i][j - 1] : 0; 
            table[i][j] = x + y; 
        } 
    } 
    return table[n][m - 1]; 
} 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {10, 20, 50, 100, 200, 500, 1000, 2000}; 
    int m = sizeof(arr) / sizeof(arr[0]); 
    int N = 2000; 
    cout << "Total number of ways = "<< count(arr, m, N); 
    return 0; 
    
}