#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	myplatf::MyForm form;



	form.ShowDialog();
	User^ user = form.user;
	if (user != nullptr)
	{
		MessageBox::Show("Successfull Authentification of " + user->username, "welcome!", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else
	{
		MessageBox::Show("Access Conceled" + user->username, "Try again! ", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}