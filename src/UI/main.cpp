#include "replaceaetemplate.h"
#include <QSettings>
#include <QMessageBox>
#include <QtWidgets/QApplication>
#include "loginwindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	int ret = 0;

	// ������Organization��Ϣ�Ļ���������Ϣ�Ǵ洢��ע����е�
	QSettings settings("AE", "login");
	settings.beginGroup("info");
	QString pwd = settings.value("password").toString();
	settings.endGroup();

	if (pwd.isEmpty())
	{
		LoginWindow loginWin;
		if (loginWin.exec() == QDialog::Accepted)
		{
			ReplaceAETemplate w;
			w.show();
			ret = a.exec();
		}
	}
	else
	{
		ReplaceAETemplate w;
		w.show();
		ret = a.exec();
	} 

	return ret;
}
