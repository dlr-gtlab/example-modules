/* 
 * CommunityDays Module
 * Author: Martin Siggel
 *
 * SPDX-FileCopyrightText: 2024 German Aerospace Center (DLR)
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CD_COMMUNITYDAYS_H
#define CD_COMMUNITYDAYS_H

#include <gt_moduleinterface.h>
#include <gt_datamodelinterface.h>
#include <gt_mdiinterface.h>

/**
 * @generated 1.4.0
 * @brief The CDCommunityDays class
 */
class CDCommunityDays : public QObject,
        public GtModuleInterface,
        public GtDatamodelInterface,
        public GtMdiInterface
{
    Q_OBJECT

    GT_MODULE("cd_communitydays.json")

    Q_INTERFACES(GtModuleInterface)
    Q_INTERFACES(GtDatamodelInterface)
    Q_INTERFACES(GtMdiInterface)
    
public:

    /**
     * @brief Returns current version number of module
     * @return version number
     */
    GtVersionNumber version() override;

    /**
     * @brief Returns module description
     * @return description
     */
    QString description() const override;

    /**
     * @brief Initializes module. Called on application startup.
     */
    void init() override;

    /**
     * @brief Passes additional module information to the framework.
     *
     * NOTE: A reference to the author can significantly help the user to
     * know who to contact in case of issues or other request.
     * @return module meta information.
     */
    MetaInformation metaInformation() const override;

    /**
     * @brief Returns static meta objects of datamodel package.
     * @return package meta object
     */
    QMetaObject package() override;

    /**
     * @brief Returns static meta objects of datamodel classes.
     * @return list including meta objects
     */
    QList<QMetaObject> data() override;

    /**
     * @brief Returns true if module is a standalone module with own data
     * model structure. Otherwise module only extends the overall application
     * with additional functionalities like classes, calculators or 
     * graphical user interfaces.
     * @return Standalone indicator.
     */
    bool standAlone() override;


    QMap<const char *, QMetaObject> uiItems();

};

#endif // CD_COMMUNITYDAYS_H
