/* As a part of this Kata, you need to create a function that when provided with a triplet,
returns the index of the numerical element that lies between the other two elements.
The input to the function will be an array of three distinct numbers (Haskell: a tuple).
For example: gimme([2, 3, 1]) => 0 */

int gimme(const int triplet[3])
{
    int i = 0;
    if ((triplet[0] > triplet[1] && triplet[0] < triplet[2]) || (triplet[0] > triplet[2] && triplet[0] < triplet[1]))
        return 0;
    else if ((triplet[1] > triplet[0] && triplet[1] < triplet[2]) || (triplet[1] > triplet[2] && triplet[1] < triplet[0]))
        return 1;
    else if ((triplet[2] < triplet[0] && triplet[2] > triplet[1]) || (triplet[2] < triplet[1] && triplet[2] > triplet[0]))
        return 2;
    return 0;
}