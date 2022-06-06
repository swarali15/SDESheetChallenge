#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int numRows) 
{
  // Write your code here.
     vector<vector<long long int>> r(numRows);
     for(int i=0 ; i<numRows ; i++)
        {
            r[i].resize(i+1);
            r[i][0] =  r[i][i]=1;
            for(int j = 1; j<i ; j++ )
            {
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
}
