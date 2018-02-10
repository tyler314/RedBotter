#ifndef RedBotter_h
#define RedBotter_h

#include <Arduino.h>
#include <RedBot.h>


class RedBotter
{
    private:
        RedBotMotors motor;

    public:
        RedBotter(RedBotMotors &motors);
        void driveDistance(int distance, int velocity);
};

#endif
