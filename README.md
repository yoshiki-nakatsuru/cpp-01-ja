# MS1チャレンジガイド

チャレンジはMS1の重要なコンポーネントであり、チャレンジに取り組むことで学んだことを実際に活用できるようになります。各ユニットの最後に1つまたは複数のチャレンジが用意されています。これまでに学んだことを活用して取り組んでください。各チャレンジには一連の要件と手順があります。チャレンジの要件にはそのユニット以外で学んだスキルも含まれていることがあるため、カリキュラムに沿ってこれまで学んできたすべてのスキルを組み合わせて問題を解く必要があります。

## チャレンジへのアクセス
各ユニットの最後に、そのユニットの各チャレンジへのアクセス手順が書かれたページがあります。手順のページには、GitHub上のチャレンジリポジトリへのリンクと、リポジトリ内の特定のチャレンジへのパスが記載されています。

一般にリンクの構造は次のようになっています。

`https://github.com/ms1-learner/<学習パス>-<モジュール番号>-<言語>`

たとえば、日本語でC++学習パスを学んでいる場合、次のリンクでモジュール1のすべてのチャレンジにアクセスできます。

`https://github.com/ms1-learner/cpp-01-jp`

手順のページに記載されている次のようなリポジトリのパスをたどると、各チャレンジにアクセスできます。

`01_introduction_to_cpp/01_challenge`

## ローカルマシンへのチャレンジのコピー
チャレンジを提出するには、親リポジトリに移動してからリポジトリ全体をローカルマシンにクローンする必要があります。「クローン」とは、基本的にリポジトリをダウンロードしてデバイスで作業できるようにすることです。 

例として、`https://github.com/ms1-learner/cpp-01-jp` にあるリポジトリのクローンを作成します。

> GitとGitHubに慣れていなくても心配はいりません。このガイドには必要な手順が詳細に記載されています。GitとGitHubの詳細については、この学習パスに含まれているアジャイル開発モジュールで学びます。

指定されたリンクからリポジトリに移動します。

![challenge-submission-1](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-1.png)

リポジトリのリンクをコピーします。

![challenge-submission-2](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-2.png)

コンピュータでターミナルを開き、リポジトリのダウンロード先となるデスクトップまたはフォルダに移動します。ターミナルからデスクトップに移動するには、`cd Desktop` と入力してからEnterキーまたはReturnキーを押します。

![challenge-submission-3](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-3.png)

デスクトップに移動した後、`git clone` の後に手順2でコピーしたリポジトリのリンクを入力し、EnterキーまたはReturnキーを押します。

![challenge-submission-4](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-4.png)

これでデスクトップにリポジトリのフォルダが表示されるようになります。Visual Studio Codeにこのフォルダをドラッグ&ドロップするか、Visual Studio Codeでこのフォルダを開きます。

![challenge-submission-5](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-5.png)

![challenge-submission-6](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-6.png)

すべてのチャレンジはリポジトリ内のフォルダに含まれています。これらの各フォルダ名には関連するユニットの名前と番号が付いています。各ユニットには少なくとも1つ、最大5つのチャレンジがあります。 

- ユニットのフォルダにチャレンジが1つだけある場合、このチャレンジの詳細はREADMEファイルに記載されています。

 ![challenge-submission-7](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-7.png)

-  ユニットのフォルダにチャレンジが複数ある場合、各チャレンジの詳細はサブフォルダ内のREADMEファイルに記載されています。

![challenge-submission-8](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-8.png)

## リモートリポジトリの作成
チャレンジの解答を提出するために、受講者は各自でGitHubにリモートリポジトリを作成する必要があります。チャレンジのすべての解答をこれらのリポジトリに保存してください。また、インストラクターが解答を確認して採点できるよう、リポジトリにインストラクターを追加してください。

### GitHubアカウントを作成する

> すでにGitHubのアカウントをお持ちの場合は、このセクションをスキップしてかまいません。

GitHubのアカウント作成は簡単です。はじめに https://github.com/signup にアクセスします。

基本情報の入力を求めるプロンプトが表示されます。基本情報を記入してCAPTCHA (キャプチャ認証) の質問に答えると、次のような画面が表示されます。

![challenge-submission-9](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-9.png)

完了すると、追加の質問がいくつか表示されます。

![challenge-submission-10](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-10.png)
最後に、無料プランと有料プランのどちらを使用するかを尋ねられます。解答の提出には無料のアカウントで十分なので、無料プランを選択します。

![challenge-submission-11](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-11.png)

これでアカウントの作成は完了です。GitHubアカウントのダッシュボードが表示されます。

### GitHubリポジトリを作成する
> GitHubのパブリックリポジトリをすでに作成してある場合は、このセクションをスキップしてかまいません。

プロファイルページ内の [Repositories] タブをクリックし、[New] ボタンをクリックします。

