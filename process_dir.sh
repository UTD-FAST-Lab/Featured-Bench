#!/bin/bash

# directories=(
#     "equal"
#     "equal2"
#     "equal3"
#     "loop"
#     "magic"
#     "magic2"
#     "magic3"
#     "magicOne"
#     "recursive"
# )

# for dir in "${directories[@]}"; do

#     cd "$dir/$dir"
#     echo "Navigating to $dir"

#     make clean
#     echo "Ran 'make clean' in $dir"

#     mv "../$dir" "../../${dir}_cp"

#     cd ..

#     rm -r "$dir"
#     echo "Removed $dir"

#     mv "${dir}_cp" "$dir"
#     echo "Renamed ${dir}_cp to $dir"
# done

# echo "Actions completed in all directories."

find . -type f -name 'Makefile' | while read -r makefile; do
    echo "Processing $makefile"
    
    sed -i '/^CC = \/AFLplusplus\/afl-clang-fast$/d' "$makefile"
    
    echo "Updated $makefile"
done

echo "All Makefiles have been processed."
