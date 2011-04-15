#ifndef VALUEOBJECT_H
#define VALUEOBJECT_H

#include <QtGui>

class ValueObject : public QObject {
    Q_OBJECT
    Q_PROPERTY(QColor value READ value WRITE setValue NOTIFY valueChanged)
public:
    ValueObject(QObject *parent=0);
    void setValue(const QColor& value);
    QColor value() const;
signals:
    void valueChanged();
private:
    QColor _value;
};

#endif // VALUEOBJECT_H
