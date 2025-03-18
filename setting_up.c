/*
** EPITECH PROJECT, 2024
** B-BOO-100-NCE-1-1-rebirthCPE01-hilal.tarhan
** File description:
** step2.c
*/

#include "include/settingup.h"

setting_up_t stock_square(char **map, int nb_rows, int nb_cols, int row)
{
    int square = 0;
    int stock = 0;
    setting_up_t re = {0};

    for (int col = 0; map[row][col] != '\0'; col++) {
        square = find_biggest_square(map, (square_t){ nb_rows, nb_cols },
            (square_t){ row, col }, stock);
        if (square > stock) {
            stock = square;
            re.row = row;
            re.col = col;
            re.size = stock;
        }
    }
    return re;
}

setting_up_t setting_up(char **map)
{
    int nb_rows = my_array_len(map);
    int nb_cols = my_strlen(map[0]);
    int row = 0;
    setting_up_t o = {0};
    setting_up_t stock = {0};

    for (int row = 0; map[row] != NULL; row++) {
        o = stock_square(map, nb_rows, nb_cols, row);
        if (o.size > stock.size)
            stock = o;
    }
    return stock;
}

void put_x_in_arr(setting_up_t square, char **arr)
{
    int line = my_strlen(arr[0]);

    for (int i = square.row; i < square.row + square.size; i++) {
        for (int j = square.col; j < square.col + square.size; j++) {
            arr[i][j] = 'x';
        }
    }
    for (int i = 0; arr[i] != NULL; i++) {
        write(1, arr[i], line);
        write(1, "\n", 1);
    }
}

char **generate_map(char **argv, char **arr, setting_up_t skip)
{
    arr = get_map(my_getnbr(argv[1]), argv[2]);
    skip = setting_up(arr);
    put_x_in_arr(skip, arr);
    return arr;
}
