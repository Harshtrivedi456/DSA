#include<stdio.h>
int main()
{
    int n,y=0;
    scanf("%d",&n);
    int x = 2*n - 1 ;
    int s = x;
    
    int k=x-1;
    int   j=0;
    int z[x][x];
        for(int q = 0;q<s;q++){
        for(int r = 0;r<s;r++){
            z[q][r] = 0;
        }
    }
    for(int u = n ; u>0 ; u--)
    {
    for(int i = y ;i<x;i++)
    {
        z[i][y] = u;
        z[y][i] = u;
    }
    y++;
    x--;

    }
        for(int u = n ; u>0 ; u--)
    {
    for(int l = k;l>=j;l--)
    {
        z[k][l] = u;
        z[l][k] = u;
    
        }
        k--;
        j++;
    }
    
    for(int q = 0;q<s;q++){
        for(int r = 0;r<s;r++){
            switch(r){
                case 0:
                     printf("%d",z[q][r]);
                    break;
                default:
                    printf(" %d",z[q][r]);
                    
            }
            
          
        }
        printf("\n");
    }
}