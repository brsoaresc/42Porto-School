#include "philo.h"

static int	start_simulation(t_data *data)
{
	size_t	i;

	data->start_time = get_current_time();
	if (data->start_time == 0)
		return (1);
	pthread_mutex_lock(&data->data_lock);
	i = 0;
	while (i < data->philo_count)
	{
		if (pthread_create(&data->threads[i], NULL, &philo_routine, &data->philos[i]))
			return (1);
		i++;
	}
	pthread_mutex_unlock(&data->data_lock);
	i = 0;
	while (i < data->philo_count)
	{
		if (pthread_join(data->threads[i], NULL))
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_data	*data;

	if ((ac != 5 && ac != 6) || validate_input(av))
	{
		printf("Error: Invalid arguments\n");
		return (1);
	}
	data = init_simulation_data(ac, av);
	if (!data)
	{
		cleanup_data(data);
		return (1);
	}
	if (start_simulation(data))
	{
		cleanup_data(data);
		return (1);
	}
	cleanup_data(data);
	return (0);
}