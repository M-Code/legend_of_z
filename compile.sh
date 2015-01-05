DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

mkdir -p "$DIR/bin" 
if [ `uname` == "Linux" ]; then
    g++ "$DIR/src/"*.cpp -lSDL2 -o "$DIR/bin/legend_of_z"
elif [ `uname` == "Darwin" ]; then
    g++ "$DIR/src/"*.cpp -framework SDL2 -o "$DIR/bin/legend_of_z"
else
    echo "Unrecognized OS: `uname`!"
fi
