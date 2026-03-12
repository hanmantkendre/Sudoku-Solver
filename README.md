# Sudoku Solver

A simple command-line application written in C++ that solves standard 9x9 Sudoku puzzles using backtracking algorithm.

## Features

- Reads a puzzle from standard input or a file
- Validates the initial configuration
- Uses a recursive backtracking solver
- Prints the solved puzzle or reports if no solution exists

## Building

This project consists of a single source file `sudoku.cpp`.

```bash
# compile with g++
g++ -std=c++17 -O2 sudoku.cpp -o sudoku
```

## Usage

Run the solver and provide the puzzle as 81 digits (0 for blanks) or with whitespace:

```bash
# example input file
cat puzzle.txt

# run solver
./sudoku < puzzle.txt
```

Alternatively, you can type the puzzle directly and press Ctrl-D when done.

## Example

```
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

and solver output will be the completed grid.

## License

This project is provided under the MIT License.
