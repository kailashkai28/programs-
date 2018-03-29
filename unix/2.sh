#!/bin/bash

echo "Shell Script to find greatest of four numbers using If-Else-If statement."
read -p "Enter any four Numbers: " n1 n2 n3 n4
if [[ "$n1" -gt "$n2" && "$n1" -gt "$n3" && "$n1" -gt "$n4" ]]
        then
	echo "$n1 is a Greatest Number:"
elif [[ "$n2" -gt "$n1" && "$n2" -gt "$n3" && "$n2" -gt "$n4" ]]
        then
	echo "$n2 is a Greatest Number:"
elif [[ "$n3" -gt "$n1" && "$n3" -gt "$n2" && "$n3" -gt "$n4" ]]
        then
	echo "$n3 is a Greatest Number:"
else
echo "$n4 is a Greatest Number:"
fi
