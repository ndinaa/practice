void	add_to_rooms(t_main list**, char *value, int x, int y)
{
	t_room *new;
	
	if ((*list)-> ==  NULL)
	{
		(*list)->rooms = (t_room *)malloc(sizeof(t_room))
		(*list)->rooms->value = value;
		(*list)->rooms->x = x;
		(*list)->rooms->y = y;
		(*list)->rooms->edges = NULL;
		(*list)->rooms->searched = 0;
	}
	new = 

}
