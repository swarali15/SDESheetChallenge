#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
        bool fc=false,fr=false;
        for(int i=0 ; i<matrix.size() ; i++)
        {
           if(matrix[i][0]==0)
           {
               fc=true;
               break;
           }
        }
        for(int i=0 ; i<matrix[0].size();i++)
        {
            if(matrix[0][i]==0)
            {
                fr=true;
                break;
            }
        }
        //cout<<fc<<fr;
        for(int i=1 ; i<matrix.size() ; i++)
        {
            for(int j=1; j<matrix[i].size() ; j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=1 ; i<matrix.size() ; i++)
        {
            for(int j=1; j<matrix[i].size() ; j++)
            {
                if(matrix[i][0]==0  || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
            
        if(fc)
        {
            for(int i=0 ; i<matrix.size() ; i++)
            {
                matrix[i][0]=0;
            }
        }
         if(fr)
        {
            for(int i=0 ; i<matrix[0].size() ; i++)
            {
                matrix[0][i]=0;
            }
        }
}