/*
** EPITECH PROJECT, 2024
** B-CPE-110-NCE-1-1-settingup-hilal.tarhan
** File description:
** main.c
*/

#include "include/settingup.h"

static int not_num(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 1;
    return 0;
}

static int invalid_map(char **map)
{
    int i = 0;
    int j = 0;

    while (map[i] != NULL) {
        if (map[i][j] == '\0') {
            i++;
            j = 0;
            continue;
        }
        if (map[i][j] != 'o' && map[i][j] != '.')
            return 1;
        j++;
    }
    return 0;
}

static int invalid_line_length(char **map)
{
    int len = my_strlen(map[0]);

    for (int i = 1; map[i] != NULL; i++) {
        if (my_strlen(map[i]) != len)
            return 1;
    }
    return 0;
}

static int handle_errors(char **arr)
{
    if (my_getnbr(arr[0]) <= 0 || not_num(arr[0]) ||
        invalid_map(arr + 1) || invalid_line_length(arr + 1)) {
        write(2, "Invalid map\n", 12);
        return 84;
    }
    return 0;
}

static void free_map(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}

int main(int argc, char **argv)
{
    char **arr = NULL;
    setting_up_t skip;

    if (argc == 3)
        return generate_map(argv, arr, skip), 0;
    if (argc < 2)
        return write(2, "Not enough argument\n", 20), 84;
    arr = load_2d_arr_from_file(argv[1], 0, 0);
    if (!arr || handle_errors(arr))
        return 84;
    skip = setting_up(arr + 1);
    put_x_in_arr(skip, arr + 1);
    free_map(arr);
    return 0;
}
