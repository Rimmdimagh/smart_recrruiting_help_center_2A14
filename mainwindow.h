#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "formation.h"
#include <QMainWindow>
#include <QStackedWidget>
#include <QtGui>
#include <QMainWindow>
#include "personnel.h"

#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QPixmap>
#include <QFile>
#include <QDialog>
#include <QFileDialog>

#include <QMainWindow>
#include <string>
#include <cstring>
#include <cctype>
#include <QMessageBox>
#include <iostream>
#include <bitset>
#include <sstream>
#include <algorithm>
#include <QUrl>
#include <QSystemTrayIcon>

#include<QPropertyAnimation>
#include <QRegularExpression>
#include <QTranslator>
#include <QPixmap>


#include"matriel.h"


//salma
#include <QMainWindow>
#include "entretien.h"
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QSequentialAnimationGroup>
#include <QTableWidgetItem>
#include "arduino.h"
#include<condidature.h>

struct Position {
    int x;
    int y;
};



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_Ajouter_clicked();
    void on_Supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_p_trier_clicked();

    void on_qrcodegen_2_clicked();
    //void on_send_mail_2_clicked();

     void on_pb_envoyer_clicked();
   /* void on_mail_2_clicked();

    void on_envoi_M_clicked();*/


    void on_pushButton_encrypt_clicked();
    void on_pushButton_decrypt_clicked();

    void on_actionReset_Fields_triggered();
    void on_actionClear_Plain_Text_triggered();
    void on_actionClear_Encrypted_Text_triggered();
    void on_actionExit_triggered();
    void on_actionAbout_Qt_triggered();
    void on_comboBox_currentTextChanged(const QString &arg1);
    void on_trier_age_clicked();
    void on_trie_dureeTravail_clicked();



  void on_pushButtonAjouter_clicked();
  void on_supp_clicked();
  void on_Mod_2_clicked();
  void on_rechercher_button_clicked();
  void on_trier_button_clicked();
  void on_qrcodegen_clicked();
  void on_statsmed_clicked();
  void on_radioButton_croissant_clicked();
  void on_radioButton_dcroissant_clicked();
  void on_rechercher_button_2_clicked();
  void on_ImportPDF_clicked();
  void on_insererphoto_clicked();

 // void on_send_mail_clicked();
  void on_reset_3_clicked();
  void page1Widget();
  void page2Widget();
  void page3Widget();
  void page8Widget();
  void page9Widget();
  void page10Widget();
  void page14Widget();
  void page15Widget();

  void on_pushButtonAjouter_2_clicked();

  void on_reset_2_clicked();

  void on_supp_2_clicked();

  void on_modifier_clicked();

  void on_stat_clicked();

  void on_pushButton_4_clicked();

  void on_recherche_clicked();

  void on_reaficher_clicked();

  void on_send_mail_3_clicked();

  void on_reset_4_clicked();

  void on_pushButton_clicked();


  void on_Mod_4_clicked();

  void on_rechercher_button_22_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_7_clicked();

  void on_send_mail_2_clicked();

  void on_close_clicked();

  void on_close_2_clicked();

  void on_close_3_clicked();

  void on_pushButton_12_clicked();


  void on_close_4_clicked();

  void on_rechercher_button_released();

  void detect();
  void on_pb_valider_clicked();

  void on_pb_afficher_clicked();

  void on_pb_modifier_2_clicked();

  void on_pb_annuler_clicked();

  void on_pb_supprimer_clicked();

  void on_pb_ajouter_clicked();

  void on_pb_select_clicked();

  void on_pb_trier_clicked();

  void on_pb_imprimer_clicked();

  void on_pb_acceuil_2_clicked();

  void on_pb_acceuil_clicked();

  void on_pb_formation_clicked();

  void on_le_recherche_cursorPositionChanged(int arg1, int arg2);

  void on_le_recherche_textChanged(const QString &arg1);

  void on_pb_acceuil_3_clicked();

  void on_pushButton_13_clicked();

  void on_pushButton_14_clicked();

  void on_seconnecter_clicked();

  void on_pushButton_11_clicked();

  void on_pushButton_16_clicked();

  void on_pb_ajouter_2_clicked();

  void on_pb_modifier_3_clicked();

  void on_pb_supprimer_2_clicked();

  void on_stat_2_clicked();

  void on_pb_tirage_clicked();

  void on_pb_sms_clicked();

  void on_tridcr_nom_clicked();

  void on_tricr_nom_clicked();

  void on_tricr_cin_clicked();

  void on_tridcr_cin_clicked();

  void on_tricr_avis_clicked();

  void on_tridcr_avis_clicked();

  void on_pb_rech_nom_clicked();

  void on_pb_rech_avis_clicked();

  void on_pb_rech_cin_clicked();

  void on_pushButton_15_clicked();

  void on_pb_ajouter_4_clicked();

  void on_modifier_3_clicked();

  void on_pb_supprimer_4_clicked();

  void on_trier_2_clicked();

  void on_rechercher_2_clicked();

  void on_rechercher2_2_clicked();

  void on_rechercher3_2_clicked();

  void on_pushButton_19_clicked();

  void on_pushButton_10_clicked();

  void on_pushButton_9_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_21_clicked();

  void on_pushButton_22_clicked();

  void on_pushButton_23_clicked();

  void on_pushButton_28_clicked();

  void on_pushButton_20_clicked();

  void on_pushButton_29_clicked();

  void on_pushButton_30_clicked();

  void on_pushButton_31_clicked();

  void on_pushButton_32_clicked();

  void on_pushButton_33_clicked();

  void on_send_mail_clicked();

  void on_tabWidget_4_currentChanged(int index);

