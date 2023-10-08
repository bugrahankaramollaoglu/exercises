#include <stdint.h>

char *hoop_count(uint32_t n)
{
    if (n >= 10)
        return "Great, now move on to tricks";
    return "Keep at it until you get it";
}

/* ternary operator hali
char *hoop_count(uint32_t n)
{
    // eğer n < 10 ise (n < 10 ?) keep'i döndür değilse (:'den sonrası) great'i döndür
    return n < 10 ? "Keep at it until you get it" : "Great, now move on to tricks";
} */