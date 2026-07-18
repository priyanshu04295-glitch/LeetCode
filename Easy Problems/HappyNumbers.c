int squaresSum(int n)
{
    int square=0,dig;
    while(n>0)
        {
            dig = n%10;
            square = square+(dig*dig);
            n = n/10;
        }
        return square;
}
bool isHappy(int n) {
    if(n==1||n==7)
    {
        return true;
    }
    if(n<10)
    {
        return false;
    }
    return isHappy(squaresSum(n));
}