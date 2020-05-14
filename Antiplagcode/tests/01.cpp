#include <iostream>
#include <set>
#include <map>
#include <cstddef>
#include <string>

class SETTER
{
public:
	SETTER(size_t S)
	{
		setter = new std::set<long long>[S + 1];
	}
	void add(size_t index, long long elem)
	{
		auto tmp = mapper.find(elem);
		if (tmp != mapper.end())
		{
			(*tmp).second.insert(index);
			setter[index].insert(elem);
		}
		else
		{
			std::set<int> jj;
			jj.insert(index);
			mapper.emplace(elem, jj);
			setter[index].insert(elem);
		}
	}
	void deleter(size_t index, long long elem)
	{
		auto& tmp = (*(mapper.find(elem))).second;
		tmp.erase(tmp.find(index));
		setter[index].erase(setter[index].find(elem));
	}
	void clearon(size_t index)
	{
		for (const long long& tmp : setter[index])
		{
			auto jingo = mapper.find(tmp);
			(*jingo).second.erase((*jingo).second.find(index));
		}
		setter[index].clear();
	}
	void listset(size_t index)
	{
		if (!(setter[index].empty()))
		{
			for (const long long& tmp : setter[index])
			{
				std::cout << tmp << ' ';
			}
			std::cout << std::endl;
		}
		else
		{
			std::cout << "-1" << std::endl;
		}
	}
	void listsetof(long long elem)
	{
		auto itera = mapper.find(elem);
		if (itera != mapper.end())
		{
			auto tmp = (*itera).second;
			if (!(tmp.empty()))
			{
				for (int vivi : tmp)
				{
					std::cout << vivi << ' ';
				}
				std::cout << std::endl;
			}
			else
			{
				std::cout << "-1" << std::endl;
			}
		}
		else
		{
			std::cout << "-1" << std::endl;
		}
	}
private:
	std::set<long long>* setter = nullptr;
	std::map<long long, std::set<int>> mapper;
	size_t size = 0;
	long long max = 0;
};

int main()
{
	long long N;
	size_t M;
	size_t K;
	std::cin >> N >> M >> K;
	SETTER gorg(M);
	std::string str;
	long long num;
	int setnum;
	for (size_t i = 0; i < K; ++i)
	{
		std::cin >> str;
		if (str == "ADD")
		{
			std::cin >> num >> setnum;
			gorg.add(setnum, num);
		}
		else if (str == "DELETE")
		{
			std::cin >> num >> setnum;
			gorg.deleter(setnum, num);
		}
		else if (str == "CLEAR")
		{
			std::cin >> setnum;
			gorg.clearon(setnum);
		}
		else if (str == "LISTSET")
		{
			std::cin >> setnum;
			gorg.listset(setnum);
		}
		else if (str == "LISTSETSOF")
		{
			std::cin >> num;
			gorg.listsetof(num);
		}
	}
}

