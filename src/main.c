#include "core.h"

#include <stdio.h>


int main(int argc, const char **argv, char **env) {

    x64emu_t* emu = NULL;
    elfheader_t* elf_header = NULL;
    if (initialize(argc, argv, env, &emu, &elf_header, 1)) {
        return -1;
    }

    printf("PID: %d\n", getpid());

    return emulate(emu, elf_header);
}
