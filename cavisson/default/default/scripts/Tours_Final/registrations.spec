nsl_static_var(usnm:1,pass:2, File=.seq, Refresh=USE, Mode=SEQUENTIAL, FirstDataLine=2, EncodeMode=All);
nsl_unique_number_var(credit, Format=%016lu, Refresh=SESSION);
nsl_web_find(TEXT="Your reservation has been confirmed.", PAGE=findflight_3);
