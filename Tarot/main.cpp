#include<easyx.h>
#include<iostream>
#include<ctime>
void update(int cardPos, int n);
IMAGE cardback;
int main() {
	srand((unsigned)time(NULL));
	initgraph(720, 700, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	ExMessage m;
	loadimage(&cardback, "assets/cardback.jpg", 200, 340);
	putimage(20, 20, &cardback);
	putimage(260, 20, &cardback);
	putimage(500, 20, &cardback);
	settextcolor(BROWN);
	settextstyle(40, 0, "微软雅黑");
	outtextxy(220, 360, "欢迎进行塔罗占卜");
	outtextxy(200, 400, "现在请默念你想占卜的问题");
	outtextxy(210, 440, "然后用鼠标点击一张牌");
	while (1) {
		m = getmessage(EX_MOUSE | EX_KEY);
		if (m.message == WM_LBUTTONDOWN&&m.x>=20&&m.x<=220&&m.y>=20&&m.y<=360) {
			update(1, rand()%22);
		}
		else if (m.message == WM_LBUTTONDOWN && m.x >= 260 && m.x <= 460 && m.y >= 20 && m.y <= 360) {
			update(2, rand()%22);
		}
		else if (m.message == WM_LBUTTONDOWN && m.x >= 500 && m.x <= 700 && m.y >= 20 && m.y <= 360) {
			update(3, rand()%22);
		}
		if (m.message == WM_KEYDOWN && m.vkcode == VK_ESCAPE) {
			break;
		}
	}
	closegraph();
	return 0;
}
void update(int cardPos, int n) {
	if (cardPos == 1) {
		switch (n) {
		case 0: {
			cleardevice();
			IMAGE fool;
			loadimage(&fool, "assets/fool.jpg", 200, 340);
			putimage(20, 20, &fool);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：愚者");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：憧憬自然、挑战未知、一意孤行、极端理想主义、自由奔放");
			outtextxy(10, 500, "爱情上：自由恋爱、轻易坠入爱河、浪漫多彩的爱情、独特的恋人");
			outtextxy(10, 530, "工作上：具冒险心、追求新奇。热衷于事业或学业、以独特的方式取得意外的收获");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
			}
		case 1: {
			cleardevice();
			IMAGE megician;
			loadimage(&megician, "assets/megician.jpg", 200, 340);
			putimage(20, 20, &megician);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：魔术师");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "事情开始，行动改变，熟练的技术技巧，贯彻意志，运用自然的力量达到野心");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 2: {
			cleardevice();
			IMAGE priestess;
			loadimage(&priestess, "assets/high_priestess.jpg", 200, 340);
			putimage(20, 20, &priestess);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了:女祭司");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "开发内在神秘潜力，前途将有所变化，深刻思考，敏锐洞察力，准确直觉");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 3: {
			cleardevice();
			IMAGE empress;
			loadimage(&empress, "assets/empress.jpg", 200, 340);
			putimage(20, 20, &empress);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：女皇");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "幸福，成功，收获，无忧无虑，圆满家庭生活，良好环境，美貌，艺术，与大自然接触，愉快旅行，休闲。");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 4: {
			cleardevice();
			IMAGE emperor;
			loadimage(&emperor, "assets/emperor.jpg", 200, 340);
			putimage(20, 20, &emperor);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：皇帝");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "光荣，权力，胜利，握有领导权，坚强的意志，达成目标，父亲的责任，精神上的孤单。");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 5: {
			cleardevice();
			IMAGE hierophant;
			loadimage(&hierophant, "assets/hierophant.jpg", 200, 340);
			putimage(20, 20, &hierophant);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：教皇");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：同情、宽宏大量、良好的商量对象、得到精神上的满足、遵守规则、志愿者");
			outtextxy(10, 500, "爱情上：屈从于压力、盲目改变自己、伴侣不忠诚");
			outtextxy(10, 530, "工作上：信心十足、能正确理解事物本质、寻找新的工作方法");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 6: {
			cleardevice();
			IMAGE lovers;
			loadimage(&lovers, "assets/lovers.jpg", 200, 340);
			putimage(20, 20, &lovers);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：恋人");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：撮合，爱情，流行，兴趣，充满希望的未来，魅力，增加朋友。");
			outtextxy(10, 500, "爱情上:感情和肉体对爱的渴望、恋情更亲密");
			outtextxy(10, 530, "工作上：面临关系到未来前途的重大抉择");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 7: {
			cleardevice();
			IMAGE chariot;
			loadimage(&chariot, "assets/chariot.jpg", 200, 340);
			putimage(20, 20, &chariot);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：战车");
			outtextxy(220, 420, "释义：");
			settextstyle(23, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：努力而获得成功，胜利，克服障碍，行动力，自立，尝试，自我主张");
			outtextxy(10, 500, "爱情上:努力控制自己的情绪，而且控制得很好，这让你的感情发展得更顺利");
			outtextxy(10, 530, "工作上：办事卓有成效。自信而富理智的你将让客户更有信心，愿意与你共同合作");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 8: {
			cleardevice();
			IMAGE strength;
			loadimage(&strength, "assets/strength.jpg", 200, 340);
			putimage(20, 20, &strength);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：力量");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：大胆行动、勇敢决断、新发展、新转机、以意志力战胜困难");
			outtextxy(10, 500, "爱情上：发展一段真正的亲密关系、全心投入、相互倾诉、没有距离感");
			outtextxy(10, 530, "工作上：不断突破自我，上司和客户都对你有充分的信心，成就接踵而来");;
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 9: {
			cleardevice();
			IMAGE hermit;
			loadimage(&hermit, "assets/hermit.jpg", 200, 340);
			putimage(20, 20, &hermit);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：隐者");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：隐藏的事实、个别的行动、倾听意见、享受孤独");
			outtextxy(10, 500, "爱情上：深刻思考这段感情、探索彼此之间的关系");
			outtextxy(10, 530, "工作上：在黄金时期隐退、但实际上是在蓄势");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 10: {
			cleardevice();
			IMAGE wheel_of_fortune;
			loadimage(&wheel_of_fortune, "assets/wheel_of_fortune.jpg", 200, 340);
			putimage(20, 20, &wheel_of_fortune);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：命运之轮");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：关键事件、环境的变化、幸运的开端、情况好转");
			outtextxy(10, 500, "爱情上：感情上的坎坷即将过去、关系将进入稳定的发展阶段");
			outtextxy(10, 530, "工作上：以平常心看待挫折、坚持过去将是平坦的大道");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 11: {
			cleardevice();
			IMAGE justice;
			loadimage(&justice, "assets/justice.jpg", 200, 340);
			putimage(20, 20, &justice);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：正义");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：公正、中立、城市、坦荡、表里如一、追求合理化");
			outtextxy(10, 500, "爱情上：光明正大的交往、感情和睦、对方接受你的选择");
			outtextxy(10, 530, "工作上：没有太多其他感觉、只是认真执行计划");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 12: {
			cleardevice();
			IMAGE hanged_man;
			loadimage(&hanged_man, "assets/hanged_man.jpg", 200, 340);
			putimage(20, 20, &hanged_man);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：倒吊人");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：接受考验、行动受限、牺牲、不畏艰辛、有失必有得、浴火重生");
			outtextxy(10, 500, "爱情上：奉献的爱、需要反省感情、对爱情的牺牲能够触动对方");
			outtextxy(10, 530, "工作上：事业短暂停顿、但你清楚原因、再次确认目标、准备出发");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 13: {
			cleardevice();
			IMAGE death;
			loadimage(&death, "assets/death.jpg", 200, 340);
			putimage(20, 20, &death);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：死神");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：失败、接近毁灭、生病、持续损害、交易停止、枯燥的生活、别离");
			outtextxy(10, 500, "爱情上：感情双方有很深的鸿沟、恋情终止 或者开始新的阶段");
			outtextxy(10, 530, "工作上：放弃既得利益、获得全新发展机会");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 14: {
			cleardevice();
			IMAGE temperance;
			loadimage(&temperance, "assets/temperance.jpg", 200, 340);
			putimage(20, 20, &temperance);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：节制");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：单纯、调整、平顺、互惠互利");
			outtextxy(10, 500, "爱情上：好感转为爱意、纯爱、深爱。感情简单、平静、彼此的沟通让感情更好");
			outtextxy(10, 530, "工作上：在事业上小心翼翼，因为处事理智让你的同事感到十分放心");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 15: {
			cleardevice();
			IMAGE devil;
			loadimage(&devil, "assets/devil.jpg", 200, 340);
			putimage(20, 20, &devil);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：恶魔");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：束缚、堕落、生病、恶意、屈服、难以抗拒诱惑、生活颓废、不可告人的秘密");
			outtextxy(10, 500, "爱情上：私密恋情 感情上你们被彼此束缚，却不希望改善这种关系，情愿忍受彼此的牵连和不满");
			outtextxy(10, 530, "工作上：你将在事业中得到相当大的名声与财富，你心中的事业就是一切，财富就是你的目标");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 16: {
			cleardevice();
			IMAGE tower;
			loadimage(&tower, "assets/tower.jpg", 200, 340);
			putimage(20, 20, &tower);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：塔");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：破产、逆境、被开除、急病、致命的打击、巨大的变动、受牵连、信念崩溃、玩火自焚、纷扰不断");
			outtextxy(10, 500, "爱情上：突然分离，破灭的爱 突然的改变让你陷入痛苦，接受改变可以让你们双方在未来人生走得更好");
			outtextxy(10, 530, "工作上：困难显而易见，回避不是办法，要勇于挑战，尽管它貌似强大");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 17: {
			cleardevice();
			IMAGE star;
			loadimage(&star, "assets/star.jpg", 200, 340);
			putimage(20, 20, &star);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：星星");
			outtextxy(220, 420, "释义：");
			settextstyle(17, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：前途光明、充满希望、想象力、创造力、幻想、满足愿望、水准提高");
			outtextxy(10, 500, "爱情上：理想对象、美好恋情 对关系乐观，相信自己能把握主动权，相信你们就是命中注定那一对");
			outtextxy(10, 530, "工作上：当你在事业上得到希望的能量时，前途会无比光明");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 18: {
			cleardevice();
			IMAGE moon;
			loadimage(&moon, "assets/moon.jpg", 200, 340);
			putimage(20, 20, &moon);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：月亮");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：不安、迷惑、动摇、谎言、欺骗、鬼迷心窍");
			outtextxy(10, 500, "爱情上：动荡的爱、三角关系 你敏感害怕伤害，尽管伴侣承诺，你却犹豫不决，甚至想逃避");
			outtextxy(10, 530, "工作上：你可能有些不满足，希望能够把自己内在的力量全使出来，于是你开始想要晚上的时间");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 19: {
			cleardevice();
			IMAGE sun;
			loadimage(&sun, "assets/sun.jpg", 200, 340);
			putimage(20, 20, &sun);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：太阳");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：活跃、丰富的生命力、充满生机、精力充沛、工作顺利、贵人相助");
			outtextxy(10, 500, "爱情上：幸福的婚姻 走出坎坷的感情，前面是洒满歌声和欢乐的坦途，你们将规划未来的生活。");
			outtextxy(10, 530, "工作上：事业上会有贵人相助，将会有更好的发展机遇、健康的交际");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 20: {
			cleardevice();
			IMAGE judgement;
			loadimage(&judgement, "assets/judgement.jpg", 200, 340);
			putimage(20, 20, &judgement);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：审判");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：复活的喜悦、康复、坦白、好消息、好运气、初露锋芒");
			outtextxy(10, 500, "爱情上：爱情上：复苏的爱、重逢、爱的奇迹 双方都认真学习和成长，表面上的变化不大，但内在改变很大");
			outtextxy(10, 530, "工作上：你超越了自我，在过去努力的基础上取得了成功");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 21: {
			cleardevice();
			IMAGE world;
			loadimage(&world, "assets/world.jpg", 200, 340);
			putimage(20, 20, &world);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：世界");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：完成、成功、完美无缺、连续不断、精神亢奋、拥有毕生奋斗目标、完成使命、幸运降临、快乐结束");
			outtextxy(10, 500, "爱情上：模范情侣 你们在彼此的承诺中持续着美好的关系");
			outtextxy(10, 530, "工作上：因为努力工作，所以回报丰厚");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		}
	}
	else if (cardPos == 2) {
		switch (n) {
		case 0: {
			cleardevice();
			IMAGE fool;
			loadimage(&fool, "assets/fool.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &fool);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：愚者");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：憧憬自然、挑战未知、一意孤行、极端理想主义、自由奔放");
			outtextxy(10, 500, "爱情上：自由恋爱、轻易坠入爱河、浪漫多彩的爱情、独特的恋人");
			outtextxy(10, 530, "工作上：具冒险心、追求新奇。热衷于事业或学业、以独特的方式取得意外的收获");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 1: {
			cleardevice();
			IMAGE megician;
			loadimage(&megician, "assets/megician.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &megician);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：魔术师");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "事情开始，行动改变，熟练的技术技巧，贯彻意志，运用自然的力量达到野心");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 2: {
			cleardevice();
			IMAGE priestess;
			loadimage(&priestess, "assets/high_priestess.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &priestess);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了:女祭司");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "开发内在神秘潜力，前途将有所变化，深刻思考，敏锐洞察力，准确直觉");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 3: {
			cleardevice();
			IMAGE empress;
			loadimage(&empress, "assets/empress.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &empress);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：女皇");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "幸福，成功，收获，无忧无虑，圆满家庭生活，良好环境，美貌，艺术，与大自然接触，愉快旅行，休闲。");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 4: {
			cleardevice();
			IMAGE emperor;
			loadimage(&emperor, "assets/emperor.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &emperor);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：皇帝");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "光荣，权力，胜利，握有领导权，坚强的意志，达成目标，父亲的责任，精神上的孤单。");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 5: {
			cleardevice();
			IMAGE hierophant;
			loadimage(&hierophant, "assets/hierophant.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &hierophant);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：教皇");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：同情、宽宏大量、良好的商量对象、得到精神上的满足、遵守规则、志愿者");
			outtextxy(10, 500, "爱情上：屈从于压力、盲目改变自己、伴侣不忠诚");
			outtextxy(10, 530, "工作上：信心十足、能正确理解事物本质、寻找新的工作方法");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 6: {
			cleardevice();
			IMAGE lovers;
			loadimage(&lovers, "assets/lovers.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &lovers);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：恋人");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：撮合，爱情，流行，兴趣，充满希望的未来，魅力，增加朋友。");
			outtextxy(10, 500, "爱情上:感情和肉体对爱的渴望、恋情更亲密");
			outtextxy(10, 530, "工作上：面临关系到未来前途的重大抉择");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 7: {
			cleardevice();
			IMAGE chariot;
			loadimage(&chariot, "assets/chariot.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &chariot);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：战车");
			outtextxy(220, 420, "释义：");
			settextstyle(23, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：努力而获得成功，胜利，克服障碍，行动力，自立，尝试，自我主张");
			outtextxy(10, 500, "爱情上:努力控制自己的情绪，而且控制得很好，这让你的感情发展得更顺利");
			outtextxy(10, 530, "工作上：办事卓有成效。自信而富理智的你将让客户更有信心，愿意与你共同合作");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 8: {
			cleardevice();
			IMAGE strength;
			loadimage(&strength, "assets/strength.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &strength);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：力量");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：大胆行动、勇敢决断、新发展、新转机、以意志力战胜困难");
			outtextxy(10, 500, "爱情上：发展一段真正的亲密关系、全心投入、相互倾诉、没有距离感");
			outtextxy(10, 530, "工作上：不断突破自我，上司和客户都对你有充分的信心，成就接踵而来");;
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 9: {
			cleardevice();
			IMAGE hermit;
			loadimage(&hermit, "assets/hermit.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &hermit);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：隐者");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：隐藏的事实、个别的行动、倾听意见、享受孤独");
			outtextxy(10, 500, "爱情上：深刻思考这段感情、探索彼此之间的关系");
			outtextxy(10, 530, "工作上：在黄金时期隐退、但实际上是在蓄势");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 10: {
			cleardevice();
			IMAGE wheel_of_fortune;
			loadimage(&wheel_of_fortune, "assets/wheel_of_fortune.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &wheel_of_fortune);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：命运之轮");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：关键事件、环境的变化、幸运的开端、情况好转");
			outtextxy(10, 500, "爱情上：感情上的坎坷即将过去、关系将进入稳定的发展阶段");
			outtextxy(10, 530, "工作上：以平常心看待挫折、坚持过去将是平坦的大道");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 11: {
			cleardevice();
			IMAGE justice;
			loadimage(&justice, "assets/justice.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &justice);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：正义");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：公正、中立、城市、坦荡、表里如一、追求合理化");
			outtextxy(10, 500, "爱情上：光明正大的交往、感情和睦、对方接受你的选择");
			outtextxy(10, 530, "工作上：没有太多其他感觉、只是认真执行计划");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 12: {
			cleardevice();
			IMAGE hanged_man;
			loadimage(&hanged_man, "assets/hanged_man.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &hanged_man);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：倒吊人");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：接受考验、行动受限、牺牲、不畏艰辛、有失必有得、浴火重生");
			outtextxy(10, 500, "爱情上：奉献的爱、需要反省感情、对爱情的牺牲能够触动对方");
			outtextxy(10, 530, "工作上：事业短暂停顿、但你清楚原因、再次确认目标、准备出发");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 13: {
			cleardevice();
			IMAGE death;
			loadimage(&death, "assets/death.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &death);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：死神");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：失败、接近毁灭、生病、持续损害、交易停止、枯燥的生活、别离");
			outtextxy(10, 500, "爱情上：感情双方有很深的鸿沟、恋情终止 或者开始新的阶段");
			outtextxy(10, 530, "工作上：放弃既得利益、获得全新发展机会");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 14: {
			cleardevice();
			IMAGE temperance;
			loadimage(&temperance, "assets/temperance.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &temperance);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：节制");
			outtextxy(220, 420, "释义：");
			settextstyle(25, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：单纯、调整、平顺、互惠互利");
			outtextxy(10, 500, "爱情上：好感转为爱意、纯爱、深爱。感情简单、平静、彼此的沟通让感情更好");
			outtextxy(10, 530, "工作上：在事业上小心翼翼，因为处事理智让你的同事感到十分放心");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 15: {
			cleardevice();
			IMAGE devil;
			loadimage(&devil, "assets/devil.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &devil);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：恶魔");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：束缚、堕落、生病、恶意、屈服、难以抗拒诱惑、生活颓废、不可告人的秘密");
			outtextxy(10, 500, "爱情上：私密恋情 感情上你们被彼此束缚，却不希望改善这种关系，情愿忍受彼此的牵连和不满");
			outtextxy(10, 530, "工作上：你将在事业中得到相当大的名声与财富，你心中的事业就是一切，财富就是你的目标");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 16: {
			cleardevice();
			IMAGE tower;
			loadimage(&tower, "assets/tower.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &tower);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：塔");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：破产、逆境、被开除、急病、致命的打击、巨大的变动、受牵连、信念崩溃、玩火自焚、纷扰不断");
			outtextxy(10, 500, "爱情上：爱情上：突然分离，破灭的爱 突然的改变让你陷入痛苦，接受改变可以让你们双方在未来人生走得更好");
			outtextxy(10, 530, "工作上：困难显而易见，回避不是办法，要勇于挑战，尽管它貌似强大");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 17: {
			cleardevice();
			IMAGE star;
			loadimage(&star, "assets/star.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &star);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：星星");
			outtextxy(220, 420, "释义：");
			settextstyle(17, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：前途光明、充满希望、想象力、创造力、幻想、满足愿望、水准提高");
			outtextxy(10, 500, "爱情上：理想对象、美好恋情 对关系乐观，相信自己能把握主动权，相信你们就是命中注定那一对");
			outtextxy(10, 530, "工作上：当你在事业上得到希望的能量时，前途会无比光明");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 18: {
			cleardevice();
			IMAGE moon;
			loadimage(&moon, "assets/moon.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &moon);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：月亮");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：不安、迷惑、动摇、谎言、欺骗、鬼迷心窍");
			outtextxy(10, 500, "爱情上：爱情上：动荡的爱、三角关系 你敏感害怕伤害，尽管伴侣承诺，你却犹豫不决，甚至想逃避");
			outtextxy(10, 530, "工作上：你可能有些不满足，希望能够把自己内在的力量全使出来，于是你开始想要晚上的时间");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 19: {
			cleardevice();
			IMAGE sun;
			loadimage(&sun, "assets/sun.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &sun);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：太阳");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：活跃、丰富的生命力、充满生机、精力充沛、工作顺利、贵人相助");
			outtextxy(10, 500, "爱情上：幸福的婚姻 走出坎坷的感情，前面是洒满歌声和欢乐的坦途，你们将规划未来的生活。");
			outtextxy(10, 530, "工作上：事业上会有贵人相助，将会有更好的发展机遇、健康的交际");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 20: {
			cleardevice();
			IMAGE judgement;
			loadimage(&judgement, "assets/judgement.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &judgement);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：审判");
			outtextxy(220, 420, "释义：");
			settextstyle(22, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：复活的喜悦、康复、坦白、好消息、好运气、初露锋芒");
			outtextxy(10, 500, "爱情上：复苏的爱、重逢、爱的奇迹 双方都认真学习和成长，表面上的变化不大，但内在改变很大");
			outtextxy(10, 530, "工作上：你超越了自我，在过去努力的基础上取得了成功");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		case 21: {
			cleardevice();
			IMAGE world;
			loadimage(&world, "assets/world.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &world);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "你抽到了：世界");
			outtextxy(220, 420, "释义：");
			settextstyle(20, 0, "微软雅黑");
			outtextxy(10, 470, "生活上：完成、成功、完美无缺、连续不断、精神亢奋、拥有毕生奋斗目标、完成使命、幸运降临、快乐结束");
			outtextxy(10, 500, "爱情上：模范情侣 你们在彼此的承诺中持续着美好的关系");
			outtextxy(10, 530, "工作上：因为努力工作，所以回报丰厚");
			settextstyle(40, 0, "微软雅黑");
			outtextxy(210, 560, "请按ESC键退出");
			break;
		}
		}
	}
	else if (cardPos == 3) {
		switch (n) {
			case 0: {
				cleardevice();
				IMAGE fool;
				loadimage(&fool, "assets/fool.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &fool);
				outtextxy(210, 380, "你抽到了：愚者");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：憧憬自然、挑战未知、一意孤行、极端理想主义、自由奔放");
				outtextxy(10, 500, "爱情上：自由恋爱、轻易坠入爱河、浪漫多彩的爱情、独特的恋人");
				outtextxy(10, 530, "工作上：具冒险心、追求新奇。热衷于事业或学业、以独特的方式取得意外的收获");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 1: {
				cleardevice();
				IMAGE megician;
				loadimage(&megician, "assets/megician.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &megician);
				outtextxy(210, 380, "你抽到了：魔术师");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "事情开始，行动改变，熟练的技术技巧，贯彻意志，运用自然的力量达到野心");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 2: {
				cleardevice();
				IMAGE priestess;
				loadimage(&priestess, "assets/high_priestess.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &priestess);
				outtextxy(210, 380, "你抽到了:女祭司");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "开发内在神秘潜力，前途将有所变化，深刻思考，敏锐洞察力，准确直觉");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 3: {
				cleardevice();
				IMAGE empress;
				loadimage(&empress, "assets/empress.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &empress);
				outtextxy(210, 380, "你抽到了：女皇");
				outtextxy(220, 420, "释义：");
				settextstyle(20, 0, "微软雅黑");
				outtextxy(10, 470, "幸福，成功，收获，无忧无虑，圆满家庭生活，良好环境，美貌，艺术，与大自然接触，愉快旅行，休闲。");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 4: {
				cleardevice();
				IMAGE emperor;
				loadimage(&emperor, "assets/emperor.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &emperor);
				outtextxy(210, 380, "你抽到了：皇帝");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "光荣，权力，胜利，握有领导权，坚强的意志，达成目标，父亲的责任，精神上的孤单。");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 5: {
				cleardevice();
				IMAGE hierophant;
				loadimage(&hierophant, "assets/hierophant.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &hierophant);
				outtextxy(210, 380, "你抽到了：教皇");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：同情、宽宏大量、良好的商量对象、得到精神上的满足、遵守规则、志愿者");
				outtextxy(10, 500, "爱情上：屈从于压力、盲目改变自己、伴侣不忠诚");
				outtextxy(10, 530, "工作上：信心十足、能正确理解事物本质、寻找新的工作方法");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 6: {
				cleardevice();
				IMAGE lovers;
				loadimage(&lovers, "assets/lovers.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &lovers);
				outtextxy(210, 380, "你抽到了：恋人");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：撮合，爱情，流行，兴趣，充满希望的未来，魅力，增加朋友。");
				outtextxy(10, 500, "爱情上:感情和肉体对爱的渴望、恋情更亲密");
				outtextxy(10, 530, "工作上：面临关系到未来前途的重大抉择");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 7: {
				cleardevice();
				IMAGE chariot;
				loadimage(&chariot, "assets/chariot.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &chariot);
				outtextxy(210, 380, "你抽到了：战车");
				outtextxy(220, 420, "释义：");
				settextstyle(23, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：努力而获得成功，胜利，克服障碍，行动力，自立，尝试，自我主张");
				outtextxy(10, 500, "爱情上:努力控制自己的情绪，而且控制得很好，这让你的感情发展得更顺利");
				outtextxy(10, 530, "工作上：办事卓有成效。自信而富理智的你将让客户更有信心，愿意与你共同合作");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 8: {
				cleardevice();
				IMAGE strength;
				loadimage(&strength, "assets/strength.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &strength);
				outtextxy(210, 380, "你抽到了：力量");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：大胆行动、勇敢决断、新发展、新转机、以意志力战胜困难");
				outtextxy(10, 500, "爱情上：发展一段真正的亲密关系、全心投入、相互倾诉、没有距离感");
				outtextxy(10, 530, "工作上：不断突破自我，上司和客户都对你有充分的信心，成就接踵而来");;
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 9: {
				cleardevice();
				IMAGE hermit;
				loadimage(&hermit, "assets/hermit.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &hermit);
				outtextxy(210, 380, "你抽到了：隐者");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：隐藏的事实、个别的行动、倾听意见、享受孤独");
				outtextxy(10, 500, "爱情上：深刻思考这段感情、探索彼此之间的关系");
				outtextxy(10, 530, "工作上：在黄金时期隐退、但实际上是在蓄势");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 10: {
				cleardevice();
				IMAGE wheel_of_fortune;
				loadimage(&wheel_of_fortune, "assets/wheel_of_fortune.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &wheel_of_fortune);
				outtextxy(210, 380, "你抽到了：命运之轮");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：关键事件、环境的变化、幸运的开端、情况好转");
				outtextxy(10, 500, "爱情上：感情上的坎坷即将过去、关系将进入稳定的发展阶段");
				outtextxy(10, 530, "工作上：以平常心看待挫折、坚持过去将是平坦的大道");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 11: {
				cleardevice();
				IMAGE justice;
				loadimage(&justice, "assets/justice.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &justice);
				outtextxy(210, 380, "你抽到了：正义");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：公正、中立、城市、坦荡、表里如一、追求合理化");
				outtextxy(10, 500, "爱情上：光明正大的交往、感情和睦、对方接受你的选择");
				outtextxy(10, 530, "工作上：没有太多其他感觉、只是认真执行计划");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 12: {
				cleardevice();
				IMAGE hanged_man;
				loadimage(&hanged_man, "assets/hanged_man.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &hanged_man);
				outtextxy(210, 380, "你抽到了：倒吊人");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：接受考验、行动受限、牺牲、不畏艰辛、有失必有得、浴火重生");
				outtextxy(10, 500, "爱情上：奉献的爱、需要反省感情、对爱情的牺牲能够触动对方");
				outtextxy(10, 530, "工作上：事业短暂停顿、但你清楚原因、再次确认目标、准备出发");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 13: {
				cleardevice();
				IMAGE death;
				loadimage(&death, "assets/death.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &death);
				outtextxy(210, 380, "你抽到了：死神");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：失败、接近毁灭、生病、持续损害、交易停止、枯燥的生活、别离");
				outtextxy(10, 500, "爱情上：感情双方有很深的鸿沟、恋情终止 或者开始新的阶段");
				outtextxy(10, 530, "工作上：放弃既得利益、获得全新发展机会");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 14: {
				cleardevice();
				IMAGE temperance;
				loadimage(&temperance, "assets/temperance.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &temperance);
				outtextxy(210, 380, "你抽到了：节制");
				outtextxy(220, 420, "释义：");
				settextstyle(25, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：单纯、调整、平顺、互惠互利");
				outtextxy(10, 500, "爱情上：好感转为爱意、纯爱、深爱。感情简单、平静、彼此的沟通让感情更好");
				outtextxy(10, 530, "工作上：在事业上小心翼翼，因为处事理智让你的同事感到十分放心");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 15: {
				cleardevice();
				IMAGE devil;
				loadimage(&devil, "assets/devil.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &devil);
				outtextxy(210, 380, "你抽到了：恶魔");
				outtextxy(220, 420, "释义：");
				settextstyle(22, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：束缚、堕落、生病、恶意、屈服、难以抗拒诱惑、生活颓废、不可告人的秘密");
				outtextxy(10, 500, "爱情上：私密恋情 感情上你们被彼此束缚，却不希望改善这种关系，情愿忍受彼此的牵连和不满");
				outtextxy(10, 530, "工作上：你将在事业中得到相当大的名声与财富，你心中的事业就是一切，财富就是你的目标");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 16: {
				cleardevice();
				IMAGE tower;
				loadimage(&tower, "assets/tower.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &tower);
				outtextxy(210, 380, "你抽到了：塔");
				outtextxy(220, 420, "释义：");
				settextstyle(20, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：破产、逆境、被开除、急病、致命的打击、巨大的变动、受牵连、信念崩溃、玩火自焚、纷扰不断");
				outtextxy(10, 500, "爱情上：爱情上：突然分离，破灭的爱 突然的改变让你陷入痛苦，接受改变可以让你们双方在未来人生走得更好");
				outtextxy(10, 530, "工作上：困难显而易见，回避不是办法，要勇于挑战，尽管它貌似强大");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 17: {
				cleardevice();
				IMAGE star;
				loadimage(&star, "assets/star.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &star);
				outtextxy(210, 380, "你抽到了：星星");
				outtextxy(220, 420, "释义：");
				settextstyle(17, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：前途光明、充满希望、想象力、创造力、幻想、满足愿望、水准提高");
				outtextxy(10, 500, "爱情上：理想对象、美好恋情 对关系乐观，相信自己能把握主动权，相信你们就是命中注定那一对");
				outtextxy(10, 530, "工作上：当你在事业上得到希望的能量时，前途会无比光明");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 18: {
				cleardevice();
				IMAGE moon;
				loadimage(&moon, "assets/moon.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &moon);
				outtextxy(210, 380, "你抽到了：月亮");
				outtextxy(220, 420, "释义：");
				settextstyle(22, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：不安、迷惑、动摇、谎言、欺骗、鬼迷心窍");
				outtextxy(10, 500, "爱情上：爱情上：动荡的爱、三角关系 你敏感害怕伤害，尽管伴侣承诺，你却犹豫不决，甚至想逃避");
				outtextxy(10, 530, "工作上：你可能有些不满足，希望能够把自己内在的力量全使出来，于是你开始想要晚上的时间");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 19: {
				cleardevice();
				IMAGE sun;
				loadimage(&sun, "assets/sun.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &sun);
				outtextxy(210, 380, "你抽到了：太阳");
				outtextxy(220, 420, "释义：");
				settextstyle(22, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：活跃、丰富的生命力、充满生机、精力充沛、工作顺利、贵人相助");
				outtextxy(10, 500, "爱情上：幸福的婚姻 走出坎坷的感情，前面是洒满歌声和欢乐的坦途，你们将规划未来的生活。");
				outtextxy(10, 530, "工作上：事业上会有贵人相助，将会有更好的发展机遇、健康的交际");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 20: {
				cleardevice();
				IMAGE judgement;
				loadimage(&judgement, "assets/judgement.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &judgement);
				outtextxy(210, 380, "你抽到了：审判");
				outtextxy(220, 420, "释义：");
				settextstyle(22, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：复活的喜悦、康复、坦白、好消息、好运气、初露锋芒");
				outtextxy(10, 500, "爱情上：复苏的爱、重逢、爱的奇迹 双方都认真学习和成长，表面上的变化不大，但内在改变很大");
				outtextxy(10, 530, "工作上：你超越了自我，在过去努力的基础上取得了成功");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			case 21: {
				cleardevice();
				IMAGE world;
				loadimage(&world, "assets/world.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &world);
				outtextxy(210, 380, "你抽到了：世界");
				outtextxy(220, 420, "释义：");
				settextstyle(20, 0, "微软雅黑");
				outtextxy(10, 470, "生活上：完成、成功、完美无缺、连续不断、精神亢奋、拥有毕生奋斗目标、完成使命、幸运降临、快乐结束");
				outtextxy(10, 500, "爱情上：模范情侣 你们在彼此的承诺中持续着美好的关系");
				outtextxy(10, 530, "工作上：因为努力工作，所以回报丰厚");
				settextstyle(40, 0, "微软雅黑");
				outtextxy(210, 560, "请按ESC键退出");
				break;
			}
			}
	}

}