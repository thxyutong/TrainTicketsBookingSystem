//��Ʊ������ϵͳ 
#ifndef SJTU_TICKET_HPP
#define SJTU_TICKET_HPP

#include <string>
#include "exceptions.hpp"
#include "timer.hpp"
namespace sjtu{
	class ticket{
	private:
		std::string trainId;//��������
		std::string userId;//�û�ID
		std::string userName;//�û��� 
		std::string departStation;//���վ 
		std::string stopStation;//�յ�վ 
		timer departTime;//����ʱ�� 
		timer stopTime;//����ʱ�� 
		int seatType;//��λ���� 
		int price;//Ʊ�� 
		
	public:
		ticket(const std::string &_train, const std::string &_userId, 
			const std::string &_userName, const std::string &_departStation,
			const std::string &_stopStation, const timer &_departTime, 
			const timer &_stopTime, int _seatType, int _price): 
			trainId(_train), userId(_userId), userName(_userName), 
			departStation(_departStation), stopStation(_stopStation), 
			departTime(_departTime), stopTime(_stopTime), 
			seatType(_seatType),price(_price) {}
		
		ticket(const ticket &other){
			trainId=other.trainId;
			userId=other.userId;
			userName=other.userName;
			departStation=other.departStation;
			stopStation=other.stopStation;
			departTime=other.departTime;
			stopTime=other.stopTime;
			seatType=other.seatType;
			price=other.price;
		}
		
		ticket &operator=(const ticket &other){
			trainId=other.trainId;
			userId=other.userId;
			userName=other.userName;
			departStation=other.departStation;
			stopStation=other.stopStation;
			departTime=other.departTime;
			stopTime=other.stopTime;
			seatType=other.seatType;
			price=other.price;
			return *this;
		}
		
		std::string getTrain() const {
			return trainId;
		}
		
		std::string getUserId() const{
			return userId; 
		}
		
		std::string getUserName() const{
			return userName;
		}
		
		std::string getDepartStation() const{
			return departStation;
		}
		
		std::string getStopStation() const{
			return stopStation;
		}
		
		timer getDepartTime() const{
			return departTime;
		}
		
		timer getStopTime()	const{
			return stopTime;
		}
		
		int getType() const{
			return seatType;
		}
		
		int getPrice()	const{
			return price;
		}
		
	friend std::ostream& operator<<(std::ostream &os,const ticket& obj) {
		
		os<<"trainId:\t"<<obj.trainId<<'\n';
		os<<"userId:\t"<<obj.userId<<'\n';
		os<<"userName:\t"<<obj.userName<<'\n';
		os<<"departStation:\t"<<obj.departStation<<'\n';
		os<<"stopStation:\t"<<obj.stopStation<<'\n';
		os<<"departTime:\t"<<obj.departTime<<'\n';
		os<<"stopTime:\t"<<obj.stopTime<<'\n';
		os<<"seatType:\t"<<obj.seatType<<'\n';
		os<<"price:\t"<<obj.price<<'\n';
		return os;
	}
			
	};
	
	//friend std::ostream& operator<<(std::ostream &os,const Ticket& obj){
	/*ticket::operator<<(std::ostream &os,const ticket& obj) {
		os<<obj.trainId;
		os<<obj.userId;
		os<<obj.userName;
		os<<obj.departStation;
		os<<obj.stopStation;
		os<<obj.departTime;
		os<<obj.stopTime;
		os<<obj.seatype;
		os<<obj.price;
		return price;
	}*/
	

}
#endif/*station_hpp*/
