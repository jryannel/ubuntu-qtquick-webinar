#include "valueobject.h"

ValueObject::ValueObject(QObject *parent)
    : QObject(parent),
      _value(Qt::blue)
{
}

QColor ValueObject::value() const
{
    return _value;
}

void ValueObject::setValue(const QColor& value)
{
    if(_value != value) {
        _value = value;
        emit valueChanged();
    }
}
