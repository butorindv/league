Action1()
{
	//���� ���� ������� ����������� ������
	web_reg_save_param_ex(
	"ParamName=FirstPrint",
    "LB=Total Charge: $ ",
    "RB= ",
    "Ordinal=1",
    LAST);
	
	//���������� ������� ������� ������
	web_reg_find(
		"Text=First class tickets",
		"SaveCount=FirstClassCount",
		LAST);
	
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	//����� �� ����� ������ ��� ����������
	lr_output_message(lr_eval_string("���� ������� ������: {FirstPrint}"));
	lr_output_message(lr_eval_string("���������� ������� ������� ������: {FirstClassCount}"));


	
	return 0;
}