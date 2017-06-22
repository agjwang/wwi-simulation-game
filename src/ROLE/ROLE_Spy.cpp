/*
 * NAME: ROLE_Spy.cpp
 *
 * COMMENTS: Implementation
 *
 */

 #include "CTRY_Spy.h"

ROLE_Spy::ROLE_Spy()
{
	homeCountry = -1;
	targetedCountry = -1;

	numberTargetSwitched = 0;
	numberRemainingMessages = 0;
	penaltyRemainingSeconds = 0;

	pendingMessages = new queue();
}

ROLE_Spy::ROLE_Spy(Country country, Country targetCountry, int numberMessages)
{
	homeCountry = country;
	targetedCountry = targetCountry;
	numberRemainingMessages = numberMessages;

	numberTargetSwitched = 0;
	penaltyRemainingSeconds = 0;
	pendingMessages = new queue();
}

ROLE_Spy::~ROLE_Spy();
{
	delete pendingMessages;
}

int ROLE_Spy::getNumberTargetsSwitched()
{
	return numberTargetSwitched;
}

int ROLE_Spy::getRemainingPenaltyTime()
{
	return penaltyRemainingSeconds;
}

int ROLE_Spy::getRemainingNumberOfMessages()
{
	return numberRemainingMessages;
}

Message* ROLE_Spy::getMessageFromQueue()
{
	if (pendingMessages && !pendingMessages->empty()) {
		Message* messageToSend = pendingMessages.front();
		pendingMessages->pop();
		return messageToSend;
	} else {
		return 0;
	}
}

bool ROLE_Spy::sendMessage(Message message, Country country)
{
	if (country == homeCountry && message) {
		if (numberRemainingMessages > 0) {
			pendingMessages->push(message);
			--numberRemainingMessages;
			return true;
		} else {
			return false;
		}
	} else if (country == targetedCountry) {
		//TODO: directly add to message queue in country
		return true;
	} else {
		return false;
	}
}

void ROLE_Spy::switchCountry(Country newTargetCountry)
{
	targetedCountry = newTargetCountry;
	++numberTargetSwitched;

	//Calculate penalty time
	penaltyRemainingSeconds += numberTargetSwitched*30;
	numberRemainingMessages += numberTargetSwitched*2;

	//Clearing out remaining messages that were pending
	int numberMessages = pendingMessages->size();
	for (int i = 0; i < numberRemainingMessages; ++i) {
		Message *temp = pendingMessages->front();
		pendingMessages->pop;
		delete temp;
	}
}

void ROLE_Spy::decreasePenaltyTimer(int seconds)
{
	penaltyRemainingSeconds -= seconds;

	if (penaltyRemainingSeconds < 0) {
		penaltyRemainingSeconds = 0;
	}
}