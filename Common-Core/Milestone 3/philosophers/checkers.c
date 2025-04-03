#include "philo.h"

static void	check_meals(t_philo *philo)
{
	if (philo->meals_count >= philo->data->meals_target
		&& philo->data->meals_target != 0 && !philo->is_full)
	{
		philo->data->full_count++;
		philo->is_full = true;
	}
}

bool	is_philo_dead(t_philo *philo)
{
	bool	dead;

	dead = false;
	pthread_mutex_lock(&philo->lock);
	pthread_mutex_lock(&philo->data->sim_lock);
	if (get_current_time() >= philo->time_to_die || philo->data->sim_end)
	{
		if (!philo->data->sim_end)
			log_status(philo, DIED);
		philo->data->sim_end = true;
	}
	pthread_mutex_lock(&philo->data->data_lock);
	check_meals(philo);
	if (philo->data->full_count == philo->data->philo_count)
		philo->data->sim_end = true;
	dead = philo->data->sim_end;
	pthread_mutex_unlock(&philo->data->data_lock);
	pthread_mutex_unlock(&philo->data->sim_lock);
	pthread_mutex_unlock(&philo->lock);
	return (dead);
}

bool	is_single_philo(t_philo *philo)
{
	if (philo->data->philo_count == 1)
	{
		pthread_mutex_lock(philo->forks[RIGHT]);
		log_status(philo, TOOK_FORK);
		pthread_mutex_unlock(philo->forks[RIGHT]);
		log_status(philo, THINKING);
		while (!is_philo_dead(philo))
			;
		return (true);
	}
	return (false);
}

int	validate_input(char **av)
{
	int		i;
	int		j;
	long	temp;

	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] == '-')
				return (1);
			if (av[i][j] == '+')
				j++;
			if (av[i][j] && (av[i][j] < '0' || av[i][j] > '9'))
				return (1);
		}
		temp = ft_atol(av[i]);
		if (temp < 0 || temp > 4294967295)
			return (1);
	}
	if (av[2][0] == '0' && !av[2][1])
		return (1);
	return (0);
}