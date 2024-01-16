# WinG32
WinG32 DLL Injector with GDI32.dll

DirectXの先祖にあたるWindows用ゲームグラフィックAPI「WinG」が必要なWin32アプリを実行させるためのDLL

オリジナルのWing32.dllは既にマイクロソフトはサポートしておらず

-Vectorにしか置いておらず、いつまでもこのファイルを置いてくれるか保証ができない

-WING32.DLL単体での配布は許可されていない

-他で拾ってきたWING32.DLLが無害であるという保証ができない

-WING32.DLLはWindowsシステムフォルダに入っていないといけない(DLL側で格納場所をチェックしている)

-Windowsのシステムフォルダに直接コピーするのでセキュリティリスクがある、環境によってはコピーも弾かれる可能性がある

と様々な問題を抱えているのでGDIを経由して描画する代替DLLを作成。Windowsシステムフォルダにコピーせずとも、アプリの実行ファイル(exe)と同一フォルダにこのwing32.dllをコピーすれば起動するようになっている。



# 動作確認済みタイトル(Windows 10 x64環境にてwing32.dllをexeファイルと同一フォルダにコピーして実行)

「WinMASL」

![WinMASL](/Samples/WinMASL.PNG)


「オルゴール サイキック・ディテクティヴ・シリーズ Vol.4」

![Orgal](/Samples/Orgal.png)


「大逆鱗 for Windows 95」

![Dai Gekirin](/Samples/DaiGekirin.png)


「シムタウン」(インストーラは16bitアプリなので「OTVDM」などを使用する必要あり)

![Sim Town](/Samples/SimTown.PNG)
