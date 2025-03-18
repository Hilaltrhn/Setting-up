/*
** EPITECH PROJECT, 2024
** B-CPE-110-NCE-1-1-settingup-hilal.tarhan
** File description:
** settingup.h
*/

#ifndef SETTINGUP_H_
    #define SETTINGUP_H_
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include "../my_lib/my/include/my.h"

typedef struct setting_up {
    int size;
    int row;
    int col;
} setting_up_t;

typedef struct square {
    int row;
    int col;
} square_t;

char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
int parse_col(int col, int square_size, char **map, int i);
int my_array_len(char **arr);
int is_square_of_size(char **map, int row, int col, int square_size);
int find_biggest_square(char **map, square_t nb, square_t coord, int max);
setting_up_t stock_square(char **map, int nb_rows, int nb_cols, int row);
setting_up_t setting_up(char **map);
char **get_map(int index, char *pattern);
void put_x_in_arr(setting_up_t square, char **arr);
char **generate_map(char **argv, char **arr, setting_up_t skip);
#endif /*SETTINGUP_H_*/
