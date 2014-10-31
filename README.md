spark_relay
===========

SparkCore code to control a two channel relay using the spark function api

Control the Spark Relay using the following Curl command

curl https://api.spark.io/v1/devices/_coreID_/power \
  -d access_token=_accessToken_ \
  -d params=p7,LOW

Change p7 to either of the two pins. I have used pins D6,D7.

Change LOW to either LOW (on) or HIGH (off) The SunFounder 2 Channel 5V Relay Shield Module I am using used LOW to turn on a relay, and HIGH to turn it off. Other relay sheilds this is reversed.