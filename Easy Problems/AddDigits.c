int sumOfDigits(int num)
{
    int dig,sum=0;
    while(num>0)
    {
        dig=num%10;
        sum = sum+dig;
        num=num/10;
    }
    return sum;
}

int addDigits(int num) {
    if(num>=0 && num<=9)
    {
        return num;
    }
    return addDigits(sumOfDigits(num));
}