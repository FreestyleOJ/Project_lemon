Project_lemon
=============

A clone of Project-Lemon on Google code (https://code.google.com/p/project-lemon/)

如果想要自己编译，请用`git clone`源代码，或使用右方的Download ZIP功能。

如果正在使用Ubuntu，可以切换到Built分支，直接`./lemon`运行。

v1.1之前有编译好的在[Master分支里](https://github.com/FreestyleOJ/Project_lemon/tree/master/release_build)

v1.2编译好的没找到。。。但是源码是1.2的～

```sh
sudo apt-get install qt4-dev-tools
```
进入源代码目录编译：
```sh
qmake lemon.pro
make
```
Fedora16下的安装注意事项（By litimetal）： 1、安装 qt-devel 2、不要输入qmake, 而是qmake-qt4

 - argv[1]: 标准输入文件 
 - argv[2]: 选手输出文件
 - argv[3]: 标准输出文件
 - argv[4]: 本测试点满分
 - argv[5]: 分数输出文件（必须创建），仅一行，包含一个非负整数，表示得分。
 - argv[6]: 额外信息文件（可以不创建）
