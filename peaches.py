X=5; G=5.7
Y=4; N=4.2
G_per_kg = G/X
N_per_kg = N/Y
if G_per_kg > N_per_kg:
  print("Georgia peaches are more expensive at %f per kg" % G_per_kg)
elif G_per_kg == N_per_kg:
  print("Same price of %f per kg" % G_per_kg)
else:
  print('Naoussa peaches more expensive at %f per kg' % N_per_kg)