# Include all files in the alias folder
for f in $PWD/aliases/*; do source $f; done
# Same for functions
for f in $PWD/functions/*; do source $f; done
