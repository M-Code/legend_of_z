mkdir -p bin 
if [ `uname` == "Linux" ]; then
    g++ src/*.cpp -lSDL2 -o bin/legend_of_z
elif [ `uname` == "Darwin" ]; then
    g++ src/*.cpp -framework SDL2 -o bin/legend_of_z
else
    echo "Unrecognized OS: `uname`!"
fi
