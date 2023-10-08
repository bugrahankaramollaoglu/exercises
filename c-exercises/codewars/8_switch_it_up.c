// When provided with a number between 0-9, return it in words.

/* uzun if'li yolu
char*   switchItUp(int number)
{
    if (number == 0)
        return "Zero";
    else if (number == 1)
        return "One";
    else if (number == 2)
        return "Two";
    else if (number == 3)
        return "Three";
    else if (number == 4)
        return "Four";
    else if (number == 5)
        return "Five";
    else if (number == 6)
        return "Six";
    else if (number == 7)
        return "Seven";
    else if (number == 8)
        return "Eight";
    else if (number == 9)
        return "Nine";
    return "";
} */

/* switch-case'li algoritmam

break;'lere gerek de yokmuş btw

char*   switchItUp(int number)
{
    for (int i = 0; i < 10; i++) {
        switch(number) {
            case 0: return "Zero"; break;
            case 1: return "One"; break;
            case 2: return "Two"; break;
            case 3: return "Three"; break;
            case 4: return "Four"; break;
            case 5: return "Five"; break;
            case 6: return "Six"; break;
            case 7: return "Seven"; break;
            case 8: return "Eight"; break;
            case 9: return "Nine"; break;
        }
    }
    return "";
} */

/* liste mantıgı (soSmart)
char* switchItUp(int number)
{
  const char *desc[] = {
    "Zero",  "One",  "Two", "Three",
    "Four",  "Five", "Six", "Seven",
    "Eight", "Nine" };
    
  return desc[number];
} */

