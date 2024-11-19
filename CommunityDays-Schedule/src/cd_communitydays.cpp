/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#include "cd_communitydays.h"

#include "cd_package.h"
#include "ui/cd_packageui.h"
#include "cd_talk.h"
#include "cd_break.h"
#include "cd_session.h"

GtVersionNumber
CDCommunityDays::version()
{
    return GtVersionNumber{0, 0, 1};
}

QString
CDCommunityDays::description() const
{
    return tr("A schedule for the community days");
}

void
CDCommunityDays::init()
{
    // TODO: code to execute on init
}

CDCommunityDays::MetaInformation
CDCommunityDays::metaInformation() const
{
    MetaInformation m;

    m.author =        QStringLiteral("Martin Siggel");
    m.authorContact = QStringLiteral("martin.siggel@dlr.de");

    // TODO: set license
    // m.licenseShort = ...;

    return m;
}

QMetaObject
CDCommunityDays::package()
{
    return GT_METADATA(CDPackage);
}

QList<QMetaObject>
CDCommunityDays::data()
{
    QList<QMetaObject> list;

    list << GT_METADATA(CDTalk);
    list << GT_METADATA(CDBreak);
    list << GT_METADATA(CDSession);

    return list;
}

bool
CDCommunityDays::standAlone()
{
    return true;
}

QMap<const char *, QMetaObject>
CDCommunityDays::uiItems()
{
    return {
        {GT_CLASSNAME(CDPackage), GT_METADATA(CDPackageUI)},
        {GT_CLASSNAME(CDTalk), GT_METADATA(CDPackageUI)},
        {GT_CLASSNAME(CDBreak), GT_METADATA(CDPackageUI)},
        {GT_CLASSNAME(CDSession), GT_METADATA(CDPackageUI)}
    };
}
