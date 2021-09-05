#pragma once

#include <string>
#include <vector>

#include "../../common/sources/types.h"
#include "../../common/sources/global_settings.h"

class INotification
{
public:
    virtual ~INotification() = default;

    virtual common::ID getUserId() const = 0;
};
