// returning the smallest int in an array

#include <stddef.h>
#include <stdio.h>

// ben bubble sort metoduyla cözdüm
int find_smallest_int(int *vec, size_t len)
{
    for (unsigned int pass = 1; pass < len; ++pass)
    {
        for (int i = 0; i < len - 1; ++i)
        {
            // bubble-sort logic
            if (vec[i] > vec[i + 1])
            {
                // to use swap, we always need a temp
                // bir sonrakiyle bir önceki elemanı değiştiriyor
                // eğer 2. 1.den küçükse
                int tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
            }
        }
    }
    return vec[0];
}

/* bu cok daha kısa yolu
int find_smallest_int(const int vec[], size_t len) {
  int res = vec[0];
  for (size_t i = 1; i < len; i++)
    if (vec[i] < res)
      res = vec[i];
  return res;
}
*/

/* bu da for değil while'lı hali
int find_smallest_int(int *vec, size_t len)
{
    int min = vec[0];
    while(len--)
      if (min > vec[len])
          min = vec[len];
    return min;
}
*/

/* tek satır hali
int find_smallest_int(int *vec, size_t len)
    int k = vec[0]; for (int i = 1;i < len;i++) if (vec[i] < k) k = vec[i]; return k;
*/

/* ternary operator'lu hali
int find_smallest_int(int *vec, size_t len)
{
    int min=vec[--len];
    while(len)
      min=(vec[--len]<min)?vec[len]:min;
    return min;
}
*/

int main()
{
    int a[6] = {3, 1, 4, -220, -7710, 2};
    int x = find_smallest_int(a, 6);
    printf("%d", x);
}