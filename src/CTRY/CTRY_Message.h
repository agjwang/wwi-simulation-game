/*
 *NAME:CTRY_Message.h
 *
 *COMMENTS: Message struct used for chat
 *
 */

struct Message {
    string *sender;
    string *message;
    int time;
}