char	get_ants(t_list list, char *line)
{
	int ants;

	if (get_next_line(0, line) > 0)
	{
		ft_putendl(line);
		ants = ft_atoi(line);
		check_coords(list, line, line);
		if (ants <= 0)
		{
			list->error = 1;
			free(line);
			return ;0
		}
		list->ants = ants;
		free(line);
	}
}

void	check_coords(t_main *list, char *x, char *y)
{
	int i;

	i = 0;

	while (x[i] && x[i] != '#')
	{
		if (ft_isdigit(x[i]) == 0)
		{
			list->error = 1;
			return ;
		}
		i++;
	}
	i = 0;
	while (y[i] && y[i] != '#')
	{
		if (ft_isdigit(y[i]))
		{
			list->error = 1;
			return ;
		}
		i++;
	}
}

void	commands(t_main *list, char *line)
{
	char *temp;
	
	if (ft_strcmp(line, "##start") == 0)
	{
		if (list->start != NULL)
			list->error = 1;
		get_next_line(0, &temp);
		temp = do_check(temp);
		create_room(&list, temp, 0);
	}
	else if (ft_strcmp(line, "##end"))
	{
		if (list->end != NULL)
			list->error = 1;
		get_next_line(0, &temp);
		temp = do_check(temp);
		create_room(&list, temp, 1);
	}
	
}



void	read_map(t_main *list, char *line)
{
	get_ants(list, line);
	while (get_next_line(0, &line))
	{
		ft_putendl(line);
		line = do_check_line()
		if (!list->error && line[0] == '#')
			commands(list, line);
		
	}
}
