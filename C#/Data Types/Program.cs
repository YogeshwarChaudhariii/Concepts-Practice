using System.Data;

int iNo = 11;
int i = default(int);

string str = "Yogeshwar";

bool bRet = true;
bool b = default(bool);

DateTime DT = DateTime.Now;

float fNo = 34.68f;
float f = default(float);

double dNo = 89.3654;
double d = default(double);

object obj = 21;    // We can assign any type of value init like an auto


Console.WriteLine("Integer is: "+iNo+" and size of integer is: "+sizeof(int));
Console.WriteLine("Default value of Integer is: " + i + " and size of integer is: " + sizeof(int));

Console.WriteLine("String is: "+str);

Console.WriteLine("Booolean: "+bRet);
Console.WriteLine("Default value of Boolean is: " + b);

Console.WriteLine("Date and Time: "+DT);

Console.WriteLine("Float: "+fNo+" size is: "+sizeof(float));
Console.WriteLine("Default value of Float is: " + f);

Console.WriteLine("Double is: "+dNo+" size is: "+sizeof(double));
Console.WriteLine("Default value of Double is: " + d);

Console.WriteLine("Object is: " + obj);



Console.ReadLine();     // read from the console
