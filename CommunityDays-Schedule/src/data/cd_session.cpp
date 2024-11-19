/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#include "cd_session.h"

#include <QRegExpValidator>

CDSession::CDSession()
    : title("title", tr("About"), "", "", new QRegExpValidator(QRegExp(R"([\w\W]*)")))
{
    setObjectName(tr("Session"));

    registerProperty(title);

    setFlag(UserRenamable);
    setFlag(UserDeletable);
}

