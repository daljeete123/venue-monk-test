#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int pythagoreanTripletProduct(int n) 
{ 
    for (int i = 1; i <= n / 3; i++)  
    { 
        for (int j = i + 1; j <= n / 2; j++)  
        { 
            int k = n - i - j; 
            if (i * i + j * j == k * k)  
            { 
                return i*j*k; 
            } 
        } 
    }  
  
} 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 1000; 
    cout<<pythagoreanTripletProduct(n); 
    return 0;
}