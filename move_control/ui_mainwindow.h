/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *portNameBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QComboBox *dataBitsBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QComboBox *baudrateBox;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QComboBox *stopBitsBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QComboBox *parityBox;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *openButton;
    QPushButton *closeButton;
    QPushButton *startMove;
    QPushButton *stopMove;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 401, 131));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        portNameBox = new QComboBox(frame);
        portNameBox->setObjectName(QStringLiteral("portNameBox"));

        horizontalLayout_6->addWidget(portNameBox);


        horizontalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        dataBitsBox = new QComboBox(frame);
        dataBitsBox->setObjectName(QStringLiteral("dataBitsBox"));

        horizontalLayout_8->addWidget(dataBitsBox);


        horizontalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        baudrateBox = new QComboBox(frame);
        baudrateBox->setObjectName(QStringLiteral("baudrateBox"));

        horizontalLayout_7->addWidget(baudrateBox);


        horizontalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_10->addWidget(label_5);

        stopBitsBox = new QComboBox(frame_2);
        stopBitsBox->setObjectName(QStringLiteral("stopBitsBox"));

        horizontalLayout_10->addWidget(stopBitsBox);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        parityBox = new QComboBox(frame_2);
        parityBox->setObjectName(QStringLiteral("parityBox"));

        horizontalLayout_9->addWidget(parityBox);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        horizontalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        openButton = new QPushButton(frame_2);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_11->addWidget(openButton);

        closeButton = new QPushButton(frame_2);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_11->addWidget(closeButton);


        horizontalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(frame_2);

        startMove = new QPushButton(centralWidget);
        startMove->setObjectName(QStringLiteral("startMove"));
        startMove->setGeometry(QRect(40, 170, 81, 23));
        stopMove = new QPushButton(centralWidget);
        stopMove->setObjectName(QStringLiteral("stopMove"));
        stopMove->setGeometry(QRect(130, 170, 81, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\351\200\232\350\256\257\351\205\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        dataBitsBox->clear();
        dataBitsBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        baudrateBox->clear();
        baudrateBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        stopBitsBox->clear();
        stopBitsBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        parityBox->clear();
        parityBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        openButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        closeButton->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
        startMove->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\220\345\212\250", Q_NULLPTR));
        stopMove->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\350\277\220\345\212\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
