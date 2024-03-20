#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """island perimeter function"""

    if grid is None or len(grid) == 0:
        return 0
    perimeter = 0
    i = 0
    hg = len(grid)
    wg = len(grid[0])
    while i < hg:
        j = 0
        while j < wg:
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == hg - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == wg - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
            j += 1
        i += 1
    return perimeter
