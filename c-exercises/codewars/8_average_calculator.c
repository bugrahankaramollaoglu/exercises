// finding average of a double list 

#include <stdio.h>

double find_average(double* array, int length) {
  double sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return (sum/length);
}

/* while'la (kendi 2. çözümüm) 
double find_average(double* array, int length) {
    double sum = 0;
    int a = 0;
    while (--length) {
        sum = sum + array[a];
        a++;
    }
    double average = sum / length;
    return average;
}
 */

/* pointerla 
double find_average(double* array, int length) {
  double sum = 0;
  for (int i = length; i--;) {
    sum += *array++;
  }
  return (sum/length);
} */

int main(void) {
    double arr[3] = {2.3, 3.2, 5.6};
    double x = find_average(arr, 3);
    printf("%f", x);
}