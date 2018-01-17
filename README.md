# ARTextGame

＜ビルド用に手動でやること＞  
Unity上でビルド＆ランをするとXcodeで実機にインストールする際にエラーが出ます。  
エラーが出た後に下記の手順を手動で実行してから、再度Xcodeからビルドしてください。  

１ 下記のCoreMLModelファイルをダウンロードしXcodeのプロジェクトに追加  
    https://drive.google.com/file/d/1C-bq8On4FgE1CmSh9wmoucwKBF_HxKQf/view?usp=sharing  
２ BuildPhraseのLink Binary with Libralies にVisionとCoreMLのFrameworkを追加  
３ BuildSettings の Architecture をarm64のみにする  


プロジェクト概要(Google Doc)  
https://docs.google.com/document/d/1oi2cfLmwSof6e6loZE3I6V4hnYddkbnB2uu1ChqMg80/edit?usp=sharing  
