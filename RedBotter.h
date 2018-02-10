#ifndef RedBotter_h
#define RedBotter_h

#include <Arduino.h>
#include <RedBot.h>


class RedBotter
{
    // Instance Wrapper of RedBot's motor library
    private:
        RedBotMotors motor;

    public:
        RedBotter(RedBotMotors &motors);
        void driveDistance(int distance, int velocity);
};

#endif
