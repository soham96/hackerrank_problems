#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
   float line1[4], line2[4], m1=0, m2=0;
    
    for(int i=0; i<4; i++)
    {
        cin>>line1[i];
    }
    
    for(int i=0; i<4; i++)
    {
        cin>>line2[i];
    }
    
    m1=(line1[0]-line1[2])/(line1[1]-line1[3]);
    m2=(line2[0]-line2[2])/(line2[1]-line2[3]);
    
    if(m1==m2)
        cout<<"yes";
    else
        cout<<"no";
    
    return 0;
}
