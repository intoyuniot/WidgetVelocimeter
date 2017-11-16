#ifndef WIDGET_VELOCMETER_H_
#define WIDGET_VELOCMETER_H_

#include "application.h"


class WidgetVelocimeter
{
    public:
        WidgetVelocimeter(uint8_t ucItem = 0);
        ~WidgetVelocimeter();
        void begin(void (*UserCallBack)(void) = NULL);
        void displaySpeed(int speed);

    private:
        char pDataSpeedTopic[64];
        uint8_t _Item=0;
};

#endif
