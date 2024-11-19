/* CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CDTALK_H
#define CDTALK_H

#include <gt_object.h>
#include <gt_stringproperty.h>

/**
 * @generated 1.4.0
 * @brief The CDTalk class
 */
class CDTalk : public GtObject
{
    Q_OBJECT

public:

    Q_INVOKABLE CDTalk();

    GtStringProperty title, presenter, time;
};

#endif // CDTALK_H
