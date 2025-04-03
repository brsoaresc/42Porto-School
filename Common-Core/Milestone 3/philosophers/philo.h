#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

# define RESET  "\033[0m"
# define RED    "\033[1;31m"
# define GREEN  "\033[1;32m"

enum e_forks {
	LEFT,
	RIGHT
};

enum e_status {
	DIED,
	EATING,
	SLEEPING,
	THINKING,
	TOOK_FORK,
	FULL
};

typedef struct s_data t_data;

typedef struct s_philo {
	t_data			*data;
	size_t			id;
	size_t			meals_count;
	size_t			time_to_die;
	int				status;
	bool			is_full;
	pthread_mutex_t	lock;
	pthread_mutex_t	*forks[2];
}	t_philo;

typedef struct s_data {
	pthread_t		*threads;
	t_philo			*philos;
	size_t			philo_count;
	size_t			time_to_die;
	size_t			time_to_eat;
	size_t			time_to_sleep;
	size_t			meals_target;
	size_t			start_time;
	size_t			full_count;
	bool			sim_end;
	pthread_mutex_t	*forks;
	pthread_mutex_t	data_lock;
	pthread_mutex_t	write_lock;
	pthread_mutex_t	sim_lock;
}	t_data;

// Actions
void	philo_eat(t_philo *philo);
void	philo_sleep(t_philo *philo);
void	philo_think(t_philo *philo);

// Checkers
int		validate_input(char **av);
bool	is_philo_dead(t_philo *philo);
bool	is_single_philo(t_philo *philo);

// Routines
void	*philo_routine(void *philo_ptr);
void	log_status(t_philo *philo, int status);

// Utils
size_t	get_current_time(void);
void	precise_usleep(t_philo *philo, size_t time);
long	ft_atol(const char *str);
void	cleanup_data(t_data *data);

// Initialization
t_data	*init_simulation_data(int ac, char **av);

#endif