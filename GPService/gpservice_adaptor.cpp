/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i gpservice_adaptor.h -a :gpservice_adaptor.cpp gpservice.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "gpservice_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class GPServiceAdaptor
 */

GPServiceAdaptor::GPServiceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

GPServiceAdaptor::~GPServiceAdaptor()
{
    // destructor
}

void GPServiceAdaptor::connect(const QString &server, const QString &username, const QString &passwd)
{
    // handle method call com.yuezk.qt.GPService.connect
    QMetaObject::invokeMethod(parent(), "connect", Q_ARG(QString, server), Q_ARG(QString, username), Q_ARG(QString, passwd));
}

void GPServiceAdaptor::disconnect()
{
    // handle method call com.yuezk.qt.GPService.disconnect
    QMetaObject::invokeMethod(parent(), "disconnect");
}

int GPServiceAdaptor::status()
{
    // handle method call com.yuezk.qt.GPService.status
    int out0;
    QMetaObject::invokeMethod(parent(), "status", Q_RETURN_ARG(int, out0));
    return out0;
}

