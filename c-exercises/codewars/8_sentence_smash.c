/* Write a function that takes an array of words
and smashes them together into a sentence and
returns the sentence. You can ignore any need to
sanitize words or add punctuation, but you should add
spaces between each word. Be careful, there
shouldn't be a space at the beginning or the
end of the sentence!
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *smash(const char **words, int count)
{
    char *sentence = (char *)calloc((count * 5) + count, sizeof(char));

    for (int i = 0; i < count; i++)
    {
        strcat(sentence, *words++);
        strcat(sentence, " ");
    }
    sentence[strlen(sentence) - 1] = '\0';

    return sentence;
}

char *smash(const char **words, size_t count)
{
    int i = 0;
    char *sentence = malloc(sizeof(char) * 256);
    memset(sentence, '\0', 256);

    for (i; i < count; i++)
    {
        strcat(sentence, words[i]);
        if (i != count - 1)
            strcat(sentence, " ");
    }

    return sentence;
}

char *smash(const char **words, size_t wordCount)
{

    // allocate a string on the heap, memory will be freed
    size_t callocSize = 0;
    for (size_t i = 0; i < wordCount; ++i)
    {
        callocSize += strlen(words[i]);
    }

    char *snt = calloc(callocSize + wordCount, sizeof(char));

    for (size_t i = 0; i < wordCount;)
    {
        strcat(snt, words[i]);
        if (++i < wordCount)
            strcat(snt, " ");
    }

    return snt;
}

char *smash(const char *const words[], size_t nb_words)
{
    int i;
    char *new = calloc(10, (int)nb_words);
    // allocate a string on the heap, memory will be freed
    for (i = 0; i < (int)nb_words; i++)
    {
        strcat(new, words[i]);
        if (i + 1 == (int)nb_words)
            break;
        strcat(new, " ");
    }
    return new;
}
