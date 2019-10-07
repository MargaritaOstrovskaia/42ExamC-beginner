 int is_piece(char val)
{
    if (val == "P" || val == "Q" || val == "B" || val == "K")
        return (1);
    return (0);
}

int is_top_left(char **matrix, int i, int j, int size)
{
    if (i < size && j < size)
        while (0 <= --i && 0 <= --j)
        {
            if (matrix[i][j] == 'R')
                return (1);
            if (is_piece(matrix[i][j]))
                return (0);
        }
    return (0);
}

int is_top_right(char **matrix, int i, int j, int size)
{
    if (i < size && j < size)
        while (0 <= --i && ++j < size)
        {
            if (matrix[i][j] == 'R')
                return (1);
            if (is_piece(matrix[i][j]))
                return (0);
        }
    return (0);
}

int is_down_left(char **matrix, int i, int j, int size)
{
    if (i < size && j < size)
        while (++i < size && 0 <= --j)
        {
            if (matrix[i][j] == 'R')
                return (1);
            if (is_piece(matrix[i][j]))
                return (0);
        }
    return (0);
}

int is_down_right(char **matrix, int i, int j, int size)
{
    if (i < size && j < size)
        while (++i < size && ++j < size)
        {
            if (matrix[i][j] == 'R')
                return (1);
            if (is_piece(matrix[i][j]))
                return (0);
        }
    return (0);
}

int check_rook(char **arr, int i, int j, int size)
{
    if (is_top_left(arr, i, j)
        || is_top_right(arr, i, j)
           || is_down_left(arr, i, j)
              || is_down_right(arr, i, j))
        return (1);
    return (0);
}