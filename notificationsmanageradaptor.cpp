/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c NotificationManagerAdaptor interfaces/notificationmanager.xml -a notificationsmanageradaptor
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "notificationsmanageradaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class NotificationManagerAdaptor
 */

NotificationManagerAdaptor::NotificationManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

NotificationManagerAdaptor::~NotificationManagerAdaptor()
{
    // destructor
}

uint NotificationManagerAdaptor::addGroup(uint notificationUserId, const QString &eventType, const QString &summary, const QString &body, const QString &action, const QString &imageURI, uint count, const QString &identifier)
{
    // handle method call com.meego.core.MNotificationManager.addGroup
    uint groupId;
    QMetaObject::invokeMethod(parent(), "addGroup", Q_RETURN_ARG(uint, groupId), Q_ARG(uint, notificationUserId), Q_ARG(QString, eventType), Q_ARG(QString, summary), Q_ARG(QString, body), Q_ARG(QString, action), Q_ARG(QString, imageURI), Q_ARG(uint, count), Q_ARG(QString, identifier));
    return groupId;
}

uint NotificationManagerAdaptor::addGroup(uint notificationUserId, const QString &eventType)
{
    // handle method call com.meego.core.MNotificationManager.addGroup
    uint groupId;
    QMetaObject::invokeMethod(parent(), "addGroup", Q_RETURN_ARG(uint, groupId), Q_ARG(uint, notificationUserId), Q_ARG(QString, eventType));
    return groupId;
}

uint NotificationManagerAdaptor::addNotification(uint notificationUserId, uint groupId, const QString &eventType, const QString &summary, const QString &body, const QString &action, const QString &imageURI, uint count, const QString &identifier)
{
    // handle method call com.meego.core.MNotificationManager.addNotification
    uint notificationId;
    QMetaObject::invokeMethod(parent(), "addNotification", Q_RETURN_ARG(uint, notificationId), Q_ARG(uint, notificationUserId), Q_ARG(uint, groupId), Q_ARG(QString, eventType), Q_ARG(QString, summary), Q_ARG(QString, body), Q_ARG(QString, action), Q_ARG(QString, imageURI), Q_ARG(uint, count), Q_ARG(QString, identifier));
    return notificationId;
}

uint NotificationManagerAdaptor::addNotification(uint notificationUserId, uint groupId, const QString &eventType)
{
    // handle method call com.meego.core.MNotificationManager.addNotification
    uint notificationId;
    QMetaObject::invokeMethod(parent(), "addNotification", Q_RETURN_ARG(uint, notificationId), Q_ARG(uint, notificationUserId), Q_ARG(uint, groupId), Q_ARG(QString, eventType));
    return notificationId;
}

QList < MNotificationGroup >  NotificationManagerAdaptor::notificationGroupListWithIdentifiers(uint notificationUserId)
{
    // handle method call com.meego.core.MNotificationManager.notificationGroupListWithIdentifiers
    QList < MNotificationGroup >  result;
    QMetaObject::invokeMethod(parent(), "notificationGroupListWithIdentifiers", Q_RETURN_ARG(QList < MNotificationGroup > , result), Q_ARG(uint, notificationUserId));
    return result;
}

QList < uint >  NotificationManagerAdaptor::notificationIdList(uint notificationUserId)
{
    // handle method call com.meego.core.MNotificationManager.notificationIdList
    QList < uint >  result;
    QMetaObject::invokeMethod(parent(), "notificationIdList", Q_RETURN_ARG(QList < uint > , result), Q_ARG(uint, notificationUserId));
    return result;
}

QList < MNotification >  NotificationManagerAdaptor::notificationListWithIdentifiers(uint notificationUserId)
{
    // handle method call com.meego.core.MNotificationManager.notificationListWithIdentifiers
    QList < MNotification >  result;
    QMetaObject::invokeMethod(parent(), "notificationListWithIdentifiers", Q_RETURN_ARG(QList < MNotification > , result), Q_ARG(uint, notificationUserId));
    return result;
}

uint NotificationManagerAdaptor::notificationUserId()
{
    // handle method call com.meego.core.MNotificationManager.notificationUserId
    uint notificationUserId;
    QMetaObject::invokeMethod(parent(), "notificationUserId", Q_RETURN_ARG(uint, notificationUserId));
    return notificationUserId;
}

bool NotificationManagerAdaptor::removeGroup(uint notificationUserId, uint groupId)
{
    // handle method call com.meego.core.MNotificationManager.removeGroup
    bool result;
    QMetaObject::invokeMethod(parent(), "removeGroup", Q_RETURN_ARG(bool, result), Q_ARG(uint, notificationUserId), Q_ARG(uint, groupId));
    return result;
}

bool NotificationManagerAdaptor::removeNotification(uint notificationUserId, uint notificationId)
{
    // handle method call com.meego.core.MNotificationManager.removeNotification
    bool result;
    QMetaObject::invokeMethod(parent(), "removeNotification", Q_RETURN_ARG(bool, result), Q_ARG(uint, notificationUserId), Q_ARG(uint, notificationId));
    return result;
}

bool NotificationManagerAdaptor::updateGroup(uint notificationUserId, uint groupId, const QString &eventType, const QString &summary, const QString &body, const QString &action, const QString &imageURI, uint count, const QString &identifier)
{
    // handle method call com.meego.core.MNotificationManager.updateGroup
    bool result;
    QMetaObject::invokeMethod(parent(), "updateGroup", Q_RETURN_ARG(bool, result), Q_ARG(uint, notificationUserId), Q_ARG(uint, groupId), Q_ARG(QString, eventType), Q_ARG(QString, summary), Q_ARG(QString, body), Q_ARG(QString, action), Q_ARG(QString, imageURI), Q_ARG(uint, count), Q_ARG(QString, identifier));
    return result;
}

bool NotificationManagerAdaptor::updateGroup(uint notificationUserId, uint groupId, const QString &eventType)
{
    // handle method call com.meego.core.MNotificationManager.updateGroup
    bool result;
    QMetaObject::invokeMethod(parent(), "updateGroup", Q_RETURN_ARG(bool, result), Q_ARG(uint, notificationUserId), Q_ARG(uint, groupId), Q_ARG(QString, eventType));
    return result;
}

bool NotificationManagerAdaptor::updateNotification(uint notificationUserId, uint notificationId, const QString &eventType, const QString &summary, const QString &body, const QString &action, const QString &imageURI, uint count, const QString &identifier)
{
    // handle method call com.meego.core.MNotificationManager.updateNotification
    bool result;
    QMetaObject::invokeMethod(parent(), "updateNotification", Q_RETURN_ARG(bool, result), Q_ARG(uint, notificationUserId), Q_ARG(uint, notificationId), Q_ARG(QString, eventType), Q_ARG(QString, summary), Q_ARG(QString, body), Q_ARG(QString, action), Q_ARG(QString, imageURI), Q_ARG(uint, count), Q_ARG(QString, identifier));
    return result;
}

bool NotificationManagerAdaptor::updateNotification(uint notificationUserId, uint notificationId, const QString &eventType)
{
    // handle method call com.meego.core.MNotificationManager.updateNotification
    bool result;
    QMetaObject::invokeMethod(parent(), "updateNotification", Q_RETURN_ARG(bool, result), Q_ARG(uint, notificationUserId), Q_ARG(uint, notificationId), Q_ARG(QString, eventType));
    return result;
}
