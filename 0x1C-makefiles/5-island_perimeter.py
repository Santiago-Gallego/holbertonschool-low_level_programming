#!/usr/bin/python3
""" perimeter island """


def island_perimeter(grid):
    """ Return the count """

    count = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1  # up
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    count += 1  # down
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1  # left
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    count += 1  # right
    return (count)
