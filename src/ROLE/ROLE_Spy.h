/*
 * NAME: ROLE_Spy.h
 *
 * COMMENTS: Spies have access to both base country chat and the chat of their currently targeted country
 				Spies are allowed to switch targed country, but switch will incur a time penalty, however they will regain messages to send
 *
 */

#ifndef __ROLE_Spy_h__
#define __ROLE_Spy_h__

#include "./CTRY/CTRY_Countries.h"
#include "./CTRY/CTRY_Message.h"
#include <queue>

class ROLE_Spy
{
	public:

		//Public contructors and deconstructors
									ROLE_Spy();
									ROLE_Spy(Country country, Country targetCountry, int numberMessages);
									~ROLE_Spy();

		//Getter and setter methods
		int 						getNumberTargetsSwitched();
		int 						getRemainingPenaltyTime();
		int 						getRemainingNumberOfMessages();
		Message*					getMessageFromQueue();

		//Spy logic
		bool						sendMessage(Message message, Country country);
		void						switchCountry(Country newTargetCountry);
		void						decreasePenaltyTimer(int seconds);

	private:
		int numberRemainingMessages;
		int numberTargetsSwitched;
		int penaltyRemainingSeconds;
		queue<Message *> *pendingMessages;
		Country homeCountry;
		Country targetedCountry;
};