import smtplib
import pdb

sender = 'from@fromdomain.com'
receivers = ['to@todomain.com']

message = """From: From Person <from@fromdomain.com>
To: To Person <to@todomain.com>
Subject: SMTP e-mail test

This is a test e-mail message.
"""

# added a comment to test git add -p
try:
	pdb.set_trace()
	smtpObj = smtlib.SMTP('localhost')
	smtpObj.sendmail(sender, receivers, message)
	print 'Successfully sent email'
except Exception:
	print 'Error: unable to send email'
