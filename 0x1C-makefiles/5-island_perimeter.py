#!/usr/bin/python3
""" module contain function island_perimeter
"""


def island_perimeter(grid):
    """ function that give the perimeter of an grid,
        when 0 is water and 1 land.
        One cell is a square with side length 1.
        Args:
            grid: grid is representing the island, it is rectangular,
            width and height don’t exceed 100
        Return:
            perimeter of the island
    """
    perimeter = 0
    counter_case = 0
    for h in range(len(grid)):
        for w in range(len(grid[h])):
            counter_cote = 4
            cote = 0
            if grid[h][w] == 1:
                counter_case += 1
                if (h - 1) >= 0 and grid[h - 1][w] == 1:
                    counter_cote -= 1
                    cote += 1
                if (w + 1) < len(grid[h]) and grid[h][w + 1] == 1:
                    counter_cote -= 1
                    cote += 1
                if (h + 1) < len(grid) and grid[h + 1][w] == 1:
                    counter_cote -= 1
                    cote += 1
                if w - 1 >= 0 and grid[h][w - 1] == 1:
                    counter_cote -= 1
                    cote += 1
                if cote != 0:
                    perimeter += counter_cote
                elif counter_case == 1:
                    return 4
    return perimeter
