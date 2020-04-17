mkdir bin

g++ -c behaviors/flyBehavior/*.cpp
mv behaviors/flyBehavior/*.o bin

g++ -c behaviors/quackBehavior/*.cpp
mv behaviors/quackBehavior/*.o bin

g++ -c ducks/*.cpp
mv ducks/*.o bin

g++ duckSimulator bin/*.o -o prog
./prog
