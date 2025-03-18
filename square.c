/*
** EPITECH PROJECT, 2024
** B-CPE-110-NCE-1-1-settingup-hilal.tarhan
** File description:
** square.c
*/

#include "include/settingup.h"

int parse_col(int col, int square_size, char **map, int i)
{
    for (int j = col; j < col + square_size; j++) {
        if (!map[i])
            return 1;
        if (map[i][j] != '.')
            return 1;
    }
    return 0;
}

int my_array_len(char **arr)
{
    int i = 0;

    for (; arr[i] != NULL; i++);
    return i;
}

int is_square_of_size(char **map, int row, int col, int square_size)
{
    for (int i = row; i < row + square_size; i++) {
        if (parse_col(col, square_size, map, i) == 1)
            return 0;
    }
    return 1;
}

int find_biggest_square(char **map, square_t nb, square_t coord, int max)
{
    int i = max;

    for (; is_square_of_size(map, coord.row, coord.col, i) == 1; i++) {
        if (coord.row + i > nb.row || coord.col + 1 > nb.col) {
            return i - 1;
        }
    }
    return i - 1;
}
