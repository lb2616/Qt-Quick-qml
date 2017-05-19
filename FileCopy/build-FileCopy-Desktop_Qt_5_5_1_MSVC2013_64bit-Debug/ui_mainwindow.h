
#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *staLab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *srcLineEdit;
    QPushButton *selectSrcBtn;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *desLineEdit;
    QPushButton *selectDesBtn;
    QPushButton *startBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QProgressBar *totalProgressBar;
    QLabel *label_2;
    QProgressBar *sigProgressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(794, 225);
        QFont font;
        font.setPointSize(6);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        staLab = new QLabel(centralWidget);
        staLab->setObjectName(QStringLiteral("staLab"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        staLab->setFont(font1);
        staLab->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        staLab->setFrameShape(QFrame::StyledPanel);
        staLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(staLab, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        srcLineEdit = new QLineEdit(centralWidget);
        srcLineEdit->setObjectName(QStringLiteral("srcLineEdit"));
        QFont font2;
        font2.setPointSize(12);
        srcLineEdit->setFont(font2);
        srcLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(srcLineEdit);

        selectSrcBtn = new QPushButton(centralWidget);
        selectSrcBtn->setObjectName(QStringLiteral("selectSrcBtn"));
        selectSrcBtn->setFont(font2);
        selectSrcBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(selectSrcBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        desLineEdit = new QLineEdit(centralWidget);
        desLineEdit->setObjectName(QStringLiteral("desLineEdit"));
        desLineEdit->setFont(font2);
        desLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(desLineEdit);

        selectDesBtn = new QPushButton(centralWidget);
        selectDesBtn->setObjectName(QStringLiteral("selectDesBtn"));
        selectDesBtn->setFont(font2);
        selectDesBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(selectDesBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startBtn->sizePolicy().hasHeightForWidth());
        startBtn->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        startBtn->setFont(font3);
        startBtn->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(startBtn, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font2);

        horizontalLayout_3->addWidget(label);

        totalProgressBar = new QProgressBar(centralWidget);
        totalProgressBar->setObjectName(QStringLiteral("totalProgressBar"));
        totalProgressBar->setMaximumSize(QSize(16777215, 16));
        totalProgressBar->setFont(font2);
        totalProgressBar->setValue(0);

        horizontalLayout_3->addWidget(totalProgressBar);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);

        sigProgressBar = new QProgressBar(centralWidget);
        sigProgressBar->setObjectName(QStringLiteral("sigProgressBar"));
        sigProgressBar->setMaximumSize(QSize(16777215, 16));
        sigProgressBar->setFont(font2);
        sigProgressBar->setValue(0);

        horizontalLayout_3->addWidget(sigProgressBar);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Copy", 0));
        staLab->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\215\345\210\266", 0));
        srcLineEdit->setText(QApplication::translate("MainWindow", "C:/Users/Lemon/Desktop/picture", 0));
        selectSrcBtn->setText(QApplication::translate("MainWindow", " \351\200\211\346\213\251\346\226\207\344\273\266\345\244\271 ", 0));
        desLineEdit->setText(QApplication::translate("MainWindow", "C:/Users/Lemon/Desktop/img", 0));
        selectDesBtn->setText(QApplication::translate("MainWindow", " \347\233\256\346\240\207\346\226\207\344\273\266\345\244\271 ", 0));
        startBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", 0));
        label->setText(QApplication::translate("MainWindow", "\346\200\273\350\277\233\345\272\246\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\345\215\225\350\277\233\345\272\246\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
