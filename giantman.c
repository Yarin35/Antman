/*
** EPITECH PROJECT, 2023
** giantman.c
** File description:
** giantman.c
*/

#include "lib.h"

int main(int argc, char **argv)
{
    char *data = NULL;
    word_t **dico = NULL;
    char *outdata = NULL;

    if (argc != 2 || (open(argv[1], O_RDONLY) == -1)) {
        printf("Invalid use of ./giantman [filename]\n");
        return 84;
    }
    data = get_file_content(argv[1]);
    if (data == NULL)
        return 84;
    dico = build_dico(data);
    if(dico == NULL)
        return 84;
    outdata = decompress_data(data, dico);
    if (outdata == NULL)
        return 84;
    create_file(outdata, "decompressed.txt");
    return 0;
}
