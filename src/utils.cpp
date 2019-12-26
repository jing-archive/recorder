#include "utils.h"

#include <QDateTime>
#include <QRandomGenerator>

Utils::Utils(QObject *parent) : QObject(parent)
{
}

QString Utils::formatDateTime(const QString &datetime)
{
    return QDateTime::fromString(datetime, Qt::TextDate).toString(Qt::DefaultLocaleShortDate);
}

QString Utils::formatTime(int time)
{
    return QTime::fromMSecsSinceStartOfDay(time).toString();
}

int Utils::randomNumber()
{
    auto generator = QRandomGenerator::securelySeeded();
    return generator.bounded(500);
}