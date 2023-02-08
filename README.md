# c-_learning



vscode 代码对齐快捷键  shift + alt + f
1. 函数模板
2. 类模板 
3. function

1.#忽略所有.a文件
*.a
2.#跟踪index.html（即使前面用*.html忽略了所有html文件）
!index.html
3.#忽略当前目录下的index.css文件
/index.css
4.#忽略任何目录下名为index.html的文件夹
index.html/
5.#忽略 lib/1.txt(但不忽略 lib/dir/1.txt)
lib/*.txt
6.#忽略 doc/目录及其所有子目录下的.docx文件
doc/**/*.docx

git 修改分支 命令
//远端手动修改 本地执行下列操作
git branch -m main master
git fetch origin
git branch -u origin/master master
git remote set-head origin -a
