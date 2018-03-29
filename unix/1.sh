#Shell Script to ask the user for their name.

#!/bin/bash

echo "Shell Script to ask the user for their name."
read -p "Enter the Username: " username
read -sp "Enter the password: " password
printf "\n"
echo "Your Username is: " $username
echo "Your Password is: " $password
