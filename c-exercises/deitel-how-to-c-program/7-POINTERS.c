#include <stdio.h>
#define SIZE 10

/* bir pointerı ilklendirmenin 3 yolu vardır
	0 atamak
	null atamak
	adres atamak

bir pointera atanabilecek tek integer 0'dır

void pointerlar * operatörü ile dereference edilemez çünkü kaç byte dereference edileceği henüz belli değildir. bu pointerlar
her tipten başka pointerın verisini tutabilirler

arrayin ismi constant pointer olarak düşünülebilir. ilk indisine refere eder. array_ismi + 5 dersen 5 eleman ileri taşırsın artık bu ismi

& adres alırken * değerini alır */

/* int main() {

	// bir float tanımla
	float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

	// numbersın bir elemanını gösterecek pointer tanımla
	float *nPtr;

	// numbersın elemanlarını 1 kesinlik ile yazdır (indis metoduyla)
	for (size_t i = 0; i < SIZE; ++i)
		printf("%.1f ", numbers[i]);

	// 2 farklı yolla nPtr pointerına numbers arrayini ata
	nPtr = numbers;
	nPtr = &numbers[0];

	printf("\n");

	// numbersın elemanlarını 1 kesinlik ile yazdır (pointer metoduyla)
	for (size_t i = 0; i < SIZE; ++i)
		printf("%.1f ", *(nPtr + i));

	printf("\n");

	// numbersın elemanlarını 1 kesinlik ile yazdır (array ismi metoduyla)
	for (size_t i = 0; i < SIZE; ++i)
		printf("%.1f ", *(numbers+i));

	printf("\n");

	// numbersın elemanlarını 1 kesinlik ile yazdır (pointer indis metoduyla)
	for (size_t i = 0; i < SIZE; ++i)
		printf("%.1f ", nPtr[i]);

    // 4. elemanı farklı metotlarla göster
    numbers[4];
    *(numbers + 4);
    nPtr[4];
    *(nPtr + 4);

    // nPtr adresi 1202500 olsun. nPtr + 5'in adresi nedir?
    int cevap = 1202500 + 5 * 4; // assuming that float is 4 bytes
}
 */


/* int main() {

    float number1 = 7.3;
    float number2;

    // number1'in adresini fPtr pointerına at
    float *fPtr = &number1;

    // fPtr'nin değerini yazdır
    printf("%.2f", *fPtr);

    // fPtr'nin değerini number2'ye ata
    number2 = *fPtr;

    // number2'nin değerini yazdır
    printf("\n%.2f", number2);

    // number1'in adresini yazdır
    printf("\n%p", &number1);

    // fPtr'nin değerini yazdır
    printf("\n%p", fPtr);
} */

// değer döndürmeyen float tipinde x ve y isimli iki pointer parametresi alan exhange isminde bir fonksiyon tanımla
void exchange(float *x, float *y);

// int döndüren evaluate tanımla. iki parametresi var biri x isminde bir int, diğeri int alan ve int döndüren poly isminde pointer
int evaluate(int x, int (*poly) (int));

// assume that int = 4 bytes and arrayin başlangıç adresi 2003800
int main() {

    int oddNum[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    int *iPtr;

    // indis metoduyla elemanlarını yazdır
    for(size_t i = 0; i < SIZE; ++i)
        printf("%d ", oddNum[i]);

    // iki farklı yolla iPtr pointerını oddNum'a ata
    iPtr = oddNum;
    iPtr = &oddNum[0];

    printf("\n");

    // pointer offset metoduyla elemanlarını yazdır
    for (size_t i = 0; i < SIZE; i++)
        printf("%d ", *(iPtr + i));

    printf("\n");

    // arrayName offset metoduyla elemanlarını yazdır
    for (size_t i = 0; i < SIZE; i++)
        printf("%d ", *(oddNum + i));

    printf("\n");

    // pointer indis metoduyla elemanlarını yazdır
    for (size_t i = 0; i < SIZE; i++)
        printf("%d ", iPtr[i]);

}



