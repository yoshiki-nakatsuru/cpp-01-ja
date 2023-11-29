# MS1チャレンジガイド

チャレンジはMS1の重要なコンポーネントであり、チャレンジに取り組むことで学んだことを実際に活用できるようになります。各ユニットの最後に1つまたは複数のチャレンジが用意されています。これまで学んだことにもとづいて取り組んでください。各チャレンジには一連の要件と手順があります。チャレンジの要件にはそのユニット以外で学んだスキルも含まれていることがあるため、カリキュラムに沿ってこれまで学んできたすべてのスキルを組み合わせて問題を解く必要があります。

## チャレンジにアクセスする
各ユニットの最後に、そのユニットの各チャレンジへのアクセス手順が書かれたページがあります。手順のページには、GitHub上のチャレンジリポジトリへのリンクと、リポジトリ内の特定のチャレンジへのパスが記載されています。

一般にリンクの構造は次のようになっています。

`https://github.com/ms1-learner/<学習パス>-<モジュール番号>-<言語>`

たとえば、日本語でC++学習パスを学んでいる場合、次のリンクでモジュール1のすべてのチャレンジにアクセスできます。

`https://github.com/ms1-learner/cpp-01-ja`

手順のページに記載されている次のようなリポジトリのパスをたどると、各チャレンジにアクセスできます。

`01_introduction_to_cpp/01_challenge`

## GitHubアカウントを作成する
> すでにGitHubのアカウントをお持ちの場合は、このセクションをスキップしてかまいません。

チャレンジの解答を提出するために、受講者は各自でGitHubにリモートリポジトリを作成する必要があります。チャレンジのすべての解答をこれらのリポジトリに保存してください。また、インストラクターが解答を確認して採点できるよう、リポジトリにインストラクターを追加してください。

GitHubのアカウント作成は簡単です。はじめに https://github.com/signup にアクセスします。

基本情報の入力を求めるプロンプトが表示されます。基本情報を記入してCAPTCHA (キャプチャ認証) の質問に答えると、次のような画面が表示されます。

![challenge-submission-9](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-9.png)

完了すると、追加の質問がいくつか表示されます。

![challenge-submission-10](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-10.png)
最後に、無料プランと有料プランのどちらを使用するかを尋ねられます。解答の提出には無料のアカウントで十分なので、無料プランを選択します。

