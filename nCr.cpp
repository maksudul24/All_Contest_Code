int dp[max][max];
//Initialise array elements with zero
int nCr(int n, int r)
{
       if(n==r) return dp[n][r] = 1; //Base Case
       if(r==0) return dp[n][r] = 1; //Base Case
       if(r==1) return dp[n][r] = n;
       if(dp[n][r]) return dp[n][r]; // Using Subproblem Result
       return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}
