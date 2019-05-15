#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

typedef struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
}Computer;

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

void show_computer_stats(Computer computer);


void show_notebook_stats(Notebook notebook);


int main()
{
    Computer computer1;
    computer1.cpu_speed_GHz = 1.87;
    computer1.bits = 32;
    computer1.ram_size_GB = 4;

    Notebook notebook1;
    notebook1.ram_size_GB = 16;
    notebook1.bits = 64;
    notebook1.cpu_speed_GHz = 4.21;

    show_notebook_stats(notebook1);

    show_computer_stats(computer1);



    return 0;
}

void show_notebook_stats(Notebook notebook)
{
    printf("CPU: %.2f\nRAM: %d\n Bits: %d\n", notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);
}

void show_computer_stats(Computer computer)
{

    printf("CPU: %.2f\nRAM: %d\n Bits: %d\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

}
