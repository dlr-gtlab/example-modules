/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#include "cd_break.h"

#include <QRegExpValidator>

CDBreak::CDBreak()
    : time("time", tr("Time of start"), "", "0:00", new QRegExpValidator(QRegExp(R"([0-9,:]*)")))
{
    setObjectName(tr("Break"));

    registerProperty(time);

    setFlag(UserDeletable);
}
