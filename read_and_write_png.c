
#include "read_and_write_png.h"

void read_png_file(char * file_name) {
    char header[8]; // 8 is the maximum size that can be checked

    /* open file and test for it being a png */
    FILE * fp = fopen(file_name, "rb");

    if (!fp)
        printf("[read_png_file] Podany plik \033[01;37m %s \x1b[0m nie istnieje\n", file_name);
    printf(".");
    fread(header, 1, 8, fp);

    if (png_sig_cmp(header, 0, 8))
        printf("[read_png_file] Plik \033[01;37m %s \x1b[0m nie jest rozpoznany jako PNG file\n", file_name);

    /* initialize stuff */
    png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    if (!png_ptr)
        printf("[read_png_file] Nie udalo sie stworzyc png_create_read_struct");

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr)
        printf("[read_png_file] Nie udalo sie stworzyc png_create_info_struct");

    png_init_io(png_ptr, fp);
    png_set_sig_bytes(png_ptr, 8);

    png_read_info(png_ptr, info_ptr);

    width = png_get_image_width(png_ptr, info_ptr);

    height = png_get_image_height(png_ptr, info_ptr);
    color_type = png_get_color_type(png_ptr, info_ptr);
    bit_depth = png_get_bit_depth(png_ptr, info_ptr);

    number_of_passes = png_set_interlace_handling(png_ptr);
    png_read_update_info(png_ptr, info_ptr);

    /* read file */
    if (setjmp(png_jmpbuf(png_ptr)))
        printf("[read_png_file] Wystopil blad podczas inicjalizacji read_image");

    row_pointers = (png_bytep * ) malloc(sizeof(png_bytep) * height);
    for (y = 0; y < height; y++)
        row_pointers[y] = (png_byte * ) malloc(png_get_rowbytes(png_ptr, info_ptr));

    png_read_image(png_ptr, row_pointers);

    png_infop end_info = png_create_info_struct(png_ptr);
    png_destroy_read_struct( & png_ptr, & info_ptr, & end_info);

    fclose(fp);
    printf("Plik o nazwie \033[01;37m %s \x1b[0m został wczytany\n", file_name);
}

void write_png_file(char * file_name, int number) {
    char liczba[10];
    sprintf(liczba, "_%d", number);
    char * name_of_file;
    char * folder = "wynik/";
    name_of_file = malloc(strlen(file_name) + 20);
    strcpy(name_of_file, file_name);
    mkdir(folder, 0777);
    strcpy(name_of_file, folder);
    strcat(name_of_file, file_name);
    strcat(name_of_file, liczba);
    strcat(name_of_file, ".png");

    /* create file */
    FILE * fp = fopen(name_of_file, "wb");
    if (!fp)
        printf("[write_png_file] Podany plik %s nie istnieje lub brak dostatecznych praw do zapisu", file_name);

    /* initialize stuff */
    png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);

    if (!png_ptr)
        printf("[write_png_file] Nie udalo sie stworzyc png_create_write_struct");

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr)
        printf("[write_png_file] Nie udalo sie stworzyc png_create_info_struct");

    png_init_io(png_ptr, fp);

    /* write header */
    png_set_IHDR(png_ptr, info_ptr, width, height,
        bit_depth, color_type, PNG_INTERLACE_NONE,
        PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);

    png_write_info(png_ptr, info_ptr);

    /* write bytes */
    if (setjmp(png_jmpbuf(png_ptr)))
        printf("[write_png_file] Wystopil blad podczas inicjalizacji writing bytes");

    png_write_image(png_ptr, row_pointers);

    /* end write */
    if (setjmp(png_jmpbuf(png_ptr)))
        printf("[write_png_file] Wystopil blad podczas inicjalizacji end of write");

    png_write_end(png_ptr, NULL);

    // for (y=0; y<height; y++)
    //     free(row_pointers[y]);
    //     free(row_pointers);
    free(name_of_file);
    png_destroy_write_struct( & png_ptr, & info_ptr);
    fclose(fp);
}

void process_file(int * * matrix) {
    for (y = 0; y < height; y++) {
        png_byte * row = row_pointers[y];
        for (x = 0; x < width; x++) {
            matrix[y][x] = row[x * 4] == 0 ? 1 : 0;
        }
    }
}

void process_file_for_txt(int * * matrix) {
    bit_depth = 8;
    row_pointers = (png_bytep * ) malloc(sizeof(png_bytep) * height);
    for (y = 0; y < height; y++) {
        row_pointers[y] = (png_byte * ) malloc(sizeof(png_byte) * width);
    }
    for (y = 0; y < height; y++) {
        png_byte * row = row_pointers[y];
        for (x = 0; x < width; x++) {
            matrix[y][x] = row[x * 4] == 0 ? 1 : 0;
        }
    }
}