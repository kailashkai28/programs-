ls *.doc | awk -F. '{system("mv "$0 " "$1 ".txt")}'
