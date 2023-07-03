/*
** EPITECH PROJECT, 2023
** antman.c
** File description:
** antman.c
*/

#include "lib.h"

int main(int argc, char **argv)
{
    char *data = NULL;
    word_t **dico = NULL;
    char *compressed_data = NULL;

    if (argc != 2 || (open(argv[1], O_RDONLY) == -1)) {
        printf("wrong usage of ./Antman [filename]\n");
        return 84;
    }
    data = get_file_content(argv[1]);
    dico = create_dico(data);
    compressed_data = compress_data(dico, data);
    if (compressed_data == NULL)
        return 84;
    else
        create_file(compressed_data, "compressed.txt");
    free(data);
    return 0;
}
