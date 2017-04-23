//��Ʊ������ϵͳ 
#ifndef SJTU_TICKET_HPP
#define SJTU_TICKET_HPP

#include <string>
#include "exceptions.hpp"
#include "timer.hpp"
namespace sjtu{
	class ticket{
	private:
		std::string id;
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
		ticket() {}
		ticket(const std::string &_id, const std::string &_train, const std::string &_userId, 
			const std::string &_userName, const std::string &_departStation,
			const std::string &_stopStation, const timer &_departTime, 
			const timer &_stopTime, int _seatType, int _price): id(_id), 
			trainId(_train), userId(_userId), userName(_userName), 
			departStation(_departStation), stopStation(_stopStation), 
			departTime(_departTime), stopTime(_stopTime), 
			seatType(_seatType),price(_price) {}
		
		ticket(const ticket &other){
			id = other.id;
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
			id = other.id;
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
		
		const std::string & getId() const {
			return id;
		}
		
		const std::string & getTrain() const {
			return trainId;
		}
		
		const std::string & getUserId() const{
			return userId; 
		}
		
		const std::string & getUserName() const{
			return userName;
		}
		
		const std::string & getDepartStation() const{
			return departStation;
		}
		
		const std::string & getStopStation() const{
			return stopStation;
		}
		
		const timer & getDepartTime() const{
			return departTime;
		}
		
		const timer & getStopTime()	const{
			return stopTime;
		}
		
		int getType() const{
			return seatType;
		}
		
		int getPrice()	const{
			return price;
		}
		
	friend std::ostream& operator<<(std::ostream &os,const ticket& obj) {
		os << "id: " << obj.id << '\n';
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

}
#endif/*station_hpp*/
