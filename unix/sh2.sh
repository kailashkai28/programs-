#Write a  shell script that changes all .doc files to  all .txt files.

#!/bin/bash

echo "Write a  shell script that changes all .doc files to .txt files."
rename -v 's/\.doc$/\.txt/' *.doc

