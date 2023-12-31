#!/usr/bin/node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/

if (process.argv.length <= 2) {
    process.stdout.write("Missing argument\n");
    process.stdout.write("Usage: ./1-print_square.js <size>\n");
    process.stdout.write("Example: ./1-print_square.js 8\n");
    process.exit(1);
}

const size = parseInt(process.argv[2]);

for (let i = 0; i < size; i++) {
    let row = "";
    for (let j = 0; j < size; j++) {
        row += "#";
    }
    process.stdout.write(row + "\n");
}
