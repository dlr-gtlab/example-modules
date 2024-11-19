/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#include "cd_talk.h"

#include <QRegExpValidator>

CDTalk::CDTalk()
    : title("title", tr("Description"), "", "", new QRegExpValidator(QRegExp(R"([\w\W]*)")))
    , presenter("presenter", tr("Presenter"), "", "", new QRegExpValidator(QRegExp(R"([\w\W]*)")))
    , time("time", tr("Time of start"), "", "0:00", new QRegExpValidator(QRegExp(R"([0-9,:]*)")))
{
    setObjectName(tr("Talk"));

    registerProperty(time);
    registerProperty(presenter);
    registerProperty(title);

    setFlag(UserRenamable);
    setFlag(UserDeletable);
}

