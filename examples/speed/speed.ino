/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 测速仪:

 所需器件:
 核心板
 */

#include <WidgetVelocimeter.h>

WidgetVelocimeter speedTest = WidgetVelocimeter();
int speed = 100;

void setup()
{
}

void loop()
{
    if(speed > 0)
    {
        speed -= 10;
    }
    else
    {
        speed = 100;
    }
    speedTest.displaySpeed(speed);
    delay(3000);
}

