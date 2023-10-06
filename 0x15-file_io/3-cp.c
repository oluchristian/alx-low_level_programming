/*
 * File name: 3-cp.c
 * Author: Ughagwu Oluchukwu
 */

#include <stdio.h>
void error_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        error_exit(97, "Usage: cp file_from file_to");
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_source = open(file_from, O_RDONLY);
    if (fd_source == -1) {
        error_exit(98, "Error: Can't read from file %s");
    }

    int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_dest == -1) {
        error_exit(99, "Error: Can't write to file %s");
    }

    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_source, buffer, sizeof(buffer))) > 0) {
        bytes_written = write(fd_dest, buffer, bytes_read);
        if (bytes_written == -1) {
            error_exit(99, "Error: Can't write to file %s");
        }
    }

    if (bytes_read == -1) {
        error_exit(98, "Error: Can't read from file %s");
    }

    if (close(fd_source) == -1 || close(fd_dest) == -1) {
        error_exit(100, "Error: Can't close fd");
    }

    return 0;
}


