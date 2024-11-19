/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CD_BREAK_H
#define CD_BREAK_H

#include <gt_object.h>
#include <gt_stringproperty.h>

/**
 * @generated 1.4.0
 * @brief The CDTalk class
 */
class CDBreak : public GtObject
{
    Q_OBJECT

public:

    Q_INVOKABLE CDBreak();

    GtStringProperty time;
};

#endif // CD_BREAK_H
