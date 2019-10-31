#include <bits/stdc++.h> 
using namespace std; 
int min(int x, int y) 
{ 
    return y + ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1))); 
} 
int smallest(int x, int y, int z) 
{ 
   return min(x, min(y, z));
} 
int main() 
{ 
    int x = 12, y = 15, z = 5; 
    cout << "Minimum of 3 numbers is "
         << smallest(x, y, z); 
    return 0; 
} 
