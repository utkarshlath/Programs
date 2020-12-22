#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int budget,n,i,j;
        cin>>budget>>n;
        if(budget==0&&n==0)
            break;
        int **t = (int **) calloc( sizeof(int *) , n+1 );
	    for ( i = 0 ; i < n+1 ; i++ ) {
		    t[i] = (int *) calloc ( sizeof(int) , budget+1 );
	    }

        int * fun = (int *) malloc ( n * sizeof(int));
        int * cost = (int *) malloc ( n * sizeof(int));

        for(int i=0;i<n;i++)
            cin>>cost[i]>>fun[i];

        for ( i = 1 ; i < n+1 ; i++ )
        {
            for ( j = 1 ; j < budget+1 ; j++ )
            {
                if ( cost[i-1] <= j ) {
                    t[i][j] = max ( t[i-1][j] , t[i-1][j-cost[i-1]] + fun[i-1] );
                }
                else
                    t[i][j] = t[i-1][j];
            }
        }
        i = budget;
	    while ( t[n][i-1] == t[n][i] )
        {
		    i--;
	    }
        cout<<i<<" "<<t[n][budget]<<endl;
        for ( i = 0 ; i < n+1 ; i++ )
        {
		    free(t[i]);
        }
        free(t);
        free(cost);
        free(fun);
    }
    return 0;
}