![challenge-submission-12](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-12.png)

[Repository name] にリポジトリの名前を入力し、[Public] に設定します。

> インストラクターが採点できるよう、リポジトリを [Public] に設定する必要があります。

![challenge-submission-13](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-13.png)

先ほどクローンしたリポジトリとこのGitHubリポジトリを接続するために、このリポジトリのリンクをコピーします。

![challenge-submission-14](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-14.png)

### GitHubリポジトリとローカルリポジトリを接続する
クローンしたローカルリポジトリを新規作成したGitHubリポジトリに接続するには、複数のGitコマンドを実行する必要があります。

> このガイドには必要なコマンドも記載されているので、Gitの仕組みを理解しておく必要はありません。

ローカルリポジトリのフォルダに移動します。

![challenge-submission-15](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-15.png)



現在のリポジトリは、GitHubのms1-learnerアカウントでアクセスしたリモートリポジトリをクローンしたものです。このリモートリポジトリにリンクしていた接続を、自分のアカウントで作成したGitHubリポジトリにリンクするよう変更します。

はじめに、現在のリモートリポジトリを確認します。コマンド `git remote -v` を入力してからEnterキーまたはReturnキーを押します。

![challenge-submission-16](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-16.png)

これを変更するには、コマンド `git remote set-url origin` の後に自分のGitHubリポジトリのリンクを入力して実行します。

![challenge-submission-17](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-17.png)

上のスクリーンショットでわかるように、リモートリポジトリが `https://github.com/ms1-learner/cpp-01-jp.git` から `https://github.com/devwoven/cpp-challenges-01.git` に変更されました。

ユーザー名 (devwoven) とリポジトリ名 (cpp-challenges-01.git) には、自分のユーザー名と選択したGitHubリポジトリの名前が表示されています。

これで、チャレンジに解答する準備が整いました。

## チャレンジの解答と提出
チャレンジのREADMEファイルには、課題の説明だけが記載されていることもあれば、一部が欠けている未完成のコードが記載されていることも、解答のベースとなるコードが記載されていることもあります (チャレンジでこれらのコードを完成させていくことになります)。

たとえば、ユニット1のチャレンジで2つの数値を加算するC++プログラムを作成する場合、解答は次のようになります。

> 注: 例として記載しているだけなので、このコードを理解する必要はありません。

```cpp
#include <iostream>
#include <string>

int add(int a,int b) {
   return a + b;
}
int main() {
    std::cout << "The result of adding 5 and 3 is " + std::to_string(add(5,3)) << std::endl;
    return 0;
}
```
このプログラムを `add.cpp` というファイルに保存したものとします。では、この解答をローカルリポジトリに保存してからリモートリポジトリにプッシュしましょう。

### 解答を準備して評価用にプッシュする

解答を準備してGitHubリポジトリにプッシュするには、まずこの解答をコミット (`commit`) する必要があります。コミットするには、ターミナルで次のコマンドを実行します。

`git add .`

`git commit -m "My solution to challenge of unit 01"`

1つ目のコマンドでは、この新規ファイルを追跡するようGitに指示しています。2つ目のコマンドでは、“My solution to challenge of unit 01” (ユニット1のチャレンジの解答) というメッセージを付けて保存しています。

![challenge-submission-18](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-18.png)

解答をリモートリポジトリにプッシュする準備が整いました。では、プッシュする方法を説明します。

次のコマンドを実行します。

`git push --set-upstream origin main`

> このコマンドの順番はとても重要です。 

![challenge-submission-19](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-19.png)

次に、GitHubリポジトリに移動します。変更が正常にプッシュされているはずです。

### MS1でリンクを送信する
自分のGitHubリポジトリに解答をプッシュしたら、MS1のチャレンジでそのGitHubへのリンクを送信する必要があります。リポジトリへのリンクではなく、該当するチャレンジへのリンクを送信してください。

例: `https://github.com/taro-yamada/cpp-01-jp/01_introduction_to_cpp/01_challenge`

MS1の該当するチャレンジページに移動します。

自分のGitHubリポジトリへのリンクをページの下部に追加して [送信] をクリックしてください。

![challenge-submission-20](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-20.png)

### 自分のリポジトリにインストラクターを追加する
インストラクターが解答を確認して採点できるよう、インストラクターをコラボレーターとしてGitHubリポジトリに追加する必要があります。

コラボレーターを追加するには、[Settings] ボタンをクリックします。

![challenge-submission-21](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-21.png)

左側のパネルにある [Collaborators] をクリックします。 

[Manage access] にある [Add people] をクリックし、担当インストラクターのGitHubのユーザー名またはメールアドレスを追加します。

![challenge-submission-22](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-22.png)

これで解答がアップロードされ、インストラクターが確認できるようになりました。

すばらしい解答を期待しています。