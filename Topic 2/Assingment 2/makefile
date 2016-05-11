main.out: bank_acounts.o checking_acount.o savings_acount.o credit_card_acount.o main.o
	g++ -Wall -g -o main.out bank_acounts.o checking_acount.o savings_acount.o credit_card_acount.o main.o
	
main.o: main.cpp bank_acounts.h checking_acount.h savings_acount.h credit_card_acount.h
	g++ -Wall -g -c main.cpp
	
credit.o: credit_card_acount.cpp credit_card_acount.h
	g++ -Wall -g -c credit_card_acount.cpp

save.o: savings_acount.cpp savings_acount.h
	g++ -Wall -g -c savings_acount.cpp

check.o: checking_acount.cpp checking_acount.h
	g++ -Wall -g -c checking_acount.cpp

bank.o: bank_acounts.cpp bank_acounts.h
	g++ -Wall -g -c bank_acounts.cpp