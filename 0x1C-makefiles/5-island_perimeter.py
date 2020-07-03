#!/usr/bin/python3
"""Island perimeter class."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    perimeter = 0

    for ct1 in range(len(grid)):
        for ct2 in range(len(grid[ct1])):
            if grid[ct1][ct2] == 1:
                if ct1 - 1 < 0 or grid[ct1 - 1][ct2] == 0:
                    perimeter += 1
                if ct1 + 1 > len(grid) - 1 or grid[ct1 + 1][ct2] == 0:
                    perimeter += 1
                if ct2 + 1 > len(grid[ct1]) - 1 or grid[ct1][ct2 + 1] == 0:
                    perimeter += 1
                if ct2 - 1 < 0 or grid[ct1][ct2 - 1] == 0:
                    perimeter += 1

    return perimeter
