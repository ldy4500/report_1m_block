all: report_1m_block

report_1m_block : main.cpp
	g++ -o report_1m_block main.cpp -lnetfilter_queue

clean:
	rm -f report_1m_block *.o
