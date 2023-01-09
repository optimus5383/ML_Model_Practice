## MLE(최대 우도법)

### Likelihood  

<img src=https://raw.githubusercontent.com/angeloyeo/angeloyeo.github.io/master/pics/2020-07-17-MLE/pic2.png>  

+ Likelihood란 각 데이터 샘플에다가 분포에 대한 높이를 다 곱해서 추출
   + 계산된 높이를 더해주지 않고 곱해준느 것은 모든 데이터들의 추출이 독립적으로 연달아 일어나는 사건이기 때문
   + 식은 다음과 같다 $\Rho$(x|$\theta$) = $\prod_{k=1}^{n}$$\Rho$($x_k$\|$\theta$) 
   + 계산 편의를 위해 Log를 취한 Log Liklihood function을 사용
   + Log Liklihood 식은 다음과 같다.  
   + L($\theta$|x)=log$\Rho$(x|$\theta$)=$\sum_{i=1}^{n}$$\Rho$($x_k$\|$\theta$)
   + 최대값을 찾는 방법은 위의 식에 편미분을 하고 그 값이 0이 되도록하는 $\theta$를 찾는 과정을 통해 Liklihood 최대값을 찾을 수 있다.
   + 


## Restricted Boltzmann Machine

+ 지도학습들은 Truch value 와 Prediction value의 오차를 Back Propagation을 통하여 Weight들을 업데이트 할 수 있지만 비지도 학습들을 그러지 못한다. 그렇기 때문에 학습을 확률 밀도 함수를 구하는 것을 목표로 한다.