walk.png : walk.py walk.dat
	python walk.py

walk.dat : walk.x
	./metropolis.x > metropolis.dat

walk.x : walk.cpp
	c++ metropolis.cpp -o metropolis.x
	
clean : 
	rm metropolis.x metropolis.dat metropolis.png