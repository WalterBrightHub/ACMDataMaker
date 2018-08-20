#include "DataMaker.h"

#include "ACCode.h"
#include "DataMaker.h"
#include "In.h"
#include <windows.h>
#include <string>
using namespace std;
int main() {
	int test_case = 10;
	string problemDir = "c:/code/reach-top/data/problem/2018/";
	//如果目录不存在，则创建目录。
	CreateDirectory(problemDir.data(), NULL);

	for (int i = 1; i <= test_case; i++) {
		//造数据 
		if (0) {
			string name_in = problemDir + to_string(i) + ".in";
			const char* path_in = name_in.data();
			freopen(path_in, "w", stdout);

			makeIn(i); 
			//fclose(stdin);
		}
		//利用ac代码造答案 
		if (01) {
			string name_in = problemDir + to_string(i) + ".in";
			string name_out = problemDir + to_string(i) + ".out";
			const char* path_in = name_in.data();
			const char* path_out = name_out.data();
			freopen(path_in, "r", stdin);
			freopen(path_out, "w", stdout);
			//cout << "yes\n";
			//如果ac代码中用while(cin>>...)读入，则读入结束后要清除cin
			cin.clear();
			maiin();

		}
	}

	freopen("CON", "r", stdin);
	freopen("CON", "w", stdout);
	//将ACCode.cpp和In.cpp保存到目录里，方便之后查看
	string source_ACCode = "../ACMDataMaker/ACCode.cpp";
	string source_In = "../ACMDataMaker/In.cpp";
	string target_ACCode = problemDir + "ACCode.cpp";
	string target_In = problemDir + "In.cpp";
	
	bool copy_accode_ok=CopyFile(source_ACCode.c_str(), target_ACCode.c_str(),false);
	bool copy_in_ok= CopyFile(source_In.c_str(), target_In.c_str(), false);
	//printf("%d %d\n", copy_accode_ok, copy_in_ok);

	//string openWithCode = "code " + problemDir;
	//WinExec(openWithCode.c_str(), SW_SHOW);
	//打开目录
	ShellExecute(NULL, "explore", problemDir.c_str(), NULL, NULL, SW_SHOW);
	//system("pause");
}


