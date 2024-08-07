#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "highlighter.h"
#include "highlighterQss.h"
#include "highlighterJson.h"
#include "treefileswidget.h"

#include "codeeditor.h"

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
    int count = 2;
    bool eventFilter(QObject *target, QEvent *event);

private slots:
    void ruleChengeButton();
    void NewFileMenu();
    void OpenFileMenu();
    void HelpHelpMenu();
    void HelpQtHelpMenu();
    void on_action_3_triggered();
    void closeFileMenu();
    void SaveFileMenu();
    void SaveAtFileMenu();
    void SaveAllFileMenu();
    void closePrMenu();
    void UndoMenu();
    void RedoMenu();
    void CutMenu();
    void CopyMenu();
    void PastMenu();
    void SelectAllMenu();
    void addCppColorMenu();
    void addJSONColorMenu();
    void addQSSColorMenu();
    void addPlainTextColorMenu();
    void on_tabWidget_tabCloseRequested(int index);
    void setSave();
    void addZVTabWidget(int index);
    void setCoderMenuBarUTF8();
    void setCoderMenuBarIBM866();
    void setCoderMenuBarWindows_1251();
    void setCodirLabel(int index);

private:
    Ui::MainWindow *ui;
    void setupMenuBar();
    QString replaceText;
    QString searchinText;
    void setInterfaceStyle();
    TreeFilesWidget *treeFilesWidget;
    void setFileInfo(QString fname);
    void setFilePathLabel(QString fname);

};

#endif // MAINWINDOW_H
