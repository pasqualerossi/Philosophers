# To Run Philosophers

1 - Copy and paste this in iTerm/Terminal `git clone https://github.com/pasqualerossi/Philosophers.git && cd Philosophers && make` <br>

2 - `./philo [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [number_of_times_each_philosopher_must_eat]`

Examples:

`./philo 1 800 200 200` - Philosopher should not eat and should die. <br>
`./philo 5 800 200 200` - No Philosopher should die. <br>
`./philo 5 800 200 200 7` - No Philosopher should die and the simulation should stop when every philosopher has eaten at least 7 times. <br>
`./philo 4 410 200 200` - No Philosopher should die. <br>
`./philo 4 310 200 100` - One Philosopher should die. 
