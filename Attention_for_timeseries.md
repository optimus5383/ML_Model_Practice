# Attetnion

+ Attention을 Time_Series에 적용하는 것이 과연 옳은가?  
    + Attention은 1차원만 적용 가능하다.
    + seq2seq으로 forcasting을 할 시 Time_Series가 굉장히 길어질 경우 학습시간이 무지막지하게 늘어난다. 거기다가 시간의 흐름에 따른 값을 Attention을 할 것인지 아니면 다른 시간에 따라 변화하는 특징들도 적용할 것인지에따라 Attetion을 두 번정도 사용해야하고 이 또한 학습시간이 증가하게 되는 이유이다.
    +  https://shyu0522.tistory.com/10에 따르면 Attetnion을 적용하는 것이 정확도는 높았다고 한다. 하지만 RTX 3090으로 학습시 일반 모델에서 17분이걸릴 문제를 학습하는데 6시간이 걸렸기 떄문에 이 문제가 좋다고 할 수는 없어 보인다. 추가적으로 RT를 사용할 경우 이렇게 학습시간이 길면 실제 사용시에도 반응 속도가 느리기 때문에 RT에서는 적합하지 않다는 문제가 있다.



위에 사이트에서는 Time-Serier Forcasting에서는 Seq2Seq나 Encoder-Decoder 기반의 BI-LSTM형태로 구성하는 것이 아직까지는 가장 합리적인 방법이라 나온다.