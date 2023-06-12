from flask import Flask, request
from googlesearch import search
import requests
from twilio.twiml.messaging_response import MessagingResponse


app = Flask(__name__)


@app.route("/", methods=["POST"])
# chatbot logic
def bot():

    incoming_message = request.values.get('Body', '').lower()
    resp = MessagingResponse()
    msg = resp.message()

    if 'hello' in incoming_message:
        msg.body("Hello! How can I assist you today?")
    elif 'bye' in incoming_message:
        msg.body("Goodbye! Have a great day!")
    else:
        msg.body("I'm sorry, I can only respond to 'hello' and 'bye'.")

    return str(resp)


if __name__ == "__main__":
    app.run()
