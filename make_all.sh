
echo "\nmaking HT"
sed -i '4s/.*/CPPFLAGS=-std=c++11 -O3/' makefile
make clean
make
cp twophase twophase_HT
rm twophase

echo "\nmaking QT"
sed -i '4s/.*/CPPFLAGS=-std=c++11 -O3 -DQT/' makefile
make clean
make
cp twophase twophase_QT
rm twophase

echo "\nmaking HT AX"
sed -i '4s/.*/CPPFLAGS=-std=c++11 -O3 -DAX/' makefile
make clean
make
cp twophase twophase_HT_AX
rm twophase

echo "\nmaking QT AX"
sed -i '4s/.*/CPPFLAGS=-std=c++11 -O3 -DQT -DAX/' makefile
make clean
make
cp twophase twophase_QT_AX
rm twophase

echo "\ndone!"
make clean
