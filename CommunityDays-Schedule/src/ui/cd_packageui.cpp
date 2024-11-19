/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#include "cd_packageui.h"

#include "cd_package.h"
#include "cd_break.h"
#include "cd_talk.h"
#include "cd_session.h"

#include <gt_datamodel.h>
#include <gt_icons.h>

#include <gt_logging.h>

CDPackageUI::CDPackageUI()
{
    setObjectName("CommunityDaysUI");

    addSingleAction(tr("Talk"),
                    [](GtObject* package) {
                        gtInfo() << "Adding Talk";

                        gtDataModel->appendChild(new CDTalk(), package);
                    })
        .setVisibilityMethod([](GtObject* obj) {
            return qobject_cast<CDPackage*>(obj) ||
                   qobject_cast<CDSession*>(obj);
        })
        .setIcon(gt::gui::icon::add());

    addSingleAction(tr("Break"),
                    [](GtObject* package) {
                        gtInfo() << "Adding Break";

                        gtDataModel->appendChild(new CDBreak(), package);
                    })
        .setVisibilityMethod([](GtObject* obj) {
            return qobject_cast<CDPackage*>(obj) ||
                   qobject_cast<CDSession*>(obj);
        })
        .setIcon(gt::gui::icon::add());

    addSingleAction(tr("Session"),
                    [](GtObject* package) {
                        gtInfo() << "Adding Session";
                        gtDataModel->appendChild(new CDSession(), package);
                    })
        .setVisibilityMethod([](GtObject* obj) {
            return qobject_cast<CDPackage*>(obj) != nullptr ||
                   qobject_cast<CDSession*>(obj);
        })
        .setIcon(gt::gui::icon::add());

    addSingleAction("Duplicate",
                    [](GtObject* obj) {
                        if (!obj)
                            return;

                        auto parent = obj->parentObject();
                        if (!parent)
                            return;

                        auto newObj = obj->copy();
                        gtDataModel->appendChild(newObj, parent);
                    })
        .setVisibilityMethod([](GtObject* obj) {
            if (!obj->parentObject())
                return false;

            return qobject_cast<CDTalk*>(obj) != nullptr ||
                   qobject_cast<CDSession*>(obj);
        })
        .setIcon(gt::gui::icon::copy());
    ;
}

QIcon
CDPackageUI::icon(GtObject* obj) const
{
    if (qobject_cast<CDPackage*>(obj))
    {
        return gt::gui::icon::log();
    }
    else if (qobject_cast<CDBreak*>(obj))
    {
        return gt::gui::icon::sleep();
    }
    else if (qobject_cast<CDSession*>(obj))
    {
        return gt::gui::icon::folder();
    }
    return gt::gui::icon::comment();
}
