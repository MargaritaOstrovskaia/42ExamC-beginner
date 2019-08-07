#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct      _list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif
