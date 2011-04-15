import QtQuick 1.0

//3{
//import Application 1.0
//3}

Rectangle {
    width: 320
    height: 240
    //0{ // default
    color: "blue"
    //0}

    //1{ // use a simple c++ value in qml
//    color: value
    //1}

    //2{ // use a c++ value in qml
//    color: valueObject.value
    //2{

    //3{ // use a new element from c++ object
//    ValueElement {
//        id: valueElement
//    }

//    color: valueElement.value
    //3}


    MouseArea {
        anchors.fill:  parent
        //2{
//        onClicked: valueObject.value = "yellow"
        //2}
        //3{
//        onClicked: valueElement.value = "red"
        //3}

    }
}
