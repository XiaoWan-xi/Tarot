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
	settextstyle(40, 0, "΢���ź�");
	outtextxy(220, 360, "��ӭ��������ռ��");
	outtextxy(200, 400, "������Ĭ������ռ��������");
	outtextxy(210, 440, "Ȼ���������һ����");
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
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�����Ȼ����սδ֪��һ����С������������塢���ɱ���");
			outtextxy(10, 500, "�����ϣ���������������׹�밮�ӡ�������ʵİ��顢���ص�����");
			outtextxy(10, 530, "�����ϣ���ð���ġ�׷�����档��������ҵ��ѧҵ���Զ��صķ�ʽȡ��������ջ�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
			}
		case 1: {
			cleardevice();
			IMAGE megician;
			loadimage(&megician, "assets/megician.jpg", 200, 340);
			putimage(20, 20, &megician);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�ħ��ʦ");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "���鿪ʼ���ж��ı䣬�����ļ������ɣ��᳹��־��������Ȼ�������ﵽҰ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 2: {
			cleardevice();
			IMAGE priestess;
			loadimage(&priestess, "assets/high_priestess.jpg", 200, 340);
			putimage(20, 20, &priestess);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽��:Ů��˾");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "������������Ǳ����ǰ;�������仯�����˼�������񶴲�����׼ȷֱ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 3: {
			cleardevice();
			IMAGE empress;
			loadimage(&empress, "assets/empress.jpg", 200, 340);
			putimage(20, 20, &empress);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�Ů��");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�Ҹ����ɹ����ջ��������ǣ�Բ����ͥ������û�������ò�������������Ȼ�Ӵ���������У����С�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 4: {
			cleardevice();
			IMAGE emperor;
			loadimage(&emperor, "assets/emperor.jpg", 200, 340);
			putimage(20, 20, &emperor);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ��ʵ�");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "���٣�Ȩ����ʤ���������쵼Ȩ����ǿ����־�����Ŀ�꣬���׵����Σ������ϵĹµ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 5: {
			cleardevice();
			IMAGE hierophant;
			loadimage(&hierophant, "assets/hierophant.jpg", 200, 340);
			putimage(20, 20, &hierophant);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ��̻�");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�ͬ�顢�����������õ��������󡢵õ������ϵ����㡢���ع���־Ը��");
			outtextxy(10, 500, "�����ϣ�������ѹ����äĿ�ı��Լ������²��ҳ�");
			outtextxy(10, 530, "�����ϣ�����ʮ�㡢����ȷ������ﱾ�ʡ�Ѱ���µĹ�������");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 6: {
			cleardevice();
			IMAGE lovers;
			loadimage(&lovers, "assets/lovers.jpg", 200, 340);
			putimage(20, 20, &lovers);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ���ϣ����飬���У���Ȥ������ϣ����δ�����������������ѡ�");
			outtextxy(10, 500, "������:���������԰��Ŀ��������������");
			outtextxy(10, 530, "�����ϣ����ٹ�ϵ��δ��ǰ;���ش����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 7: {
			cleardevice();
			IMAGE chariot;
			loadimage(&chariot, "assets/chariot.jpg", 200, 340);
			putimage(20, 20, &chariot);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�ս��");
			outtextxy(220, 420, "���壺");
			settextstyle(23, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�Ŭ������óɹ���ʤ�����˷��ϰ����ж��������������ԣ���������");
			outtextxy(10, 500, "������:Ŭ�������Լ������������ҿ��Ƶúܺã�������ĸ��鷢չ�ø�˳��");
			outtextxy(10, 530, "�����ϣ�����׿�г�Ч�����Ŷ������ǵ��㽫�ÿͻ��������ģ�Ը�����㹲ͬ����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 8: {
			cleardevice();
			IMAGE strength;
			loadimage(&strength, "assets/strength.jpg", 200, 340);
			putimage(20, 20, &strength);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����ж����¸Ҿ��ϡ��·�չ����ת��������־��սʤ����");
			outtextxy(10, 500, "�����ϣ���չһ�����������ܹ�ϵ��ȫ��Ͷ�롢�໥���ߡ�û�о����");
			outtextxy(10, 530, "�����ϣ�����ͻ�����ң���˾�Ϳͻ��������г�ֵ����ģ��ɾͽ������");;
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 9: {
			cleardevice();
			IMAGE hermit;
			loadimage(&hermit, "assets/hermit.jpg", 200, 340);
			putimage(20, 20, &hermit);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����ص���ʵ��������ж���������������ܹ¶�");
			outtextxy(10, 500, "�����ϣ����˼����θ��顢̽���˴�֮��Ĺ�ϵ");
			outtextxy(10, 530, "�����ϣ��ڻƽ�ʱ�����ˡ���ʵ������������");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 10: {
			cleardevice();
			IMAGE wheel_of_fortune;
			loadimage(&wheel_of_fortune, "assets/wheel_of_fortune.jpg", 200, 340);
			putimage(20, 20, &wheel_of_fortune);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����֮��");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ��ؼ��¼��������ı仯�����˵Ŀ��ˡ������ת");
			outtextxy(10, 500, "�����ϣ������ϵĿ���������ȥ����ϵ�������ȶ��ķ�չ�׶�");
			outtextxy(10, 530, "�����ϣ���ƽ���Ŀ������ۡ���ֹ�ȥ����ƽ̹�Ĵ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 11: {
			cleardevice();
			IMAGE justice;
			loadimage(&justice, "assets/justice.jpg", 200, 340);
			putimage(20, 20, &justice);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����������������С�̹����������һ��׷�����");
			outtextxy(10, 500, "�����ϣ���������Ľ���������������Է��������ѡ��");
			outtextxy(10, 530, "�����ϣ�û��̫�������о���ֻ������ִ�мƻ�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 12: {
			cleardevice();
			IMAGE hanged_man;
			loadimage(&hanged_man, "assets/hanged_man.jpg", 200, 340);
			putimage(20, 20, &hanged_man);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�������");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����ܿ��顢�ж����ޡ���������η��������ʧ���еá�ԡ������");
			outtextxy(10, 500, "�����ϣ����׵İ�����Ҫ��ʡ���顢�԰���������ܹ������Է�");
			outtextxy(10, 530, "�����ϣ���ҵ����ͣ�١��������ԭ���ٴ�ȷ��Ŀ�ꡢ׼������");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 13: {
			cleardevice();
			IMAGE death;
			loadimage(&death, "assets/death.jpg", 200, 340);
			putimage(20, 20, &death);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�ʧ�ܡ��ӽ����������������𺦡�����ֹͣ��������������");
			outtextxy(10, 500, "�����ϣ�����˫���к���ĺ蹵��������ֹ ���߿�ʼ�µĽ׶�");
			outtextxy(10, 530, "�����ϣ������ȵ����桢���ȫ�·�չ����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 14: {
			cleardevice();
			IMAGE temperance;
			loadimage(&temperance, "assets/temperance.jpg", 200, 340);
			putimage(20, 20, &temperance);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�������������ƽ˳�����ݻ���");
			outtextxy(10, 500, "�����ϣ��ø�תΪ���⡢�������������򵥡�ƽ�����˴˵Ĺ�ͨ�ø������");
			outtextxy(10, 530, "�����ϣ�����ҵ��С��������Ϊ�������������ͬ�¸е�ʮ�ַ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 15: {
			cleardevice();
			IMAGE devil;
			loadimage(&devil, "assets/devil.jpg", 200, 340);
			putimage(20, 20, &devil);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ���ħ");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����������䡢���������⡢���������Կ����ջ������Ƿϡ����ɸ��˵�����");
			outtextxy(10, 500, "�����ϣ�˽������ ���������Ǳ��˴�������ȴ��ϣ���������ֹ�ϵ����Ը���ܱ˴˵�ǣ���Ͳ���");
			outtextxy(10, 530, "�����ϣ��㽫����ҵ�еõ��൱���������Ƹ��������е���ҵ����һ�У��Ƹ��������Ŀ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 16: {
			cleardevice();
			IMAGE tower;
			loadimage(&tower, "assets/tower.jpg", 200, 340);
			putimage(20, 20, &tower);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ���");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ��Ʋ����澳���������������������Ĵ�����޴�ı䶯����ǣ�����������������Է١����Ų���");
			outtextxy(10, 500, "�����ϣ�ͻȻ���룬����İ� ͻȻ�ĸı���������ʹ�࣬���ܸı����������˫����δ�������ߵø���");
			outtextxy(10, 530, "�����ϣ������Զ��׼����رܲ��ǰ취��Ҫ������ս��������ò��ǿ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 17: {
			cleardevice();
			IMAGE star;
			loadimage(&star, "assets/star.jpg", 200, 340);
			putimage(20, 20, &star);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(17, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�ǰ;����������ϣ�����������������������롢����Ը����ˮ׼���");
			outtextxy(10, 500, "�����ϣ���������������� �Թ�ϵ�ֹۣ������Լ��ܰ�������Ȩ���������Ǿ�������ע����һ��");
			outtextxy(10, 530, "�����ϣ���������ҵ�ϵõ�ϣ��������ʱ��ǰ;���ޱȹ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 18: {
			cleardevice();
			IMAGE moon;
			loadimage(&moon, "assets/moon.jpg", 200, 340);
			putimage(20, 20, &moon);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ��������Ի󡢶�ҡ�����ԡ���ƭ����������");
			outtextxy(10, 500, "�����ϣ������İ������ǹ�ϵ �����к����˺������ܰ��³�ŵ����ȴ��ԥ�������������ӱ�");
			outtextxy(10, 530, "�����ϣ��������Щ�����㣬ϣ���ܹ����Լ����ڵ�����ȫʹ�����������㿪ʼ��Ҫ���ϵ�ʱ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 19: {
			cleardevice();
			IMAGE sun;
			loadimage(&sun, "assets/sun.jpg", 200, 340);
			putimage(20, 20, &sun);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�̫��");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ���Ծ���ḻ���������������������������桢����˳������������");
			outtextxy(10, 500, "�����ϣ��Ҹ��Ļ��� �߳������ĸ��飬ǰ�������������ͻ��ֵ�̹;�����ǽ��滮δ�������");
			outtextxy(10, 530, "�����ϣ���ҵ�ϻ��й��������������и��õķ�չ�����������Ľ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 20: {
			cleardevice();
			IMAGE judgement;
			loadimage(&judgement, "assets/judgement.jpg", 200, 340);
			putimage(20, 20, &judgement);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ������ϲ�á�������̹�ס�����Ϣ������������¶��â");
			outtextxy(10, 500, "�����ϣ������ϣ����յİ����طꡢ�����漣 ˫��������ѧϰ�ͳɳ��������ϵı仯���󣬵����ڸı�ܴ�");
			outtextxy(10, 530, "�����ϣ��㳬Խ�����ң��ڹ�ȥŬ���Ļ�����ȡ���˳ɹ�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 21: {
			cleardevice();
			IMAGE world;
			loadimage(&world, "assets/world.jpg", 200, 340);
			putimage(20, 20, &world);
			putimage(260, 20, &cardback);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ���ɡ��ɹ���������ȱ���������ϡ����񿺷ܡ�ӵ�б����ܶ�Ŀ�ꡢ���ʹ�������˽��١����ֽ���");
			outtextxy(10, 500, "�����ϣ�ģ������ �����ڱ˴˵ĳ�ŵ�г��������õĹ�ϵ");
			outtextxy(10, 530, "�����ϣ���ΪŬ�����������Իر����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
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
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�����Ȼ����սδ֪��һ����С������������塢���ɱ���");
			outtextxy(10, 500, "�����ϣ���������������׹�밮�ӡ�������ʵİ��顢���ص�����");
			outtextxy(10, 530, "�����ϣ���ð���ġ�׷�����档��������ҵ��ѧҵ���Զ��صķ�ʽȡ��������ջ�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 1: {
			cleardevice();
			IMAGE megician;
			loadimage(&megician, "assets/megician.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &megician);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�ħ��ʦ");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "���鿪ʼ���ж��ı䣬�����ļ������ɣ��᳹��־��������Ȼ�������ﵽҰ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 2: {
			cleardevice();
			IMAGE priestess;
			loadimage(&priestess, "assets/high_priestess.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &priestess);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽��:Ů��˾");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "������������Ǳ����ǰ;�������仯�����˼�������񶴲�����׼ȷֱ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 3: {
			cleardevice();
			IMAGE empress;
			loadimage(&empress, "assets/empress.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &empress);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�Ů��");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�Ҹ����ɹ����ջ��������ǣ�Բ����ͥ������û�������ò�������������Ȼ�Ӵ���������У����С�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 4: {
			cleardevice();
			IMAGE emperor;
			loadimage(&emperor, "assets/emperor.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &emperor);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ��ʵ�");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "���٣�Ȩ����ʤ���������쵼Ȩ����ǿ����־�����Ŀ�꣬���׵����Σ������ϵĹµ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 5: {
			cleardevice();
			IMAGE hierophant;
			loadimage(&hierophant, "assets/hierophant.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &hierophant);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ��̻�");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�ͬ�顢�����������õ��������󡢵õ������ϵ����㡢���ع���־Ը��");
			outtextxy(10, 500, "�����ϣ�������ѹ����äĿ�ı��Լ������²��ҳ�");
			outtextxy(10, 530, "�����ϣ�����ʮ�㡢����ȷ������ﱾ�ʡ�Ѱ���µĹ�������");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 6: {
			cleardevice();
			IMAGE lovers;
			loadimage(&lovers, "assets/lovers.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &lovers);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ���ϣ����飬���У���Ȥ������ϣ����δ�����������������ѡ�");
			outtextxy(10, 500, "������:���������԰��Ŀ��������������");
			outtextxy(10, 530, "�����ϣ����ٹ�ϵ��δ��ǰ;���ش����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 7: {
			cleardevice();
			IMAGE chariot;
			loadimage(&chariot, "assets/chariot.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &chariot);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�ս��");
			outtextxy(220, 420, "���壺");
			settextstyle(23, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�Ŭ������óɹ���ʤ�����˷��ϰ����ж��������������ԣ���������");
			outtextxy(10, 500, "������:Ŭ�������Լ������������ҿ��Ƶúܺã�������ĸ��鷢չ�ø�˳��");
			outtextxy(10, 530, "�����ϣ�����׿�г�Ч�����Ŷ������ǵ��㽫�ÿͻ��������ģ�Ը�����㹲ͬ����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 8: {
			cleardevice();
			IMAGE strength;
			loadimage(&strength, "assets/strength.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &strength);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����ж����¸Ҿ��ϡ��·�չ����ת��������־��սʤ����");
			outtextxy(10, 500, "�����ϣ���չһ�����������ܹ�ϵ��ȫ��Ͷ�롢�໥���ߡ�û�о����");
			outtextxy(10, 530, "�����ϣ�����ͻ�����ң���˾�Ϳͻ��������г�ֵ����ģ��ɾͽ������");;
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 9: {
			cleardevice();
			IMAGE hermit;
			loadimage(&hermit, "assets/hermit.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &hermit);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����ص���ʵ��������ж���������������ܹ¶�");
			outtextxy(10, 500, "�����ϣ����˼����θ��顢̽���˴�֮��Ĺ�ϵ");
			outtextxy(10, 530, "�����ϣ��ڻƽ�ʱ�����ˡ���ʵ������������");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 10: {
			cleardevice();
			IMAGE wheel_of_fortune;
			loadimage(&wheel_of_fortune, "assets/wheel_of_fortune.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &wheel_of_fortune);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����֮��");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ��ؼ��¼��������ı仯�����˵Ŀ��ˡ������ת");
			outtextxy(10, 500, "�����ϣ������ϵĿ���������ȥ����ϵ�������ȶ��ķ�չ�׶�");
			outtextxy(10, 530, "�����ϣ���ƽ���Ŀ������ۡ���ֹ�ȥ����ƽ̹�Ĵ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 11: {
			cleardevice();
			IMAGE justice;
			loadimage(&justice, "assets/justice.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &justice);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����������������С�̹����������һ��׷�����");
			outtextxy(10, 500, "�����ϣ���������Ľ���������������Է��������ѡ��");
			outtextxy(10, 530, "�����ϣ�û��̫�������о���ֻ������ִ�мƻ�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 12: {
			cleardevice();
			IMAGE hanged_man;
			loadimage(&hanged_man, "assets/hanged_man.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &hanged_man);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�������");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����ܿ��顢�ж����ޡ���������η��������ʧ���еá�ԡ������");
			outtextxy(10, 500, "�����ϣ����׵İ�����Ҫ��ʡ���顢�԰���������ܹ������Է�");
			outtextxy(10, 530, "�����ϣ���ҵ����ͣ�١��������ԭ���ٴ�ȷ��Ŀ�ꡢ׼������");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 13: {
			cleardevice();
			IMAGE death;
			loadimage(&death, "assets/death.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &death);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�ʧ�ܡ��ӽ����������������𺦡�����ֹͣ��������������");
			outtextxy(10, 500, "�����ϣ�����˫���к���ĺ蹵��������ֹ ���߿�ʼ�µĽ׶�");
			outtextxy(10, 530, "�����ϣ������ȵ����桢���ȫ�·�չ����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 14: {
			cleardevice();
			IMAGE temperance;
			loadimage(&temperance, "assets/temperance.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &temperance);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(25, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�������������ƽ˳�����ݻ���");
			outtextxy(10, 500, "�����ϣ��ø�תΪ���⡢�������������򵥡�ƽ�����˴˵Ĺ�ͨ�ø������");
			outtextxy(10, 530, "�����ϣ�����ҵ��С��������Ϊ�������������ͬ�¸е�ʮ�ַ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 15: {
			cleardevice();
			IMAGE devil;
			loadimage(&devil, "assets/devil.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &devil);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ���ħ");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ����������䡢���������⡢���������Կ����ջ������Ƿϡ����ɸ��˵�����");
			outtextxy(10, 500, "�����ϣ�˽������ ���������Ǳ��˴�������ȴ��ϣ���������ֹ�ϵ����Ը���ܱ˴˵�ǣ���Ͳ���");
			outtextxy(10, 530, "�����ϣ��㽫����ҵ�еõ��൱���������Ƹ��������е���ҵ����һ�У��Ƹ��������Ŀ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 16: {
			cleardevice();
			IMAGE tower;
			loadimage(&tower, "assets/tower.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &tower);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ���");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ��Ʋ����澳���������������������Ĵ�����޴�ı䶯����ǣ�����������������Է١����Ų���");
			outtextxy(10, 500, "�����ϣ������ϣ�ͻȻ���룬����İ� ͻȻ�ĸı���������ʹ�࣬���ܸı����������˫����δ�������ߵø���");
			outtextxy(10, 530, "�����ϣ������Զ��׼����رܲ��ǰ취��Ҫ������ս��������ò��ǿ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 17: {
			cleardevice();
			IMAGE star;
			loadimage(&star, "assets/star.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &star);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(17, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ�ǰ;����������ϣ�����������������������롢����Ը����ˮ׼���");
			outtextxy(10, 500, "�����ϣ���������������� �Թ�ϵ�ֹۣ������Լ��ܰ�������Ȩ���������Ǿ�������ע����һ��");
			outtextxy(10, 530, "�����ϣ���������ҵ�ϵõ�ϣ��������ʱ��ǰ;���ޱȹ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 18: {
			cleardevice();
			IMAGE moon;
			loadimage(&moon, "assets/moon.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &moon);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ��������Ի󡢶�ҡ�����ԡ���ƭ����������");
			outtextxy(10, 500, "�����ϣ������ϣ������İ������ǹ�ϵ �����к����˺������ܰ��³�ŵ����ȴ��ԥ�������������ӱ�");
			outtextxy(10, 530, "�����ϣ��������Щ�����㣬ϣ���ܹ����Լ����ڵ�����ȫʹ�����������㿪ʼ��Ҫ���ϵ�ʱ��");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 19: {
			cleardevice();
			IMAGE sun;
			loadimage(&sun, "assets/sun.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &sun);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�̫��");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ���Ծ���ḻ���������������������������桢����˳������������");
			outtextxy(10, 500, "�����ϣ��Ҹ��Ļ��� �߳������ĸ��飬ǰ�������������ͻ��ֵ�̹;�����ǽ��滮δ�������");
			outtextxy(10, 530, "�����ϣ���ҵ�ϻ��й��������������и��õķ�չ�����������Ľ���");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 20: {
			cleardevice();
			IMAGE judgement;
			loadimage(&judgement, "assets/judgement.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &judgement);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(22, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ������ϲ�á�������̹�ס�����Ϣ������������¶��â");
			outtextxy(10, 500, "�����ϣ����յİ����طꡢ�����漣 ˫��������ѧϰ�ͳɳ��������ϵı仯���󣬵����ڸı�ܴ�");
			outtextxy(10, 530, "�����ϣ��㳬Խ�����ң��ڹ�ȥŬ���Ļ�����ȡ���˳ɹ�");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
			break;
		}
		case 21: {
			cleardevice();
			IMAGE world;
			loadimage(&world, "assets/world.jpg", 200, 340);
			putimage(20, 20, &cardback);
			putimage(260, 20, &world);
			putimage(500, 20, &cardback);
			outtextxy(210, 380, "��鵽�ˣ�����");
			outtextxy(220, 420, "���壺");
			settextstyle(20, 0, "΢���ź�");
			outtextxy(10, 470, "�����ϣ���ɡ��ɹ���������ȱ���������ϡ����񿺷ܡ�ӵ�б����ܶ�Ŀ�ꡢ���ʹ�������˽��١����ֽ���");
			outtextxy(10, 500, "�����ϣ�ģ������ �����ڱ˴˵ĳ�ŵ�г��������õĹ�ϵ");
			outtextxy(10, 530, "�����ϣ���ΪŬ�����������Իر����");
			settextstyle(40, 0, "΢���ź�");
			outtextxy(210, 560, "�밴ESC���˳�");
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
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ�����Ȼ����սδ֪��һ����С������������塢���ɱ���");
				outtextxy(10, 500, "�����ϣ���������������׹�밮�ӡ�������ʵİ��顢���ص�����");
				outtextxy(10, 530, "�����ϣ���ð���ġ�׷�����档��������ҵ��ѧҵ���Զ��صķ�ʽȡ��������ջ�");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 1: {
				cleardevice();
				IMAGE megician;
				loadimage(&megician, "assets/megician.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &megician);
				outtextxy(210, 380, "��鵽�ˣ�ħ��ʦ");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "���鿪ʼ���ж��ı䣬�����ļ������ɣ��᳹��־��������Ȼ�������ﵽҰ��");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 2: {
				cleardevice();
				IMAGE priestess;
				loadimage(&priestess, "assets/high_priestess.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &priestess);
				outtextxy(210, 380, "��鵽��:Ů��˾");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "������������Ǳ����ǰ;�������仯�����˼�������񶴲�����׼ȷֱ��");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 3: {
				cleardevice();
				IMAGE empress;
				loadimage(&empress, "assets/empress.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &empress);
				outtextxy(210, 380, "��鵽�ˣ�Ů��");
				outtextxy(220, 420, "���壺");
				settextstyle(20, 0, "΢���ź�");
				outtextxy(10, 470, "�Ҹ����ɹ����ջ��������ǣ�Բ����ͥ������û�������ò�������������Ȼ�Ӵ���������У����С�");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 4: {
				cleardevice();
				IMAGE emperor;
				loadimage(&emperor, "assets/emperor.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &emperor);
				outtextxy(210, 380, "��鵽�ˣ��ʵ�");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "���٣�Ȩ����ʤ���������쵼Ȩ����ǿ����־�����Ŀ�꣬���׵����Σ������ϵĹµ���");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 5: {
				cleardevice();
				IMAGE hierophant;
				loadimage(&hierophant, "assets/hierophant.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &hierophant);
				outtextxy(210, 380, "��鵽�ˣ��̻�");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ�ͬ�顢�����������õ��������󡢵õ������ϵ����㡢���ع���־Ը��");
				outtextxy(10, 500, "�����ϣ�������ѹ����äĿ�ı��Լ������²��ҳ�");
				outtextxy(10, 530, "�����ϣ�����ʮ�㡢����ȷ������ﱾ�ʡ�Ѱ���µĹ�������");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 6: {
				cleardevice();
				IMAGE lovers;
				loadimage(&lovers, "assets/lovers.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &lovers);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ���ϣ����飬���У���Ȥ������ϣ����δ�����������������ѡ�");
				outtextxy(10, 500, "������:���������԰��Ŀ��������������");
				outtextxy(10, 530, "�����ϣ����ٹ�ϵ��δ��ǰ;���ش����");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 7: {
				cleardevice();
				IMAGE chariot;
				loadimage(&chariot, "assets/chariot.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &chariot);
				outtextxy(210, 380, "��鵽�ˣ�ս��");
				outtextxy(220, 420, "���壺");
				settextstyle(23, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ�Ŭ������óɹ���ʤ�����˷��ϰ����ж��������������ԣ���������");
				outtextxy(10, 500, "������:Ŭ�������Լ������������ҿ��Ƶúܺã�������ĸ��鷢չ�ø�˳��");
				outtextxy(10, 530, "�����ϣ�����׿�г�Ч�����Ŷ������ǵ��㽫�ÿͻ��������ģ�Ը�����㹲ͬ����");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 8: {
				cleardevice();
				IMAGE strength;
				loadimage(&strength, "assets/strength.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &strength);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ����ж����¸Ҿ��ϡ��·�չ����ת��������־��սʤ����");
				outtextxy(10, 500, "�����ϣ���չһ�����������ܹ�ϵ��ȫ��Ͷ�롢�໥���ߡ�û�о����");
				outtextxy(10, 530, "�����ϣ�����ͻ�����ң���˾�Ϳͻ��������г�ֵ����ģ��ɾͽ������");;
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 9: {
				cleardevice();
				IMAGE hermit;
				loadimage(&hermit, "assets/hermit.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &hermit);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ����ص���ʵ��������ж���������������ܹ¶�");
				outtextxy(10, 500, "�����ϣ����˼����θ��顢̽���˴�֮��Ĺ�ϵ");
				outtextxy(10, 530, "�����ϣ��ڻƽ�ʱ�����ˡ���ʵ������������");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 10: {
				cleardevice();
				IMAGE wheel_of_fortune;
				loadimage(&wheel_of_fortune, "assets/wheel_of_fortune.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &wheel_of_fortune);
				outtextxy(210, 380, "��鵽�ˣ�����֮��");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ��ؼ��¼��������ı仯�����˵Ŀ��ˡ������ת");
				outtextxy(10, 500, "�����ϣ������ϵĿ���������ȥ����ϵ�������ȶ��ķ�չ�׶�");
				outtextxy(10, 530, "�����ϣ���ƽ���Ŀ������ۡ���ֹ�ȥ����ƽ̹�Ĵ��");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 11: {
				cleardevice();
				IMAGE justice;
				loadimage(&justice, "assets/justice.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &justice);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ����������������С�̹����������һ��׷�����");
				outtextxy(10, 500, "�����ϣ���������Ľ���������������Է��������ѡ��");
				outtextxy(10, 530, "�����ϣ�û��̫�������о���ֻ������ִ�мƻ�");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 12: {
				cleardevice();
				IMAGE hanged_man;
				loadimage(&hanged_man, "assets/hanged_man.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &hanged_man);
				outtextxy(210, 380, "��鵽�ˣ�������");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ����ܿ��顢�ж����ޡ���������η��������ʧ���еá�ԡ������");
				outtextxy(10, 500, "�����ϣ����׵İ�����Ҫ��ʡ���顢�԰���������ܹ������Է�");
				outtextxy(10, 530, "�����ϣ���ҵ����ͣ�١��������ԭ���ٴ�ȷ��Ŀ�ꡢ׼������");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 13: {
				cleardevice();
				IMAGE death;
				loadimage(&death, "assets/death.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &death);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ�ʧ�ܡ��ӽ����������������𺦡�����ֹͣ��������������");
				outtextxy(10, 500, "�����ϣ�����˫���к���ĺ蹵��������ֹ ���߿�ʼ�µĽ׶�");
				outtextxy(10, 530, "�����ϣ������ȵ����桢���ȫ�·�չ����");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 14: {
				cleardevice();
				IMAGE temperance;
				loadimage(&temperance, "assets/temperance.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &temperance);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(25, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ�������������ƽ˳�����ݻ���");
				outtextxy(10, 500, "�����ϣ��ø�תΪ���⡢�������������򵥡�ƽ�����˴˵Ĺ�ͨ�ø������");
				outtextxy(10, 530, "�����ϣ�����ҵ��С��������Ϊ�������������ͬ�¸е�ʮ�ַ���");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 15: {
				cleardevice();
				IMAGE devil;
				loadimage(&devil, "assets/devil.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &devil);
				outtextxy(210, 380, "��鵽�ˣ���ħ");
				outtextxy(220, 420, "���壺");
				settextstyle(22, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ����������䡢���������⡢���������Կ����ջ������Ƿϡ����ɸ��˵�����");
				outtextxy(10, 500, "�����ϣ�˽������ ���������Ǳ��˴�������ȴ��ϣ���������ֹ�ϵ����Ը���ܱ˴˵�ǣ���Ͳ���");
				outtextxy(10, 530, "�����ϣ��㽫����ҵ�еõ��൱���������Ƹ��������е���ҵ����һ�У��Ƹ��������Ŀ��");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 16: {
				cleardevice();
				IMAGE tower;
				loadimage(&tower, "assets/tower.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &tower);
				outtextxy(210, 380, "��鵽�ˣ���");
				outtextxy(220, 420, "���壺");
				settextstyle(20, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ��Ʋ����澳���������������������Ĵ�����޴�ı䶯����ǣ�����������������Է١����Ų���");
				outtextxy(10, 500, "�����ϣ������ϣ�ͻȻ���룬����İ� ͻȻ�ĸı���������ʹ�࣬���ܸı����������˫����δ�������ߵø���");
				outtextxy(10, 530, "�����ϣ������Զ��׼����رܲ��ǰ취��Ҫ������ս��������ò��ǿ��");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 17: {
				cleardevice();
				IMAGE star;
				loadimage(&star, "assets/star.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &star);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(17, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ�ǰ;����������ϣ�����������������������롢����Ը����ˮ׼���");
				outtextxy(10, 500, "�����ϣ���������������� �Թ�ϵ�ֹۣ������Լ��ܰ�������Ȩ���������Ǿ�������ע����һ��");
				outtextxy(10, 530, "�����ϣ���������ҵ�ϵõ�ϣ��������ʱ��ǰ;���ޱȹ���");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 18: {
				cleardevice();
				IMAGE moon;
				loadimage(&moon, "assets/moon.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &moon);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(22, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ��������Ի󡢶�ҡ�����ԡ���ƭ����������");
				outtextxy(10, 500, "�����ϣ������ϣ������İ������ǹ�ϵ �����к����˺������ܰ��³�ŵ����ȴ��ԥ�������������ӱ�");
				outtextxy(10, 530, "�����ϣ��������Щ�����㣬ϣ���ܹ����Լ����ڵ�����ȫʹ�����������㿪ʼ��Ҫ���ϵ�ʱ��");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 19: {
				cleardevice();
				IMAGE sun;
				loadimage(&sun, "assets/sun.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &sun);
				outtextxy(210, 380, "��鵽�ˣ�̫��");
				outtextxy(220, 420, "���壺");
				settextstyle(22, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ���Ծ���ḻ���������������������������桢����˳������������");
				outtextxy(10, 500, "�����ϣ��Ҹ��Ļ��� �߳������ĸ��飬ǰ�������������ͻ��ֵ�̹;�����ǽ��滮δ�������");
				outtextxy(10, 530, "�����ϣ���ҵ�ϻ��й��������������и��õķ�չ�����������Ľ���");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 20: {
				cleardevice();
				IMAGE judgement;
				loadimage(&judgement, "assets/judgement.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &judgement);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(22, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ������ϲ�á�������̹�ס�����Ϣ������������¶��â");
				outtextxy(10, 500, "�����ϣ����յİ����طꡢ�����漣 ˫��������ѧϰ�ͳɳ��������ϵı仯���󣬵����ڸı�ܴ�");
				outtextxy(10, 530, "�����ϣ��㳬Խ�����ң��ڹ�ȥŬ���Ļ�����ȡ���˳ɹ�");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			case 21: {
				cleardevice();
				IMAGE world;
				loadimage(&world, "assets/world.jpg", 200, 340);
				putimage(20, 20, &cardback);
				putimage(260, 20, &cardback);
				putimage(500, 20, &world);
				outtextxy(210, 380, "��鵽�ˣ�����");
				outtextxy(220, 420, "���壺");
				settextstyle(20, 0, "΢���ź�");
				outtextxy(10, 470, "�����ϣ���ɡ��ɹ���������ȱ���������ϡ����񿺷ܡ�ӵ�б����ܶ�Ŀ�ꡢ���ʹ�������˽��١����ֽ���");
				outtextxy(10, 500, "�����ϣ�ģ������ �����ڱ˴˵ĳ�ŵ�г��������õĹ�ϵ");
				outtextxy(10, 530, "�����ϣ���ΪŬ�����������Իر����");
				settextstyle(40, 0, "΢���ź�");
				outtextxy(210, 560, "�밴ESC���˳�");
				break;
			}
			}
	}

}