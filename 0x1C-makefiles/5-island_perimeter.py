#!/usr/bin/python3
""" This module contains the calculator of pr=erimeter of a island"""


def island_perimeter(grid):
    """ This function calculate the perimeter of a island
    Args:
    grid(list): The grid of the island
    """
    per = 0
    len_grid = len(grid) - 1
    for row in range(len(grid)):
        for item in range(len(grid[row])):
            len_row = len(grid[row]) - 1
            land = grid[row][item]
            if land == 1:
                """Verificar arriba"""
                if row - 1 < 0 or grid[row - 1][item] == 0:
                    per += 1
                """Verificar derecha"""
                if item + 1 > len_row or grid[row][item + 1] == 0:
                    per += 1
                """Verificar izquierda"""
                if item - 1 < 0 or grid[row][item - 1] == 0:
                    per += 1
                """Verificar abajo"""
                if row + 1 > len_grid or grid[row + 1][item] == 0:
                    per += 1
    return per
