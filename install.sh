clear
apt install python -y
apt install python2 -y
apt install python3 -y
apt install clang -y
pip install --upgrade pip
cd tools/
g++ main.cpp -o main
g++ file.cpp -o file
gcc clear.c -o clear
gcc about.c -o about
mv main ../
cd ../
clear
