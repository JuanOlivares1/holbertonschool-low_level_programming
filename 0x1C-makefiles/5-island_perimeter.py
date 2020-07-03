#!/usr/bin/python3
""" island perimeter """


def island_perimeter(grid):
    """island_perimeter function: returns the perimeter of the island described

    Args:
        grid (list): grid
    """
    perimeter = 0

    if type(grid) not in [list]:
        return

    if type(grid[0]) not in [list]:
        return

    if type(grid[0][0]) not in [int]:
        return

    if len(grid) > 100 or len(grid[0]) > 100:
        return

    for i in range(len(grid) - 1):
        for j in range(len(grid[i]) - 1):
            count = 4
            if grid[i][j] == 1:
                if grid[i - 1][j] == 1:
                    count -= 1
                if grid[i + 1][j] == 1:
                    count -= 1
                if grid[i][j - 1] == 1:
                    count -= 1
                if grid[i][j + 1] == 1:
                    count -= 1
                perimeter += count
    return perimeter
