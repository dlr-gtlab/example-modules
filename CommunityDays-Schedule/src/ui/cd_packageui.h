/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CDPACKAGEUI_H
#define CDPACKAGEUI_H

#include <gt_packageui.h>

/**
 * @brief This class controls user interface actions
 * of the data model classes, i.e. sets icons or adds
 * Context menu entries to add new items
 */
class CDPackageUI : public GtPackageUI
{
    Q_OBJECT

public:

    Q_INVOKABLE CDPackageUI();

    QIcon icon(GtObject *obj) const;
};

#endif // CDPACKAGEUI_H
