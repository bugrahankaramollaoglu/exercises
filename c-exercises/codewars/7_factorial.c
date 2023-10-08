int factorial(int n)
{
    int fucktorial = 1;
    if (n < 0 || n > 12)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    while (n)
    {
        fucktorial *= n;
        n--;
    }
    return fucktorial;
}

/* recursive solution
int factorial(int n) {
    if (n<0 || n>12)
      return -1;
    if(n==0)
      return 1;
    else
    return n*factorial(n-1);
} */