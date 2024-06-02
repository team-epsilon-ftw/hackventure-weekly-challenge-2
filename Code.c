#include <stdio.h>

void printPurple(const char *str, int shade) {
    printf("\033[38;5;%dm%s\033[0m", shade, str);
}

int main() {
    const char *H[] = {"HH   HH", "HH   HH", "HHHHHHH", "HH   HH", "HH   HH"};
    const char *A[] = {"  AAA  ", " A   A ", "AAAAAAA", "A     A", "A     A"};
    const char *C[] = {"  CCCCC ", " CC     ", "CC      ", " CC     ", "  CCCCC "};
    const char *K[] = {"KK   KK", "KK  KK ", "KKKK   ", "KK  KK ", "KK   KK"};
    const char *V[] = {"VV     VV", "VV     VV", " VV   VV ", "  VV VV  ", "   VVV   "};
    const char *E[] = {"EEEEEEE", "EE     ", "EEEEEEE", "EE     ", "EEEEEEE"};
    const char *N[] = {"NN   NN", "NNN  NN", "NN N NN", "NN  NNN", "NN   NN"};
    const char *T[] = {"TTTTTTTT", "   TT   ", "   TT   ", "   TT   ", "   TT   "};
    const char *U[] = {"UU    UU", "UU    UU", "UU    UU", "UU    UU", " UUUUUU "};
    const char *R[] = {"RRRRRR ", "RR   RR", "RRRRRR ", "RR  RR ", "RR   RR"};
    const char *O[] = {" OOOOO ", "OO   OO", "OO   OO", "OO   OO", " OOOOO "};
    const char *one[] = {"   1   ", "  11   ", "   1   ", "   1   ", "  111  "};
    const char *dot[] = {"       ", "       ", "       ", "  ..   ", "  ..   "};
    const char *zero[] = {" 00000 ", "00   00", "00   00", "00   00", " 00000 "};

    const char **text[] = {H, A, C, K, V, E, N, T, U, R, E, one, dot, zero};
    int shades[] = {91, 92, 93, 129, 128, 127, 19, 57, 56, 55, 165, 164, 63, 20};

    for (int row = 0; row < 5; row++) {
        for (int i = 0; i < sizeof(text) / sizeof(text[0]); i++) {
            printPurple(text[i][row], shades[i]);
            if (i == 10) {
                printf("       ");
            } else if (i == 11 || i == 12) {
                printf(" ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}

