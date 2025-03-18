/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** my_str_to_word_array.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int is_separator(char *separator, char s)
{
    for (int i = 0; separator[i] != '\0'; i++) {
        if (separator[i] == s)
            return 1;
    }
    return 0;
}

int count_word(char *str, char *separator)
{
    int counter = 0;
    int was_separator = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_separator(separator, str[i]) == 0 && was_separator == 1)
            counter++;
            was_separator = 0;
        if (is_separator(separator, str[i]) == 1)
            was_separator = 1;
    }
    return counter;
}

int count_word_letter(char *str, char *separator)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0' && !is_separator(separator, str[i]); i++)
        counter++;
    return counter;
}

int count_separator(char *str, char *separator, int len)
{
    int counter = 0;

    for (int i = len; str[i] != '\0' && is_separator(separator, str[i]); i++)
        counter++;
    return counter;
}

char **my_str_to_word_array(char *str, char *separator)
{
    int num_words = count_word(str, separator);
    char **arr = malloc(sizeof(char *) * (num_words + 1));
    int len_word = 0;
    int len_sep = 0;
    char *tmp = my_strdup(str);

    arr[num_words] = NULL;
    tmp += count_separator(tmp, separator, 0);
    for (int i = 0; i < num_words; i++) {
        len_word = count_word_letter(tmp, separator);
        len_sep = count_separator(tmp, separator, len_word);
        arr[i] = malloc(sizeof(char) * (len_word + 1));
        my_strncpy(arr[i], tmp, len_word);
        arr[i][len_word] = '\0';
        tmp += len_word + len_sep;
    }
    free(tmp - my_strlen(str));
    return arr;
}
