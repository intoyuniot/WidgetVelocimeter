#include "WidgetVelocimeter.h"


WidgetVelocimeter::WidgetVelocimeter(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataSpeedTopic,0,sizeof(pDataSpeedTopic));
    sprintf(pDataSpeedTopic,"channel/velocimeter_%d/data/speed",_Item);
}

WidgetVelocimeter::~WidgetVelocimeter()
{

}

void WidgetVelocimeter::begin(void (*UserCallBack)(void))
{
}



void WidgetVelocimeter::displaySpeed(int speed)
{
    IntoRobot.publish(pDataSpeedTopic,speed);
}


