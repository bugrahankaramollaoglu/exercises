#include <stdio.h>

/* bir dosya açtığında FILE pointerı gelir, bu da o dosyayı işlemek
için gerekli bilgileri tutar. bazı OS'lerde buna fd (file descriptor)
da dahildir. fd'ler open-file-table yani açık dosya tablosu denilen bir
tablodaki kimlik numaralarıdır. */

/* stdin, stdout ve stderr file descriptor olarak geçerler.
	> stdin: input alır
	> stdout: output verir
	> stderr: hata mesajı verir */

int main()
{
	int num;
	fprintf(stdout, "enter a num: ");
	fscanf(stdin, "%d", &num);
	fprintf(stdout, "you entered %d\n", num);
	fprintf(stderr, "An error occurred while processing input.\n");
}
