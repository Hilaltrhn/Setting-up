/*
** EPITECH PROJECT, 2024
** B-CPE-110-NCE-1-1-settingup-hilal.tarhan
** File description:
** load.c
*/

#include "include/settingup.h"

char *load_file_in_mem(char const *filepath)
{
    char *str;
    struct stat file;
    int fd;

    stat(filepath, &file);
    str = malloc(sizeof(char) * (file.st_size + 1));
    str[file.st_size] = '\0';
    fd = open(filepath, O_RDONLY);
    read(fd, str, file.st_size);
    return str;
}

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols)
{
    int fd = open(filepath, O_RDONLY);
    char *str = load_file_in_mem(filepath);
    char **arr = my_str_to_word_array(str, "\n");

    free(str);
    return arr;
}
