/*
** EPITECH PROJECT, 2024
** B-CPE-110-NCE-1-1-settingup-hilal.tarhan
** File description:
** map.c
*/

#include "include/settingup.h"

char **get_map(int index, char *pattern)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **map = malloc(sizeof(char *) * (index + 1));

    map[index] = NULL;
    while (i != index) {
        map[i] = malloc(sizeof(char) * index + 1);
        while (j != index) {
            map[i][index] = '\0';
            map[i][j] = pattern[k];
            k++;
            j++;
            k = k % my_strlen(pattern);
        }
        i++;
        j = 0;
    }
    return map;
}
