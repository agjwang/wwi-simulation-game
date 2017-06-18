/*
 * NAME: ROLE_Spy.h
 *
 * COMMENTS: Spies have access to both base country chat and the chat of their currently targeted country
 				Spies are allowed to switch targed country, but switch will incur a time penalty
 *
 */

#ifndef __ROLE_Spy_h__
#define __ROLE_Spy_h__

#include "./CTRY/CTRY_Countries.h"

class ROLE_Spy
{
	public:

		//Public contructors and deconstructors
									ROLE_Spy();
									ROLE_Spy(Country country, Country targetCountry, int numberMessages);
									~ROLE_Spy();

		//Getter and setter methods
		void						sendMessage

	private:
		int numberRemainingMessages;
};