#ifndef FOMOSV2_CL_PROGRESSSLIDESHOWDIALOG_H
#define FOMOSV2_CL_PROGRESSSLIDESHOWDIALOG_H

#include <QProgressDialog>
#include <QTimer>
#include <QTime>

namespace Ui {
    class ProgressSlideshowDialog;
}

class ProgressSlideshowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProgressSlideshowDialog(const QStringList &slidesDirectories, const QString &statusMsg = "", int changeInterval = 20, const QString &drive = "/dev/mmcblk0", QWidget *parent = 0);
    ~ProgressSlideshowDialog();
    void enableIOaccounting();
    void disableIOaccounting();

public slots:
            void setLabelText(const QString &text);
    void setMaximum(qint64 bytes);
    void nextSlide();
    void updateIOstats();
    void pauseIOaccounting();
    void resumeIOaccounting();
    void changeDrive(const QString &drive);

protected:
    QString _drive;
    QStringList _slides;
    int _pos, _changeInterval;
    uint _sectorsStart, _maxSectors, _pausedAt;
    QTimer _timer, _iotimer;
    QTime _t1;

    uint sectorsWritten();


private:
    Ui::ProgressSlideshowDialog *ui;
};

#endif //FOMOSV2_CL_PROGRESSSLIDESHOWDIALOG_H