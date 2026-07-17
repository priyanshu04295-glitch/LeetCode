int reverseBits(int n) {
    unsigned int ans=0;
    for(int i=0;i<32;i++)
    {
        ans=ans*2;
        ans = ans+(n%2);
        n=n/2;
    }
    return ans;
}