#include <QtGui>
#include <QtDeclarative>

#include "valueobject.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QDeclarativeView view;

    //1{ // push a simple value to qml
//    view.rootContext()->setContextProperty("value", QColor("green"));
    //1}

    //2{ // push a QObject to qml
//    ValueObject* value = new ValueObject(QApplication::instance());
//    view.rootContext()->setContextProperty("valueObject", value);
    //2}

    //3{ register a new type to qml
//    qmlRegisterType<ValueObject>("Application", 1, 0, "ValueElement");
    //3}

    view.setSource(QUrl::fromLocalFile("main.qml"));
    view.show();
    return app.exec();
}
