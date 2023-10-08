#include <stdio.h>

/* mesela bit field olayını şunun için kullanabiliriz
hafızadan yer kazanmak için bit 1 ise True 0 ise False olarak
kabul edebiliriz. böylece koca bir inti bunun için harcamamış oluruz */

struct flags
{
	unsigned int is_active : 1;
	unsigned int has_permission : 1;
	unsigned int is_admin : 1;
};

int main()
{
	struct flags user_flags = {1, 0, 1};
	printf("is_active: %d\n", user_flags.is_active);
	printf("has_permission: %d\n", user_flags.has_permission);
	printf("is_admin: %d\n", user_flags.is_admin);
	return 0;
}
