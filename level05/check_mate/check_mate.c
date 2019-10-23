/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:47:27 by exam              #+#    #+#             */
/*   Updated: 2019/10/22 10:48:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct  s_point
{
    int y;
    int x;
}               t_point;

t_point find_pos(char **s)
{
    int     i;
    int     j;
    
    i = -1;
    while (s[++i])
    {
        j = -1;
        while (s[i][++j])
            if (s[i][j] == 'K')
                return ((t_point) {i, j});
    }
    return ((t_point) {-1, -1});
}

int     check_pawns(char **s, t_point p, int len)
{
    if (p.y + 1 < 0 || p.y + 1 >= len)
        return (0);
    if (p.x - 1 >= 0 && p.x - 1 < len && s[p.y + 1][p.x - 1] == 'P')
        return (1);
    if (p.x + 1 >= 0 && p.x + 1 < len && s[p.y + 1][p.x + 1] == 'P')
        return (1);
    return (0);
}

int     check_bishop(char **s, t_point p, int len, t_point n)
{
    if (p.y + n.y < 0 || p.y + n.y >= len || p.x + n.x < 0 || p.x + n.x >= len)
        return (0);
    if (s[p.y + n.y][p.x + n.x] == 'R' || s[p.y + n.y][p.x + n.x] == 'P')
        return (0);
    if (s[p.y + n.y][p.x + n.x] == 'B' || s[p.y + n.y][p.x + n.x] == 'Q')
        return (1);
    return (check_bishop(s, (t_point) {p.y + n.y, p.x + n.x}, len, n));
}

int     check_rook(char **s, t_point p, int len, t_point n)
{
    if (p.y + n.y < 0 || p.y + n.y >= len || p.x + n.x < 0 || p.x + n.x >= len)
        return (0);
    if (s[p.y + n.y][p.x + n.x] == 'B' || s[p.y + n.y][p.x + n.x] == 'P')
        return (0);
    if (s[p.y + n.y][p.x + n.x] == 'R' || s[p.y + n.y][p.x + n.x] == 'Q')
        return (1);
    return (check_rook(s, (t_point) {p.y + n.y, p.x + n.x}, len, n));
}

int    check_mate(int len, char **s)
{
    t_point pos;
    
    pos = find_pos(s);
    if (check_pawns(s, pos, len))
        return (1);
    if (check_bishop(s, pos, len, (t_point) {1, 1})
        || check_bishop(s, pos, len, (t_point) {-1, -1})
        || check_bishop(s, pos, len, (t_point) {-1, 1})
        || check_bishop(s, pos, len, (t_point) {1, -1}))
        return (1);
    if (check_rook(s, pos, len, (t_point) {0, 1})
        || check_rook(s, pos, len, (t_point) {0, -1})
        || check_rook(s, pos, len, (t_point) {-1, 0})
        || check_rook(s, pos, len, (t_point) {1, 0}))
        return (1);
    return (0);
}

int     main(int argc, char **argv)
{
    int len;
    
    if (argc > 1)
    {
        len = argc - 1;
        if (check_mate(len, &argv[1]))
            write(1, "Success", 7);
        else
            write(1, "Fail", 4);
    }
    write(1, "\n", 1);
    return (0);
}
