#!/bin/bash

# uwu
echo "[i c =_=]"

mkdir -p $1/bin

echo "Cleaning object files..."
rm $1/bin/*.o

for c in $2/*.c; do
    cc="$(basename "$c")"
    name="${cc%.*}"

    echo "Linking $name..."
    gcc -c "$c" -o "$1/bin/$name.o"
done

echo "Compiling final executable..."
gcc $1/bin/*.o -o main
echo "Done!"