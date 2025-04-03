#include "philo.h"

void	precise_usleep(t_philo *philo, size_t time)
{
	if ((get_current_time() + time) >= philo->time_to_die)
		usleep((philo->time_to_die - get_current_time()) * 1000);
	else
		usleep(time * 1000);
}

size_t	get_current_time(void)
{
	struct timeval	tv;

	if (gettimeofday(&tv, NULL))
	{
		printf("Error: gettimeofday() failed\n");
		return (0);
	}
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

long	ft_atol(const char *str)
{
	long	sign;
	long	result;
	int		i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	cleanup_data(t_data *data)
{
	size_t	i;

	if (!data)
		return ;
	i = 0;
	while (i < data->philo_count)
	{
		pthread_mutex_destroy(&data->forks[i]);
		pthread_mutex_destroy(&data->philos[i].lock);
		i++;
	}
	pthread_mutex_destroy(&data->data_lock);
	pthread_mutex_destroy(&data->write_lock);
	pthread_mutex_destroy(&data->sim_lock);
	free(data->threads);
	free(data->philos);
	free(data->forks);
	free(data);
}