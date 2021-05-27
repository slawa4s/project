#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QComboBox>
#include "json.h"
#include <dirent.h>
#include <stdio.h>

class MessageList;

class MainWindow : public QWidget
{
	Q_OBJECT
private:
    QString username;
    QString email;
    std::vector<std::string> icons{};
public:
    ToDo_Json j;
    QString get_username() const;
    void set_username(MessageList *ml,  MessageList* cl);
    void set_icon(QComboBox* box);
    void read_all_icons();
    void to_list(MessageList *ml,  MessageList* cl);
    QAction *get_login = nullptr;
	explicit MainWindow(QWidget *parent = nullptr);
};

#endif // MAINWINDOW_H
