#include "philo.h"

static void	assign_forks(t_data *data, size_t i)
{
	while (i < (data->philo_count - 1))
	{
		if (i % 2)
		{
			data->philos[i].forks[LEFT] = &data->forks[i - 1];
			data->philos[i].forks[RIGHT] = &data->forks[i];
		}
		else
		{
			data->philos[i].forks[LEFT] = &data->forks[i];
			data->philos[i].forks[RIGHT] = &data->forks[i + 1];
		}
		i++;
	}
	if (i % 2)
	{
		data->philos[i].forks[LEFT] = &data->forks[i - 1];
		data->philos[i].forks[RIGHT] = &data->forks[i];
	}
	else
	{
		data->philos[i].forks[LEFT] = &data->forks[i];
		data->philos[i].forks[RIGHT] = &data->forks[0];
	}
}

static void	init_philosophers(t_data *data)
{
	size_t	i;

	i = 0;
	while (i < data->philo_count)
	{
		data->philos[i].data = data;
		data->philos[i].id = i + 1;
		data->philos[i].meals_count = 0;
		data->philos[i].status = -1;
		data->philos[i].is_full = false;
		data->philos[i].time_to_die = data->time_to_die;
		pthread_mutex_init(&data->philos[i].lock, NULL);
		i++;
	}
	assign_forks(data, 0);
}

static t_data	*init_mutexes(t_data *data)
{
	size_t	i;

	data->sim_end = false;
	data->full_count = 0;
	data->threads = malloc(data->philo_count * sizeof(pthread_t));
	data->forks = malloc(data->philo_count * sizeof(pthread_mutex_t));
	if (!data->threads || !data->forks)
		return (NULL);
	pthread_mutex_init(&data->data_lock, NULL);
	pthread_mutex_init(&data->write_lock, NULL);
	pthread_mutex_init(&data->sim_lock, NULL);
	i = 0;
	while (i < data->philo_count)
		pthread_mutex_init(&data->forks[i++], NULL);
	return (data);
}

t_data	*init_simulation_data(int ac, char **av)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	data->philo_count = ft_atol(av[1]);
	data->time_to_die = ft_atol(av[2]);
	data->time_to_eat = ft_atol(av[3]);
	data->time_to_sleep = ft_atol(av[4]);
	data->meals_target = (ac == 6) ? ft_atol(av[5]) : 0;
	if (!data->philo_count || !data->time_to_die 
		|| !data->time_to_eat || !data->time_to_sleep)
	{
		free(data);
		return (NULL);
	}
	data->start_time = 0;
	data->philos = malloc(data->philo_count * sizeof(t_philo));
	if (!data->philos)
		return (NULL);
	data = init_mutexes(data);
	init_philosophers(data);
	return (data);
}