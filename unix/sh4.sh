#!/bin/bash

ls -s
echo "Named of the files of size zero are"
if (find -size 0)
then
     mkdir -p /home/rafil/shell/zero
     find . -type f -size 0 -exec mv {} zero/ \;
fi

