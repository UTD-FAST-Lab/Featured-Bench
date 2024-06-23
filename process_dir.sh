# cd dir/dir
# make clean
# mv ../dir ../../dir_cp
# cd ..
# rm -r dir
# mv dir_cp dir

#!/bin/bash

directories=(
    "equal"
    "equal2"
    "equal3"
    "loop"
    "magic"
    "magic2"
    "magic3"
    "magicOne"
    "recursive"
)

for dir in "${directories[@]}"; do

    cd "$dir/$dir"
    echo "Navigating to $dir"

    make clean
    echo "Ran 'make clean' in $dir"

    mv "../$dir" "../../${dir}_cp"

    cd ..

    rm -r "$dir"
    echo "Removed $dir"

    mv "${dir}_cp" "$dir"
    echo "Renamed ${dir}_cp to $dir"
done

echo "Actions completed in all directories."

