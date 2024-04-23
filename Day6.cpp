Q.Rohan's Love for Matrix
code-->  int firstElement(int n) {
        // code here
        int a00 = 1;
        int a01 = 1;
        int a10 = 1;
        int a11 = 0;
        int b00 = 1;
        int b01 = 1;
        int b10 = 1;
        int b11 = 0;
        if(n == 1)
            return a10;
        for(int i = 2; i <= n; i++)
        {
            int left  = b10 * a00 + b11 * a10;
            int right = b10 * a01 + b11 * a11;
            b10 = left%1000000007;
            b11 = right%1000000007;
        }
        return b10%1000000007;
    }
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
