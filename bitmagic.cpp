#include <bits/stdc++.h> 
using namespace std; 
int smallest(int x, int y, int z) 
{ 
   if (!(y / x))
        return (!(y / z)) ? y : z; 
    return (!(x / z)) ? x : z; 
} 
int main() 
{ 
    int x = 12, y = 15, z = 5; 
    cout << "Minimum of 3 numbers is "
         << smallest(x, y, z); 
    return 0; 
} 
