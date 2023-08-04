class Solution {
public:
    int bitwiseComplement(int n) {
     int bit=0, x=n ; 
     while(x>0)
        {
            x>>=1;
            bit++;
        } 
     if (n==0)
     return 1;

      int result=(1<<bit)-1;
     return n^result;
    }
};