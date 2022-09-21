import torch


x=torch.FloatTensor(10)
y=torch.FloatTensor(10)
c=(x,y)
a,b=c

print(a.size())
print(b.size())