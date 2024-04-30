//
//  driver.cpp
//  driver
//
//  Created by Randy Zhu on 2024-04-30.
//

#include <os/log.h>

#include <DriverKit/IOUserServer.h>
#include <DriverKit/IOLib.h>

#include "driver.h"

kern_return_t
IMPL(driver, Start)
{
    kern_return_t ret;
    ret = Start(provider, SUPERDISPATCH);
    os_log(OS_LOG_DEFAULT, "Hello World");
    return ret;
}
