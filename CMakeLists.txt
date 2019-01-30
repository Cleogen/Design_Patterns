cmake_minimum_required(VERSION 3.13)
project(Design_Patterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(Design_Patterns main.cpp Creational/Singleton/Singleton.h Behavioral/Strategy/Navigator.h Behavioral/Strategy/RouteStrategy.h Behavioral/Observer/Subject&Observer.h Behavioral/Observer/Publisher.h Behavioral/Observer/Subscriber.h Structural/Decorator/Notifier.h)