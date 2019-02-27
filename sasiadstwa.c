
#include "sasiadstwa.h"

int count_neighbours_Moore_a(int x, int y, int * * matrix) {

    int neighbours = 0;
    int i, j;
    if ((y == 0) && (x == 0)) {
        i = 0;
        while (i < 2) {
            j = 0;
            while (j < 2) {
                if (i == 0 && j == 0) {
                    j++;
                }
                if (matrix[y + i][x + j] == 1) {
                    neighbours++;
                }
                j++;
            }
            i++;
        }
    } else if ((y == 0) && (x == width - 1)) {
        i = 0;
        while (i < 2) {
            j = -1;
            while (j < 1) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
                j++;
            }
            i++;
        }
    } else if (y == 0) {
        i = 0;
        while (i < 2) {
            j = -1;
            while (j < 2) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
                j++;
            }
            i++;
        }
    } else if ((y == height - 1) && (x == 0)) {
        i = -1;
        while (i < 1) {
            j = 0;
            while (j < 2) {
                if (i == 0 && j == 0) {
                    j++;
                }
                if (matrix[y + i][x + j] == 1) {
                    neighbours++;
                }
                j++;
            }
            i++;
        }
    } else if ((y == height - 1) && (x == width - 1)) {
        i = -1;
        while (i < 1) {
            j = -1;
            while (j < 1) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
                j++;
            }
            i++;
        }
    } else if (y == height - 1) {
        i = -1;
        while (i < 1) {
            j = -1;
            while (j < 2) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
                j++;
            }
            i++;
        }
    } else if (x == 0) {
        i = -1;
        while (i < 2) {
            j = 0;
            while (j < 2) {
                if (i == 0 && j == 0) {
                    j++;
                }
                if (matrix[y + i][x + j] == 1) {
                    neighbours++;
                }
                j++;
            }
            i++;
        }
    } else if (x == width - 1) {
        i = -1;
        while (i < 2) {
            j = -1;
            while (j < 1) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
                j++;
            }
            i++;
        }
    } else {
        i = -1;
        while (i < 2) {
            j = -1;
            while (j < 2) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
                j++;
            }
            i++;
        }
    }

    return neighbours;
}

int count_neighbours_Neumann(int x, int y, int * * matrix) {

    int neighbours = 0;

    int i, j;

    if (y == 0) {
        if (x == 0) {
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    if (i == 0 && j == 0) {
                        j++;
                    }
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
            }
        } else if (x == width - 1) {
            for (i = 0; i < 2; i++) {
                for (j = -1; j < 1; j++) {
                    if (j == 0 && i == 0) {} else {
                        if (matrix[y + i][x + j] == 1) {
                            neighbours++;
                        }
                    }
                }
            }
        }
    } else if (y == height - 1) {
        if (x == 0) {
            for (i = -1; i < 1; i++) {
                for (j = 0; j < 2; j++) {
                    if (i == 0 && j == 0) {
                        j++;
                    }
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
            }
        } else if (x == width - 1) {
            for (i = -1; i < 1; i++) {
                for (j = -1; j < 1; j++) {
                    if (j == 0 && i == 0) {} else {
                        if (matrix[y + i][x + j] == 1) {
                            neighbours++;
                        }
                    }
                }
            }
        }
    } else if (x == width - 1) {
        for (i = -1; i < 2; i++) {
            for (j = -1; j < 1; j++) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
            }
        }
    } else {
        for (i = -1; i < 2; i++) {
            for (j = -1; j < 2; j++) {
                if (j == 0 && i == 0) {} else {
                    if (matrix[y + i][x + j] == 1) {
                        neighbours++;
                    }
                }
            }
        }
    }

    return neighbours;
}