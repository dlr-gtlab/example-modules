/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CDSESSION_H
#define CDSESSION_H

#include "gt_object.h"

#include <gt_stringproperty.h>

/**
 * @generated 1.4.0
 * @brief The CDSession class
 */
class CDSession : public GtObject
{
    Q_OBJECT

public:

    Q_INVOKABLE CDSession();

    GtStringProperty title;
};

#endif // CDSESSION_H
