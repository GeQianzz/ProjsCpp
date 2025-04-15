#include <iostream>
#include <cstring> // 为了使用strcpy和strcat
using namespace std;

class CPicture {
    bool m_bSatiate;
    char m_szName[20];

public:
    CPicture(char *szName = NULL);
    CPicture(CPicture &CopyPicture);
    ~CPicture() {
        cout << "展览结束了，" << m_szName << "也该撤去了" << endl;
    }

    char *GetName() {
        return m_szName;
    }

    void Show() {
        m_bSatiate = true;
    }

    void Finish() {
        if (m_bSatiate) {
            cout << "这么美的画一定有很多人喜欢!" << endl;
        } else {
            cout << "怎么还不开展!" << endl;
        }
    }
};

// 构造函数实现
CPicture::CPicture(char *szName) {
    m_bSatiate = false;
    if (szName == NULL) {
        cout << "画家还没有为我命名" << endl;
        m_szName[0] = '\0';
    } else {
        strcpy(m_szName, szName);
        cout << "我是" << m_szName << "，是一幅油画" << endl;
    }
}

// 复制构造函数实现
CPicture::CPicture(CPicture &CopyPicture) {
    m_bSatiate = false;
    strcpy(m_szName, CopyPicture.GetName());
    strcat(m_szName, "的复制品");
    cout << "我是" << m_szName << "，也是一幅油画" << endl;
}

// 开始展览的方法
void Begin(CPicture Picture) {
    Picture.Show();
}

int main() {
    CPicture Picture("日出");
    Begin(Picture);
    Picture.Finish();
    return 0;
}
