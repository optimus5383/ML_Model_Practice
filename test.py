import zipapp
import torch


x=torch.zeros(10,2,3)
y=torch.ones(10,3)
x[:,0,:]=y
z=x[:,0,:]

print(z.size())

