#!/bin/bash
#Shell Script to find wheather given number is Prime or not.

echo "Shell Script to find wheather given number is Prime or not."
read -p "Enter a number: " num
i=2
while [ $i -lt $num ]
do
  if [ $((num % i)) -eq 0 ]
  then
      echo "$num is not a prime number"
      exit
  fi
  i=$((i+1))
done
echo "$num is a prime number "

