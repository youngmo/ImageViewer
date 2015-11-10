#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include "qlabel.h"
#include "qscrollarea.h"

namespace Ui {
class ImageViewer;
}

class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageViewer(QWidget *parent = 0);
    ~ImageViewer();

private slots:
    void on_actionOpen_triggered();

    void on_actionZoom_In_25_triggered();

    void on_actionZoom_Out_25_triggered();

private:
    Ui::ImageViewer *ui;
    QLabel *imageLabel;
    QScrollArea *scrollArea;
};

#endif // IMAGEVIEWER_H