private:

    QString ewCaesarCipher(QString plainText, int key);
    QString dwCaesarCipher(QString encryptedText, int key);

    QString ewPlayfair(QString plainText, QString secret);
    QString dwPlayfair(QString encryptedText, QString secret);

    char pfMatrix[5][5];
    bool inSameRow(Position p1, Position p2);
    bool inSameColumn(Position p1, Position p2);
    void normalizePFString(std::string &str);
    void normalizePFSecret(std::string &secret);
    void populatePFMatrix(std::string secret);
    std::string encryptPFString(std::string plainStdText);
    std::string decryptPFString(std::string encryptedStdText);
    Position findPositionByChar(char ch);
    char findCharByPosition(Position p);

    QString ewDES(QString plainText, std::string key);
    QString dwDES(QString encryptedText, std::string key);
    std::vector<std::string> keyPreparation(std::string key);
    QString DESEncryption(std::string dataBlock, std::vector< std::string > keys);
    std::string apply_xor(std::string str1, std::string str2);
    std::string apply_func_F(std::string str1, std::string str2);
    std::string apply_func_E(std::string str);

    QString ewIDES(QString plainText, std::string key);
    QString dwIDES(QString encryptedText, std::string key);
    std::vector< std::string > textToBinaryAscii(std::string str);
    std::string binaryAsciiToText(std::string str);
    std::string charToBinaryAscii(char ch);
    char binaryAsciiToChar(std::string binaryAscii);

    double ewRSA(double msg, double p, double q);
    double dwRSA(double msg, double p, double q);
    double RSAEncryption(double msg, double n, double e);
    double RSADecryption(double msg, double n, double d);
    std::pair<double, double> RSAKeys(double p, double q);
    int gcd(int a, int h);

    QString ewRC4(QString msg, QString key);
    QString dwRC4(QString msg, QString key);
    QString RC4Encryption(std::vector< std::bitset<8> > msg_bytes, std::vector< std::bitset<8> > keys);
    std::vector< std::bitset<8> > keysGenerator(int msg_length, std::vector<int> s);
    std::vector< std::bitset<8> > bytesOfMessage(std::string msg);
 int nombre;



 void showTime();



   Formation Etmp;
    Ui::MainWindow *ui;
    Personnel p,p1 ;
    entretien e;
    Arduino Ard;
    QByteArray data;
    Matriel Mat;
    condidature Ctmp;
    condidature C;
};

#endif // MAINWINDOW_H
