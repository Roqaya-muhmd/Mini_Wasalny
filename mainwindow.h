#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void on_addg_btn_1_toggled(bool checked);
    void on_delete_btn_1_toggled(bool checked);
    void on_addc_btn_1_toggled(bool checked);
    void on_update_btn_1_toggled(bool checked);
    void on_upload_btn_1_toggled(bool checked);
    void on_deleteE_btn_1_toggled(bool checked);
    void on_showGraph_btn_1_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
