# CreationalPatternPractice
This repo is similar to my behavioral patterns, wherein I will attempt to showcase some knowledge about the use and creation of OOP creational patterns. They may not be 100% accurate or the most detailed, but they should serve to solidify some key concepts in my own head and serve as reference moving forward in my career and studies.

# Note for Compilation
Just as before with my behavioral practice, I will use a 3 folder approach with an include for header files, an src for my .cpp implementations and a mains for my .cpp main files for each showcase. 
To compile everything use:
g++ -I./include src/Demo.cpp main/DemoMain.cpp -o DemoExeName

for the abstract factory, we also need to compile the Factory.cpp file so use:
g++ -I./include src/Factory.cpp src/AbstractFactory.cpp main/AbstractFactoryMain.cpp -o Abfact

Also no, I don't feel like setting up a makefile at the moment.

# For anyone reading who isnt me
Wow, what a steaming pile of dangerous code and crap syntax. Disclaimer: Do not try to replicate my code if you value your self respect.
