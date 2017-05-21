
#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton_video;
    QRadioButton *radioButton_picture;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_selectvideo;
    QListView *listView;
    QPushButton *pushbutton_selectpicture;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_hideTime;
    QCheckBox *checkBox_hideTitle;
    QCheckBox *checkBox_hideScroText;
    QCheckBox *checkBox_fullscreen;
    QSlider *horizontalSlider_volume;
    QSlider *horizontalSlider_bright;
    QSpinBox *spinBox_volume;
    QSpinBox *spinBox_bright;
    QSlider *horizontalSlider_1_bright;
    QSpinBox *spinBox_1_bright;
    QSlider *horizontalSlider_2_bright;
    QSpinBox *spinBox_2_bright;
    QSpinBox *spinBox_1_time;
    QSpinBox *spinBox_2_time;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_USB;
    QPushButton *pushButton_makeudisk;
    QCheckBox *checkBox_Reset;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_copy;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(814, 417);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 321, 371));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 310, 291, 51));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 260, 291, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 240, 54, 12));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 290, 91, 16));
        radioButton_video = new QRadioButton(groupBox);
        radioButton_video->setObjectName(QStringLiteral("radioButton_video"));
        radioButton_video->setGeometry(QRect(70, 40, 89, 16));
        radioButton_picture = new QRadioButton(groupBox);
        radioButton_picture->setObjectName(QStringLiteral("radioButton_picture"));
        radioButton_picture->setGeometry(QRect(190, 40, 89, 16));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 100, 291, 20));
        pushButton_selectvideo = new QPushButton(groupBox);
        pushButton_selectvideo->setObjectName(QStringLiteral("pushButton_selectvideo"));
        pushButton_selectvideo->setGeometry(QRect(100, 200, 81, 23));
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 70, 291, 121));
        pushbutton_selectpicture = new QPushButton(groupBox);
        pushbutton_selectpicture->setObjectName(QStringLiteral("pushbutton_selectpicture"));
        pushbutton_selectpicture->setGeometry(QRect(90, 200, 101, 23));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 20, 251, 371));
        checkBox_hideTime = new QCheckBox(groupBox_2);
        checkBox_hideTime->setObjectName(QStringLiteral("checkBox_hideTime"));
        checkBox_hideTime->setGeometry(QRect(20, 168, 171, 16));
        checkBox_hideTitle = new QCheckBox(groupBox_2);
        checkBox_hideTitle->setObjectName(QStringLiteral("checkBox_hideTitle"));
        checkBox_hideTitle->setGeometry(QRect(20, 190, 151, 16));
        checkBox_hideScroText = new QCheckBox(groupBox_2);
        checkBox_hideScroText->setObjectName(QStringLiteral("checkBox_hideScroText"));
        checkBox_hideScroText->setGeometry(QRect(20, 146, 151, 16));
        checkBox_fullscreen = new QCheckBox(groupBox_2);
        checkBox_fullscreen->setObjectName(QStringLiteral("checkBox_fullscreen"));
        checkBox_fullscreen->setGeometry(QRect(20, 122, 151, 16));
        horizontalSlider_volume = new QSlider(groupBox_2);
        horizontalSlider_volume->setObjectName(QStringLiteral("horizontalSlider_volume"));
        horizontalSlider_volume->setGeometry(QRect(60, 40, 111, 22));
        horizontalSlider_volume->setMaximum(100);
        horizontalSlider_volume->setOrientation(Qt::Horizontal);
        horizontalSlider_bright = new QSlider(groupBox_2);
        horizontalSlider_bright->setObjectName(QStringLiteral("horizontalSlider_bright"));
        horizontalSlider_bright->setGeometry(QRect(60, 70, 111, 22));
        horizontalSlider_bright->setMaximum(100);
        horizontalSlider_bright->setOrientation(Qt::Horizontal);
        spinBox_volume = new QSpinBox(groupBox_2);
        spinBox_volume->setObjectName(QStringLiteral("spinBox_volume"));
        spinBox_volume->setGeometry(QRect(180, 40, 42, 22));
        spinBox_volume->setMaximum(100);
        spinBox_bright = new QSpinBox(groupBox_2);
        spinBox_bright->setObjectName(QStringLiteral("spinBox_bright"));
        spinBox_bright->setGeometry(QRect(180, 70, 42, 22));
        spinBox_bright->setMaximum(100);
        horizontalSlider_1_bright = new QSlider(groupBox_2);
        horizontalSlider_1_bright->setObjectName(QStringLiteral("horizontalSlider_1_bright"));
        horizontalSlider_1_bright->setGeometry(QRect(60, 250, 111, 22));
        horizontalSlider_1_bright->setMaximum(100);
        horizontalSlider_1_bright->setOrientation(Qt::Horizontal);
        spinBox_1_bright = new QSpinBox(groupBox_2);
        spinBox_1_bright->setObjectName(QStringLiteral("spinBox_1_bright"));
        spinBox_1_bright->setGeometry(QRect(180, 250, 42, 22));
        spinBox_1_bright->setMaximum(100);
        horizontalSlider_2_bright = new QSlider(groupBox_2);
        horizontalSlider_2_bright->setObjectName(QStringLiteral("horizontalSlider_2_bright"));
        horizontalSlider_2_bright->setGeometry(QRect(60, 330, 111, 22));
        horizontalSlider_2_bright->setMaximum(100);
        horizontalSlider_2_bright->setOrientation(Qt::Horizontal);
        spinBox_2_bright = new QSpinBox(groupBox_2);
        spinBox_2_bright->setObjectName(QStringLiteral("spinBox_2_bright"));
        spinBox_2_bright->setGeometry(QRect(180, 330, 42, 22));
        spinBox_2_bright->setMaximum(100);
        spinBox_1_time = new QSpinBox(groupBox_2);
        spinBox_1_time->setObjectName(QStringLiteral("spinBox_1_time"));
        spinBox_1_time->setGeometry(QRect(60, 220, 81, 22));
        spinBox_1_time->setMaximum(6000);
        spinBox_2_time = new QSpinBox(groupBox_2);
        spinBox_2_time->setObjectName(QStringLiteral("spinBox_2_time"));
        spinBox_2_time->setGeometry(QRect(60, 290, 81, 22));
        spinBox_2_time->setMaximum(6000);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 40, 51, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 70, 54, 12));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 220, 54, 12));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 260, 54, 12));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 330, 54, 12));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 290, 54, 12));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(610, 20, 171, 201));
        comboBox_USB = new QComboBox(groupBox_3);
        comboBox_USB->setObjectName(QStringLiteral("comboBox_USB"));
        comboBox_USB->setGeometry(QRect(40, 100, 91, 31));
        pushButton_makeudisk = new QPushButton(groupBox_3);
        pushButton_makeudisk->setObjectName(QStringLiteral("pushButton_makeudisk"));
        pushButton_makeudisk->setGeometry(QRect(40, 160, 91, 31));
        checkBox_Reset = new QCheckBox(groupBox_3);
        checkBox_Reset->setObjectName(QStringLiteral("checkBox_Reset"));
        checkBox_Reset->setGeometry(QRect(40, 40, 81, 16));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(610, 260, 171, 131));
        pushButton_copy = new QPushButton(Widget);
        pushButton_copy->setObjectName(QStringLiteral("pushButton_copy"));
        pushButton_copy->setGeometry(QRect(650, 350, 91, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        groupBox->setTitle(QApplication::translate("Widget", " Resource Import", 0));
        label->setText(QApplication::translate("Widget", "Title", 0));
        label_2->setText(QApplication::translate("Widget", "Scroll Text", 0));
        radioButton_video->setText(QApplication::translate("Widget", "   video", 0));
        radioButton_picture->setText(QApplication::translate("Widget", " picture", 0));
        pushButton_selectvideo->setText(QApplication::translate("Widget", "Select Video", 0));
        pushbutton_selectpicture->setText(QApplication::translate("Widget", "Select Picture", 0));
        groupBox_2->setTitle(QApplication::translate("Widget", " Parameter Configure", 0));
        checkBox_hideTime->setText(QApplication::translate("Widget", "Hidden Time and Date Area", 0));
        checkBox_hideTitle->setText(QApplication::translate("Widget", "Hidden Title Area", 0));
        checkBox_hideScroText->setText(QApplication::translate("Widget", "Hidden ScrollText Area", 0));
        checkBox_fullscreen->setText(QApplication::translate("Widget", "Show Full Screen", 0));
        label_3->setText(QApplication::translate("Widget", " volume", 0));
        label_4->setText(QApplication::translate("Widget", " bright ", 0));
        label_5->setText(QApplication::translate("Widget", "time", 0));
        label_6->setText(QApplication::translate("Widget", "brigt", 0));
        label_7->setText(QApplication::translate("Widget", "bright", 0));
        label_8->setText(QApplication::translate("Widget", "time", 0));
        groupBox_3->setTitle(QApplication::translate("Widget", " Make Tools", 0));
        pushButton_makeudisk->setText(QApplication::translate("Widget", "Make UDisk", 0));
        checkBox_Reset->setText(QApplication::translate("Widget", " Reset", 0));
        pushButton_copy->setText(QApplication::translate("Widget", "Copy File", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
