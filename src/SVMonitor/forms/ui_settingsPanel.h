/********************************************************************************
** Form generated from reading UI file 'settingsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPANEL_H
#define UI_SETTINGSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_settingsPanelClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QRadioButton *rbtnConnectByEthernet;
    QLineEdit *txtTCPPort;
    QLineEdit *txtIPAddr;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *rbtnConnectByCom;
    QLineEdit *txtComPort;
    QLabel *label_6;
    QComboBox *cbxComSpeed;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *grbSaveData;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *rbtnCopyEna;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *btnCopyPath;
    QLineEdit *txtCopyPath;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinCycleRecMs;
    QLabel *label_7;
    QSpinBox *spinPacketSz;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbChange;
    QPushButton *btnSave;

    void setupUi(QDialog *settingsPanelClass)
    {
        if (settingsPanelClass->objectName().isEmpty())
            settingsPanelClass->setObjectName(QStringLiteral("settingsPanelClass"));
        settingsPanelClass->resize(550, 350);
        settingsPanelClass->setMinimumSize(QSize(550, 350));
        settingsPanelClass->setMaximumSize(QSize(550, 350));
        verticalLayout_3 = new QVBoxLayout(settingsPanelClass);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(settingsPanelClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rbtnConnectByEthernet = new QRadioButton(groupBox);
        rbtnConnectByEthernet->setObjectName(QStringLiteral("rbtnConnectByEthernet"));

        gridLayout->addWidget(rbtnConnectByEthernet, 0, 0, 1, 1);

        txtTCPPort = new QLineEdit(groupBox);
        txtTCPPort->setObjectName(QStringLiteral("txtTCPPort"));
        txtTCPPort->setEnabled(false);
        txtTCPPort->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(txtTCPPort, 0, 6, 1, 1);

        txtIPAddr = new QLineEdit(groupBox);
        txtIPAddr->setObjectName(QStringLiteral("txtIPAddr"));
        txtIPAddr->setEnabled(false);
        txtIPAddr->setMinimumSize(QSize(100, 0));
        txtIPAddr->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txtIPAddr, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(55, 0));

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        rbtnConnectByCom = new QRadioButton(groupBox);
        rbtnConnectByCom->setObjectName(QStringLiteral("rbtnConnectByCom"));
        rbtnConnectByCom->setMinimumSize(QSize(0, 0));
        rbtnConnectByCom->setChecked(true);

        gridLayout->addWidget(rbtnConnectByCom, 1, 0, 1, 1);

        txtComPort = new QLineEdit(groupBox);
        txtComPort->setObjectName(QStringLiteral("txtComPort"));
        txtComPort->setEnabled(true);
        txtComPort->setMinimumSize(QSize(100, 0));
        txtComPort->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txtComPort, 1, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(55, 0));

        gridLayout->addWidget(label_6, 1, 5, 1, 1);

        cbxComSpeed = new QComboBox(groupBox);
        cbxComSpeed->setObjectName(QStringLiteral("cbxComSpeed"));
        cbxComSpeed->setEnabled(true);
        cbxComSpeed->setEditable(true);

        gridLayout->addWidget(cbxComSpeed, 1, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addWidget(groupBox);

        grbSaveData = new QGroupBox(settingsPanelClass);
        grbSaveData->setObjectName(QStringLiteral("grbSaveData"));
        verticalLayout_2 = new QVBoxLayout(grbSaveData);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rbtnCopyEna = new QCheckBox(grbSaveData);
        rbtnCopyEna->setObjectName(QStringLiteral("rbtnCopyEna"));
        rbtnCopyEna->setEnabled(true);
        rbtnCopyEna->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(rbtnCopyEna);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(grbSaveData);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);

        horizontalLayout_2->addWidget(label_3);

        btnCopyPath = new QPushButton(grbSaveData);
        btnCopyPath->setObjectName(QStringLiteral("btnCopyPath"));
        btnCopyPath->setEnabled(false);
        btnCopyPath->setMinimumSize(QSize(30, 30));
        btnCopyPath->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SVMonitor/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCopyPath->setIcon(icon);

        horizontalLayout_2->addWidget(btnCopyPath);

        txtCopyPath = new QLineEdit(grbSaveData);
        txtCopyPath->setObjectName(QStringLiteral("txtCopyPath"));
        txtCopyPath->setEnabled(false);
        txtCopyPath->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(txtCopyPath);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(grbSaveData);

        groupBox_2 = new QGroupBox(settingsPanelClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 50));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spinCycleRecMs = new QSpinBox(groupBox_2);
        spinCycleRecMs->setObjectName(QStringLiteral("spinCycleRecMs"));
        spinCycleRecMs->setMinimum(5);
        spinCycleRecMs->setMaximum(5000);
        spinCycleRecMs->setValue(100);

        horizontalLayout_4->addWidget(spinCycleRecMs);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        spinPacketSz = new QSpinBox(groupBox_2);
        spinPacketSz->setObjectName(QStringLiteral("spinPacketSz"));
        spinPacketSz->setMinimum(1);
        spinPacketSz->setValue(10);

        horizontalLayout_4->addWidget(spinPacketSz);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        lbChange = new QLabel(settingsPanelClass);
        lbChange->setObjectName(QStringLiteral("lbChange"));

        horizontalLayout_6->addWidget(lbChange);

        btnSave = new QPushButton(settingsPanelClass);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout_6->addWidget(btnSave);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(settingsPanelClass);

        QMetaObject::connectSlotsByName(settingsPanelClass);
    } // setupUi

    void retranslateUi(QDialog *settingsPanelClass)
    {
        settingsPanelClass->setWindowTitle(QApplication::translate("settingsPanelClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        groupBox->setTitle(QApplication::translate("settingsPanelClass", "\320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        rbtnConnectByEthernet->setText(QApplication::translate("settingsPanelClass", "\321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \320\277\320\276 Ethernet", 0));
        label_5->setText(QApplication::translate("settingsPanelClass", "\320\277\320\276\321\200\321\202", 0));
        label->setText(QApplication::translate("settingsPanelClass", "ip \320\260\320\264\321\200\320\265\321\201", 0));
        label_2->setText(QApplication::translate("settingsPanelClass", "\320\277\320\276\321\200\321\202", 0));
        rbtnConnectByCom->setText(QApplication::translate("settingsPanelClass", "\321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \320\277\320\276 COM/UART", 0));
        label_6->setText(QApplication::translate("settingsPanelClass", "\321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", 0));
        cbxComSpeed->clear();
        cbxComSpeed->insertItems(0, QStringList()
         << QApplication::translate("settingsPanelClass", "1200", 0)
         << QApplication::translate("settingsPanelClass", "2400", 0)
         << QApplication::translate("settingsPanelClass", "4800", 0)
         << QApplication::translate("settingsPanelClass", "9600", 0)
         << QApplication::translate("settingsPanelClass", "19200", 0)
         << QApplication::translate("settingsPanelClass", "38400", 0)
         << QApplication::translate("settingsPanelClass", "57600", 0)
         << QApplication::translate("settingsPanelClass", "115200", 0)
        );
        cbxComSpeed->setCurrentText(QApplication::translate("settingsPanelClass", "1200", 0));
        grbSaveData->setTitle(QApplication::translate("settingsPanelClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
#ifndef QT_NO_TOOLTIP
        rbtnCopyEna->setToolTip(QApplication::translate("settingsPanelClass", "\320\220\320\272\321\202\320\270\320\262\320\275\320\276", 0));
#endif // QT_NO_TOOLTIP
        rbtnCopyEna->setText(QApplication::translate("settingsPanelClass", "\320\220\320\272\321\202\320\270\320\262\320\275\320\276", 0));
        label_3->setText(QApplication::translate("settingsPanelClass", "\320\277\321\203\321\202\321\214", 0));
        btnCopyPath->setText(QString());
        groupBox_2->setTitle(QApplication::translate("settingsPanelClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\271", 0));
        label_4->setText(QApplication::translate("settingsPanelClass", "\320\237\320\265\321\200\320\270\320\276\320\264 \320\267\320\260\320\277\320\270\321\201\320\270", 0));
        spinCycleRecMs->setSuffix(QApplication::translate("settingsPanelClass", " \320\274\321\201", 0));
        label_7->setText(QApplication::translate("settingsPanelClass", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\277\320\260\320\272\320\265\321\202\320\260", 0));
        lbChange->setText(QApplication::translate("settingsPanelClass", "*", 0));
        btnSave->setText(QApplication::translate("settingsPanelClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class settingsPanelClass: public Ui_settingsPanelClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPANEL_H
