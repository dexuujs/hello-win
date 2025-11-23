#include <stdio.h>
#include <string.h>

// "hello.c" - Port of the Linux package "hello" by GNU

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Hello, world!\n");
        return 0;
    }

    if (strcmp(argv[1], "-t") == 0) {
        printf("hello world\n");
    } else if (strcmp(argv[1], "-g") == 0) {
        if (argc > 2) {
            for (int i = 2; i < argc; i++) {
                printf("%s", argv[i]);
                if (i < argc - 1) printf(" ");
            }
            printf("\n");
        } else {
            printf("No text provided for -g. Usage: hello -g <text>\n");
        }
    } else if (strcmp(argv[1], "--version") == 0) {
        printf("Hello - port of the Hello package, from Linux\n");
        printf("(version 1.0)\n");
        printf("\n This project has the GNU GPLv3 license, see <https://www.gnu.org/licenses/gpl-3.0.en.html>");
    } else if (strcmp(argv[1], "--help") == 0) {
        printf("Hello - port of the Hello package, from Linux\n");
        printf("This program outputs \"Hello, world!\" into the terminal.\n");
        printf("Usage: %s [OPTION] [TEXT]\n", argv[0]);
        printf("OPTIONS:\n");
        printf("    -t: Displays the traditional version.\n");
        printf("    -g: A different message is displayed. This option requires you to type the text you want to output after the param.\n");
        printf("    --version: Print the version and licensing info.\n");
        printf("    --help: Print this message.\n");
    } else {
        printf("Unrecognised option %s. Use --help if you for usage.\n", argv[1]);
    }

    return 0;
}
