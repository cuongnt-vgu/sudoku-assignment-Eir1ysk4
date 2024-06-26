#pragma once

#include "sudoku.h"

typedef struct NakedTriple_impl
{
    Cell *p_cell1;
    Cell *p_cell2;
    Cell *p_cell3;
    Cell **p_cells;
    int value1;
    int value2;
    int value3;
} NakedTriple;

int is_naked_triple_set(Cell **p_cells, int value1, int value2, int value3);

bool is_in_naked_triple_list(NakedTriple *p_array, Cell *p);

int is_naked_triple_cell(Cell *p_cell, int value1, int value2, int value3);

int find_naked_triple_values(Cell **p_cells, int *naked_triple_values);

void find_naked_triple(Cell **p_cells, NakedTriple *p_naked_triple,
                        int *p_counter);

int naked_triples(SudokuBoard *p_board);

bool is_candidate(Cell*cell, int value);