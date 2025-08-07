#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <iostream>
#include <string>

using namespace std;

class Configuration
{
private:
    static Configuration *config;

    int brilho;
    int volume;

    Configuration();

public:

    Configuration(const Configuration&) = delete;
    void operator=(const Configuration&) = delete;

    static Configuration* getInstance();
    
    void setBrilho(int valor);
    int getBrilho() const;

    void setVolume(int volume);
    int getVolume() const;

};

#endif