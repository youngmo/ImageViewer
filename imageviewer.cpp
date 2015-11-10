#include "imageviewer.h"
#include "ui_imageviewer.h"
#include "QtDebug"
#include "qfiledialog.h"
#include "qmessagebox.h"

ImageViewer::ImageViewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageViewer)
{
    ui->setupUi(this);

    //QImage image("/Users/an/Pictures/000.jpg");
    //ui->imageLabel->setPixmap(QPixmap::fromImage(image));

    ui->actionPrint->setEnabled(false);
}

ImageViewer::~ImageViewer()
{
    delete ui;
}

void ImageViewer::on_actionOpen_triggered()
{
    qDebug() << "open()";

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::currentPath());
    qDebug() << fileName;

    if (!fileName.isEmpty()) {
        QImage image(fileName);
        if (image.isNull()) {
            QMessageBox::information(this, tr("Image Viewer"), tr("Cannot load %1").arg(fileName));
            return;
        }

        ui->imageLabel->setPixmap(QPixmap::fromImage(image));

        ui->actionPrint->setEnabled(true);
        ui->actionFit_to_Window->setEnabled(true);

    }
}

void ImageViewer::on_actionZoom_In_25_triggered()
{
    qDebug() << "on_actionZoom_In_25_triggered()";

    qDebug() << imageLabel;
    qDebug() << ui->imageLabel;

    if (ui->imageLabel) {
        qDebug() << "if";
     ui->imageLabel->resize(0.5 * ui->imageLabel->pixmap()->size());
    }

    qDebug() << "end";
}

void ImageViewer::on_actionZoom_Out_25_triggered()
{

}
