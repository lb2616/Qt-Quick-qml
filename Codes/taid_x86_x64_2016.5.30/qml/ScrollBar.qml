import QtQuick 2.0
Item {
    id: scrollBar
    property real position
    property real pageSize
    property variant orientation : Qt.Vertical

    // A light, semi-transparent background
    Rectangle {
        id: background
        anchors.fill: parent
        radius: orientation == Qt.Vertical ? (width/2 - 1) : (height/2 - 1)
        color: "white"
        opacity: 0.3
    }

    // Size the bar to the required size, depending upon the orientation.
    Rectangle {
        x: orientation == Qt.Vertical ? 1 : (scrollBar.position * (scrollBar.width-2) + 1)
        y: orientation == Qt.Vertical ? (scrollBar.position * (scrollBar.height-2) + 1) : 1
        width: orientation == Qt.Vertical ? (parent.width-2) : (scrollBar.pageSize * (scrollBar.width-2))
        height: orientation == Qt.Vertical ? (scrollBar.pageSize * (scrollBar.height-2)) : (parent.height-2)
        radius: orientation == Qt.Vertical ? (width/2 - 1) : (height/2 - 1)
        color: "black"
        opacity: 0.7
    }
}
