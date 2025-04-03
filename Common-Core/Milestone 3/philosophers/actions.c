#include "philo.h"

void	philo_sleep(t_philo *philo)
{
	if (!is_philo_dead(philo) && philo->status != SLEEPING)
	{
		philo->status = SLEEPING;
		log_status(philo, philo->status);
		precise_usleep(philo, philo->data->time_to_sleep);
	}
}

void	philo_think(t_philo *philo)
{
	if (!is_philo_dead(philo) && philo->status != THINKING)
	{
		philo->status = THINKING;
		log_status(philo, philo->status);
		precise_usleep(philo, 5);
	}
}

static bool	take_single_fork(t_philo *philo, int fork)
{
	pthread_mutex_lock(philo->forks[fork]);
	if (is_philo_dead(philo))
	{
		pthread_mutex_unlock(philo->forks[fork]);
		return (false);
	}
	log_status(philo, TOOK_FORK);
	return (true);
}

static bool	take_forks(t_philo *philo)
{
	if (!take_single_fork(philo, LEFT))
		return (false);
	if (!take_single_fork(philo, RIGHT))
	{
		pthread_mutex_unlock(philo->forks[LEFT]);
		return (false);
	}
	return (true);
}

void	philo_eat(t_philo *philo)
{
	if (!take_forks(philo))
		return ;
	pthread_mutex_lock(&philo->lock);
	philo->time_to_die = get_current_time() + philo->data->time_to_die;
	pthread_mutex_unlock(&philo->lock);
	philo->status = EATING;
	log_status(philo, philo->status);
	philo->meals_count++;
	precise_usleep(philo, philo->data->time_to_eat);
	pthread_mutex_unlock(philo->forks[LEFT]);
	pthread_mutex_unlock(philo->forks[RIGHT]);
}