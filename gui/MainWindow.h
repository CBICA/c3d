#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>

namespace Ui {
class MainWindow;
}

class QListView;

class MainWindow : public QMainWindow
{
  Q_OBJECT
  
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_btnChangeDir_clicked();
  void onWorkingDirectoryChanged(const QString &dir);

  void on_btnRun_clicked();

  void onProcessFinished(int rc);
  void onProcessStandardOutput();
  void onProcessStandardError();

  void onFileListDoubleClick(const QModelIndex &index);


private:
  Ui::MainWindow *ui;
  QFileSystemModel *m_FileSystemModel;
  QListView *m_CurrentDirView;
};

#endif // MAINWINDOW_H
