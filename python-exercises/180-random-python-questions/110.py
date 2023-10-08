from datetime import datetime

# pip install python-telegram-bot

def sample_responses(input_text):
    user_message = str(input_text).lower()

    if user_message in ("hello","hi",):
        return "hey, how are you?"
    if user_message in ("who are you","who are you?","who are you?",):
        return "I am Telegram bot nyte85."
    if user_message in ("time","what is time?","what is time"):
        now = datetime.now()
        date_time = now.strftime("time is --> %d.%m.%y, %H:%M:%S")
        return str(date_time)

    return "I couldn't get what you said."

