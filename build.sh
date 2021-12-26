rm ./program
g++ -c main.cpp -I/usr/local/include/SDL2 -I/Users/bora/VulkanSDK/1.2.198.1/macOS/include 
g++ main.o -o program -lSDL2main -lSDL2 -lvulkan.1 -L/Users/bora/VulkanSDK/1.2.198.1/macOS/lib

./program

#/Users/bora/VulkanSDK/1.2.198.1/macOS/lib