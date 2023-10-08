/* ama user-defined bir constructor olsaydi ve {} seklinde cagirmaya
kalksaydin hata verirdi */

class Date
{
private:
	int m_year{1900};
	int m_month{1};
	int m_day{1};

public:
	Date(int year, int month, int day) // user-defined constructor
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}
};

int main()
{
	// Date date{};			 // user-defined constructor oldugu icin cpp kendisi default yaratmiyor
	int gereksiz;			 // olmadigi icin de böyle kullanamiyosun
	Date today{2020, 1, 19}; // böyle kullanabilirsin
}
