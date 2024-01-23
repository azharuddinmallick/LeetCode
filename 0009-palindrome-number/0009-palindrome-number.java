class Solution {
    public boolean isPalindrome(int x) {
        int y=x,z=0;
        if(x>0){
            while(x!=0){
                z=z*10+x%10;
                x/=10;
            }
        }
        if(z==y)
        return true;
        else
        return false;
    }
}