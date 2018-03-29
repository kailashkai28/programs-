#!/bin/bash

ls -s
echo "Back up of files:"
if (ls )
then
    mkdir -p /home/rafil/shell/back_up
    find ./ -type f -mtime -1  -exec cp -pf {} back_up/ \;
fi
