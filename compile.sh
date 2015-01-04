mkdir -p bin 
if [ `uname` == "Linux" ]; then
    g++ src/*.cpp -lSDL2 -o bin/legend_of_z
else
    g++ src/*.cpp -framework SDL2 -o bin/legend_of_z
fi
