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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *portNameBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QComboBox *baudrateBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QComboBox *dataBitsBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QComboBox *parityBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QComboBox *stopBitsBox;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *openButton;
    QPushButton *closeButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *dataBaseIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *dataBaseName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *userName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *passWord;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *connectDB;
    QPushButton *disconnectDB;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_20;
    QRadioButton *motorRadioButton;
    QLabel *label_17;
    QComboBox *motorBox;
    QSpacerItem *horizontalSpacer;
    QRadioButton *hrRadioButton;
    QLabel *label_18;
    QComboBox *HRBox;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *beltRadioButton;
    QLabel *label_19;
    QComboBox *beltBox;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *startCollectButton;
    QPushButton *stopCollectButton;
    QProgressBar *progressBar;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLineEdit *motorCategory;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QLineEdit *harmonic;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *motorCategory_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *c_motorCurrentplot;
    QCustomPlot *c_motorAngleplot;
    QCustomPlot *c_motorVelocityplot;
    QLineEdit *lineEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 500);
        MainWindow->setMinimumSize(QSize(850, 500));
        MainWindow->setMaximumSize(QSize(850, 500));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 178, 221));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        portNameBox = new QComboBox(groupBox);
        portNameBox->setObjectName(QStringLiteral("portNameBox"));

        horizontalLayout_6->addWidget(portNameBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        baudrateBox = new QComboBox(groupBox);
        baudrateBox->setObjectName(QStringLiteral("baudrateBox"));

        horizontalLayout_7->addWidget(baudrateBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        dataBitsBox = new QComboBox(groupBox);
        dataBitsBox->setObjectName(QStringLiteral("dataBitsBox"));

        horizontalLayout_8->addWidget(dataBitsBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        parityBox = new QComboBox(groupBox);
        parityBox->setObjectName(QStringLiteral("parityBox"));

        horizontalLayout_9->addWidget(parityBox);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_10->addWidget(label_5);

        stopBitsBox = new QComboBox(groupBox);
        stopBitsBox->setObjectName(QStringLiteral("stopBitsBox"));

        horizontalLayout_10->addWidget(stopBitsBox);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        openButton = new QPushButton(groupBox);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_11->addWidget(openButton);

        closeButton = new QPushButton(groupBox);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_11->addWidget(closeButton);


        verticalLayout_2->addLayout(horizontalLayout_11);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 240, 181, 191));
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        dataBaseIP = new QLineEdit(groupBox_2);
        dataBaseIP->setObjectName(QStringLiteral("dataBaseIP"));
        dataBaseIP->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(dataBaseIP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        dataBaseName = new QLineEdit(groupBox_2);
        dataBaseName->setObjectName(QStringLiteral("dataBaseName"));
        dataBaseName->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(dataBaseName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        userName = new QLineEdit(groupBox_2);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(userName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(21);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        passWord = new QLineEdit(groupBox_2);
        passWord->setObjectName(QStringLiteral("passWord"));
        passWord->setEchoMode(QLineEdit::Password);
        passWord->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(passWord);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        connectDB = new QPushButton(groupBox_2);
        connectDB->setObjectName(QStringLiteral("connectDB"));

        horizontalLayout_5->addWidget(connectDB);

        disconnectDB = new QPushButton(groupBox_2);
        disconnectDB->setObjectName(QStringLiteral("disconnectDB"));

        horizontalLayout_5->addWidget(disconnectDB);


        verticalLayout->addLayout(horizontalLayout_5);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(200, 10, 391, 121));
        horizontalLayoutWidget_3 = new QWidget(groupBox_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 20, 371, 41));
        horizontalLayout_20 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        motorRadioButton = new QRadioButton(horizontalLayoutWidget_3);
        motorRadioButton->setObjectName(QStringLiteral("motorRadioButton"));

        horizontalLayout_20->addWidget(motorRadioButton);

        label_17 = new QLabel(horizontalLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_20->addWidget(label_17);

        motorBox = new QComboBox(horizontalLayoutWidget_3);
        motorBox->setObjectName(QStringLiteral("motorBox"));
        motorBox->setMouseTracking(false);
        motorBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_20->addWidget(motorBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer);

        hrRadioButton = new QRadioButton(horizontalLayoutWidget_3);
        hrRadioButton->setObjectName(QStringLiteral("hrRadioButton"));

        horizontalLayout_20->addWidget(hrRadioButton);

        label_18 = new QLabel(horizontalLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_20->addWidget(label_18);

        HRBox = new QComboBox(horizontalLayoutWidget_3);
        HRBox->setObjectName(QStringLiteral("HRBox"));

        horizontalLayout_20->addWidget(HRBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_2);

        beltRadioButton = new QRadioButton(horizontalLayoutWidget_3);
        beltRadioButton->setObjectName(QStringLiteral("beltRadioButton"));

        horizontalLayout_20->addWidget(beltRadioButton);

        label_19 = new QLabel(horizontalLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_20->addWidget(label_19);

        beltBox = new QComboBox(horizontalLayoutWidget_3);
        beltBox->setObjectName(QStringLiteral("beltBox"));

        horizontalLayout_20->addWidget(beltBox);

        horizontalLayoutWidget_4 = new QWidget(groupBox_3);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 70, 371, 41));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_14->setSpacing(21);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        startCollectButton = new QPushButton(horizontalLayoutWidget_4);
        startCollectButton->setObjectName(QStringLiteral("startCollectButton"));

        horizontalLayout_14->addWidget(startCollectButton);

        stopCollectButton = new QPushButton(horizontalLayoutWidget_4);
        stopCollectButton->setObjectName(QStringLiteral("stopCollectButton"));

        horizontalLayout_14->addWidget(stopCollectButton);

        progressBar = new QProgressBar(horizontalLayoutWidget_4);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(7, 0));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setInputMethodHints(Qt::ImhNone);
        progressBar->setValue(10);
        progressBar->setInvertedAppearance(false);

        horizontalLayout_14->addWidget(progressBar);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(610, 10, 233, 121));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(17);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_12->addWidget(label_10);

        motorCategory = new QLineEdit(groupBox_4);
        motorCategory->setObjectName(QStringLiteral("motorCategory"));
        motorCategory->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(motorCategory);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_13->addWidget(label_11);

        harmonic = new QLineEdit(groupBox_4);
        harmonic->setObjectName(QStringLiteral("harmonic"));
        harmonic->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(harmonic);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(17);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_15->addWidget(label_12);

        motorCategory_2 = new QLineEdit(groupBox_4);
        motorCategory_2->setObjectName(QStringLiteral("motorCategory_2"));
        motorCategory_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(motorCategory_2);


        verticalLayout_4->addLayout(horizontalLayout_15);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(200, 130, 641, 341));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 3);
        c_motorCurrentplot = new QCustomPlot(groupBox_5);
        c_motorCurrentplot->setObjectName(QStringLiteral("c_motorCurrentplot"));

        verticalLayout_3->addWidget(c_motorCurrentplot);

        c_motorAngleplot = new QCustomPlot(groupBox_5);
        c_motorAngleplot->setObjectName(QStringLiteral("c_motorAngleplot"));

        verticalLayout_3->addWidget(c_motorAngleplot);

        c_motorVelocityplot = new QCustomPlot(groupBox_5);
        c_motorVelocityplot->setObjectName(QStringLiteral("c_motorVelocityplot"));

        verticalLayout_3->addWidget(c_motorVelocityplot);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 440, 161, 20));
        MainWindow->setCentralWidget(centralWidget);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\260\220\346\263\242\345\207\217\351\200\237\345\231\250\346\225\260\346\215\256\351\207\207\351\233\206\347\263\273\347\273\237", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\351\200\232\350\256\257\351\205\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        baudrateBox->clear();
        baudrateBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        dataBitsBox->clear();
        dataBitsBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        parityBox->clear();
        parityBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        stopBitsBox->clear();
        stopBitsBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        openButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        closeButton->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\351\205\215\347\275\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223IP\357\274\232", Q_NULLPTR));
        dataBaseIP->setText(QApplication::translate("MainWindow", "localhost", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\357\274\232", Q_NULLPTR));
        dataBaseName->setText(QApplication::translate("MainWindow", "harmonic", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        userName->setText(QApplication::translate("MainWindow", "root", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        passWord->setText(QApplication::translate("MainWindow", "zk123", Q_NULLPTR));
        connectDB->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", Q_NULLPTR));
        disconnectDB->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\346\226\255\345\274\200", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\257\225\351\252\214\350\256\276\347\275\256", Q_NULLPTR));
        motorRadioButton->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\345\256\236\351\252\214", Q_NULLPTR));
        motorBox->clear();
        motorBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "#1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "#2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "#3", Q_NULLPTR)
        );
        hrRadioButton->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "\345\207\217\351\200\237\345\231\250\345\256\236\351\252\214", Q_NULLPTR));
        HRBox->clear();
        HRBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "#1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "#2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "#3", Q_NULLPTR)
        );
        beltRadioButton->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "\347\232\256\345\270\246\345\256\236\351\252\214", Q_NULLPTR));
        beltBox->clear();
        beltBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "#1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "#2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "#3", Q_NULLPTR)
        );
        startCollectButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206", Q_NULLPTR));
        stopCollectButton->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\351\207\207\351\233\206", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\345\236\213\345\217\267\357\274\232", Q_NULLPTR));
        motorCategory->setText(QApplication::translate("MainWindow", "\345\244\232\346\221\251\345\267\235HDXXX", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\207\217\351\200\237\345\231\250\345\236\213\345\217\267\357\274\232", Q_NULLPTR));
        harmonic->setText(QApplication::translate("MainWindow", "\347\273\277\347\232\204\350\260\220\346\263\242", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\347\232\256\345\270\246\345\236\213\345\217\267\357\274\232", Q_NULLPTR));
        motorCategory_2->setText(QApplication::translate("MainWindow", "XXXX", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\256\236\346\227\266\346\233\262\347\272\277", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "\345\267\245\344\275\234\346\227\245\345\277\227\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
