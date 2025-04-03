#include "philo.h"

void	log_status(t_philo *philo, int status)
{
	pthread_mutex_lock(&philo->data->write_lock);
	if (status == DIED)
		printf("%lu %lu died\n", get_current_time() - philo->data->start_time, philo->id);
	else if (status == EATING)
		printf("%lu %lu is eating\n", get_current_time() - philo->data->start_time, philo->id);
	else if (status == SLEEPING)
		printf("%lu %lu is sleeping\n", get_current_time() - philo->data->start_time, philo->id);
	else if (status == THINKING)
		printf("%lu %lu is thinking\n", get_current_time() - philo->data->start_time, philo->id);
	else if (status == TOOK_FORK)
		printf("%lu %lu has taken a fork\n",
			get_current_time() - philo->data->start_time, philo->id);
	pthread_mutex_unlock(&philo->data->write_lock);
}

void	*philo_routine(void *philo_ptr)
{
	t_philo	*philo;

	philo = (t_philo *)philo_ptr;
	pthread_mutex_lock(&philo->lock);
	philo->time_to_die = philo->data->start_time + philo->data->time_to_die;
	pthread_mutex_unlock(&philo->lock);
	if (philo->id % 2 == 0 || philo->id == philo->data->philo_count)
		philo_think(philo);
	if (is_single_philo(philo))
		return (NULL);
	while (!is_philo_dead(philo))
	{
		philo_eat(philo);
		philo_sleep(philo);
		philo_think(philo);
	}
	return (NULL);
}