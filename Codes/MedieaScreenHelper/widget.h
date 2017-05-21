#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <windows.h>

#include <winbase.h>
#include <winnls.h>
#include <dbt.h>
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QVector>
#include <QStringList>
#include <QPushButton>

#include <QFileInfo>
#include <QDir>
#include <QMessageBox>
#include <QFileDialog>
#include <QLineEdit>
#include <QSpinBox>
#include <QProgressDialog>
#include <QTimer>
namespace Ui {
class Widget;
}


typedef struct USB_DISK_INFO
{
    QString DirPath;
    float TotalMemory;
    float FreeMemory;
}USB_DISK_INFO;


class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void Init();
    void ScanHD();
    void AddDisk(QString &DiskName);
    void DeleteDisk(QString &DiskName);
    bool SearchDisk(QString &DiskName,int &iter);
    void GetMemorySize(USB_DISK_INFO & disk);
    void AddComboBoxItem(QString &item);
    void DeleteComboBoxItem(QString &item);
    //bool winEvent(MSG *message, long *result);
    char FirstDriveFromMask (ULONG unitmask);
    USB_DISK_INFO GetCheckedDisk();
    bool nativeEvent(const QByteArray &eventType, void *message, long *result);

    void formatDir();
    void formatUdisk(QString diskDir);
    bool isValideDriver(QString diskDir);
    void windowFeature();
private slots:
    void on_comboBox_USB_currentIndexChanged(QString );
    void OpenfileDaliog();
    void OpenmultifileDaliog();
    void Justselectvideo();
    void Justselectpicture();
    void SethorizontalSlidervolume();
    void SetspinBoxvolume();
    void SethorizontalSliderbright();
    void SetspinBoxbright();
    void SethorizontalSliderbright_1();
    void SetspinBoxbright_1();
    void SethorizontalSliderbright_2();
    void SetspinBoxbright_2();
//    void Showcopyprogress();
    bool Filecopy(QString sourcefile, QString tofile);
    void Createxml();
    QString GetLineEdit_text(QLineEdit *line);
    int GetListview_counts();
    QString GetTextEdit_text();
    QString GetspinBox_text(QSpinBox *box);
    bool IsChecked_CheckBox(QCheckBox *Cbox);
    bool GetvideoClicked();
    bool GetpictureClicked();
    QStringList GetPictureList();
    QString getVideoList();

private:
    Ui::Widget *ui;
    QVector<USB_DISK_INFO> usb_disk_info;
    USB_DISK_INFO CurrentUseDisk;
    bool VideoBtnClickedFlag = false;
    bool PictureBtnClickedFlag = false;
    QStringList m_listview;
    QString m_videoname;
    int currentValue;
};

#endif // WIDGET_H