![challenge-submission-11](https://github.com/ms1-learner/cpp-01-en/blob/main/assets/challenge-submission-11.png)

これでアカウントの作成は完了です。GitHubアカウントのダッシュボードが表示されるはずです。

## ローカルマシンにチャレンジをコピーする
チャレンジを提出するには、親リポジトリに移動してからリポジトリをフォークし、さらにそれをローカルマシンにクローンする必要があります。

例として、リポジトリ `https://github.com/ms1-learner/cpp-01-en` をフォークしてクローンします。

> GitとGitHubに慣れていなくても心配はいりません。このガイドには必要な手順が詳細に記載されています。GitとGitHubの詳細については、この学習パスに含まれているアジャイル開発モジュールで学びます。

指定されたリンクからリポジトリに移動します。

<img width="1728" alt="Screenshot 2023-11-24 at 12 54 05" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/0cebed3b-57b3-44ab-9250-bc37d2a180e7">

リポジトリをフォークすると、自分のアカウントのリポジトリにコピーが作成されます。

<img width="1728" alt="Screenshot 2023-11-24 at 13 00 21" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/cc80b97f-5086-4905-bfac-bc436feaa40b">

デフォルト設定のまま進み、[Create fork] をクリックしてフォークします。

<img width="1728" alt="Screenshot 2023-11-24 at 12 54 20" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/b65a776a-e2d9-47d4-8f8c-2faa79fa3478">

フォークしたリポジトリのリンクをコピーします。

<img width="1728" alt="Screenshot 2023-11-24 at 13 01 27" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/333e32d1-43dc-43d2-84db-26fc6ea72db8">

パソコンでターミナルを開き、リポジトリのクローン先となるフォルダに移動します。たとえば、既存のDocumentsフォルダに移動するには、`cd Documents` と入力してからEnterキーまたはReturnキーを押します。

<img width="990" alt="Screenshot 2023-11-24 at 13 07 44" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/73238ec2-79d4-47be-b719-b14b17d21a06">

Documentsに移動した後、`git clone` に続けて先ほどコピーしたリポジトリのリンクを入力し、EnterキーまたはReturnキーを押します。

<img width="990" alt="Screenshot 2023-11-24 at 13 06 35" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/c946119e-e9b4-4272-bfb2-3fa65b854b4e">

これでDocumentsフォルダにリポジトリがクローンされるはずです。Visual Studio Codeでこのリポジトリを開きます。

<img width="1840" alt="Screenshot 2023-11-24 at 13 13 54" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/b135f4fb-db63-440d-8966-cf72a3d97388">

<img width="1840" alt="Screenshot 2023-11-24 at 13 12 07" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/596eb26c-e582-4889-9c43-3a11dc76cf09">

このリポジトリ内のフォルダにすべてのチャレンジが含まれています。これらの各フォルダ名には関連するユニットの名前と番号が付いています。

<img width="1840" alt="Screenshot 2023-11-24 at 13 12 36" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/90c77026-2c1e-47d0-9da6-c3f6302df015">

これで、チャレンジに解答する準備が整いました。

## チャレンジに取り組んで提出する
チャレンジのREADMEファイルには、課題の説明だけが記載されていることもあれば、一部が欠けている未完成のコードが記載されていることも、解答のベースとなるコードが記載されていることもあります (チャレンジでこれらのコードを完成させていくことになります)。

たとえば、チャレンジで2つの数値を加算するC++プログラムを作成する場合、解答は次のようになります。

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

このプログラムを `main.cpp` というファイルに保存したものとします。では、この解答をローカルリポジトリに保存してからGitHubにプッシュしましょう。

## 解答を準備して採点用にプッシュする

解答を準備してGitHubリポジトリにプッシュするには、まずこの解答をコミット (commit) する必要があります。コミットするには、ターミナルで次のコマンドを実行します。

`git add .`

`git commit -m "Submit challenge for grading"`

1つ目のコマンドでは、この新規ファイルを追跡するようGitに指示しています。2つ目のコマンドでは、“Submit challenge for grading” (採点用にチャレンジを送信) というメッセージを付けて保存しています。

<img width="1840" alt="Screenshot 2023-11-24 at 13 20 19" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/f5b8b456-7db9-43e3-8d63-798f9ff132d3">

解答をリモートリポジトリにプッシュする準備が整いました。

`git push`

<img width="1840" alt="Screenshot 2023-11-24 at 13 20 50" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/fd27927b-2f24-4414-9e6c-73f5ca70b444">

次に、GitHubリポジトリに移動します。変更が正常にプッシュされているはずです。

>    GitHubアカウントのユーザー名とパスワードを入力するよう求められ、次のようなエラーが発生することがあります。
>
>   **fatal: Authentication failed for 'https://github.com/ms1-learner/cpp-01-ja.git/'**
>
>   これを解決するには、認証に個人用アクセストークンを使用する必要があります。この手順の詳細は、[GitHubの公式ドキュメント](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/managing-your-personal-access-tokens#creating-a-personal-access-token-classic) (英語) に記載されています。

### MS1でリンクを送信する
自分のGitHubリポジトリに解答をプッシュしたら、MS1のチャレンジでそのGitHubへのリンクを送信する必要があります。リポジトリへのリンクではなく、該当するチャレンジへのリンクを送信してください。

例: `https://github.com/abolinsky/cpp-01-ja/tree/main/01_introduction_to_cpp/01_challenge`

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
