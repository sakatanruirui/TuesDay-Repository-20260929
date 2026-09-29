#pragma once
class CardUser
{
protected:
	int total;
public:
	CardUser();

	//カードを追加
	void AddCard(int card);
	//合計点を取得する
	int GatTotal();
	//現在の状態を表示
	void ShowStatus();

};