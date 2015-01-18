//#ifndef MAZE_CPP
//#define MAZE_CPP

#include "stdafx.h"
#include "Maze.h"
#include "Queue.h"
#include "Stack.h"


Maze::Maze(int numElements) : S(numElements), doors(4*numElements), visited(numElements), path(numElements)
{
	size = numElements;
	for(int i = 0; i < doors.size(); i++)
	{
		doors[i] = false;
	}
	for(int i = 0; i < visited.size(); i++)
	{
		visited[i] = false;
	}
}

void Maze::reset()
{
	for(int i = 0; i < size; i++)
	{
		path[i] = false;
		visited[i] = false;
		//doors[i] = false;
	}
	for(int i = size; i < size*4; i++)
	{
		//doors[i] = false;
	}
}

void Maze::findPath(map<int, int> &m1)
{
	map <int, int>::iterator m1_pIter, m2_pIter;
	
	 m1_pIter = m1.end();
	 m1_pIter--;
	 
	path[0] = true;
	

	//system("Pause");
	//system("cls");
	//cout<<"Path: \n";
	 do{
		 //cout<<" "<<m1_pIter->first;
	
		 path[m1_pIter->first] = true;
		 m1_pIter = m1.find(m1_pIter->second);
	 }while(m1_pIter->second != 0);
	 //cout<<" "<<m1_pIter->first;
	
	 path[m1_pIter->first] = true;
	
	 //cout<<"\n";

	
}

void Maze::printVisited() const
{
	cout<<"\nVisited:\n";
	for(int i = 0; i < size; i++)
	{
		if(visited[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}

void Maze::printPath() const
{
	cout<<"\nPath: \n";
	for(int i = 0; i < size; i++)
	{
		if(path[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}
bool Maze::isSolved() const
{
	return visited[size-1];
}
int Maze::oppositeWall(int x)
{
	/*		0
	|
	3 -- -- 2
	|
	1
	*/
	int m = 0;
	switch(x)
	{
	case 0: m = 1;
		break;
	case 1: m = 0;
		break;
	case 2: m = 3;
		break;
	case 3: m = 2;
		break;
	}
	return m;
}
int Maze::adjacent(int direction, int roomNum)
{
	int n = sqrt((double)size);
	int x = 0;
	switch(direction)
	{
	case 0: x = roomNum - n;
		break;
	case 1: x = roomNum + n;
		break;
	case 2: x = roomNum + 1;
		break;
	case 3: x = roomNum - 1;
		break;
	}
	return x;
}

/*Create an empty queue Q of room numbers
Enqueue room number 0 to Q
Mark room number 0 as visited
While Q is not empty { 
Dequeue an element from Q and store it to i
If i is equal to (N - 1) then break from the while-loop and print
the path found 
For each room j adjacent to room i such that there is a passage way 
between rooms i and j
and room j is not marked visited {
Enqueue room number j to Q
Mark room number j as visited
} 
}*/

void Maze::BFS(void)
{
	
    map <int, int> m1;
	typedef pair <int, int> Int_Pair;

	//deque<int> Q;
	Queue<int> Q;
	Q.pushBack(0);
	visited[0] = true;
	//int z = size/2, y = 0;
	//m1.insert(Int_Pair(z, 0));  
	int i = 0;
	//cout<<"BFS Visited:\n";
	while(!Q.isEmpty() && i != size-1)
	{
		i = Q.popFront();
		//Q.pop_front();
		//cout<<i<<" ";
		if(i == size-1)
		{
			//print();
		}
		else
		{
			int x = 0;

			for(int j = 0; j < 4; j++)
			{
				x = adjacent(j, i);
				if(x >= 0 && x < size)
				{
					//if(!((i % size == 0 && j == i-1)||(i % size == s-1 && j == i+1)))
					{
						if(S.find(i) == S.find(x) && !visited[x] && doors[(i*4)+j])// && doors[(x*4)+oppositeWall(j)])
						{
							
							//cout<<x<<" ";
							m1.insert(Int_Pair(x, i));
							Q.pushBack(x);
							visited[x] = true;
						}
					}
				}
			}
		}
	}
	cout<<"BFS: \n";
	findPath(m1);
	printVisited();
	printPath();
	
	print();
}

/*Create an empty stack S of room numbers
Push room number 0 to S
Mark room number 0 as visited
While S is not empty { 
Pop an element from S and store it to i
If i is equal to (N - 1) then break from the while-loop and print 
the path found 
For each room j adjacent to room i such that there is a passage 
way between rooms i and j
and room j is not marked visited {
Push room number j to S
Mark room number j as visited*/

void Maze::DFS(void)
{
	map <int, int>::iterator m1_pIter, m2_pIter;
    map <int, int> m1, m2;
	typedef pair <int, int> Int_Pair;

	//stack<int> St;
	Stack<int> St;
	St.push(0);
	visited[0] = true;
	//Mark 0 as visited
	int i = 0;
	//cout<"DFS Visited: \n";
	while(!St.isEmpty() && i != size-1)
	{
		i = St.pop();
		//St.pop();
		//cout<<i<<" ";
		if(i == size-1)
		{
			//print();
		}
		else
		{
			int x = 0;
			for(int j = 0; j < 4; j++)
			{
				x = adjacent(j, i);
				if(x >= 0 && x < size)
				{
					if(S.find(i) == S.find(x) && !visited[x] && doors[(i*4)+j])
					{
						m1.insert(Int_Pair(x, i));
						St.push(x);
						visited[x] = true;
						//cout<<x<<" ";
					}
				}
			}
		}
	}
	cout<<"DFS: \n";
	findPath(m1);

	printVisited();
	printPath();
	print();
}




void Maze::randomMaze(void)
{
	/*Initialize a disjoint sets S of room numbers 0, 1, 2,...., N - 1          
	While (S.find(0) != S.find(N - 1)) 
	Choose randomly a pair (i, j) of adjacent rooms i and j 
	If (S.find(i) != S.find(j)) 
	Open the doors connecting rooms i and j in the maze 
	S.union(S.find(i), S.find(j))  */

	srand(time(NULL));
	while(S.find(0) != S.find(size-1))
	{
		int i =	rand() % size;
		int x = rand() % 4;
		int j = 0;
		int s = sqrt((double)size);

		j = adjacent(x, i);

		if(!((i % s == 0 && j == i-1)||(i % s == s-1 && j == i+1)))
		{
			if(i >= 0 && i < size && j >= 0 && j < size)
			{
				if(S.find(i) != S.find(j))
				{
					int m = oppositeWall(x);

					doors[(i*4)+x] = true;
					doors[(j*4)+m] = true;
					S.unionSets(S.find(i), S.find(j));
				}
			}
		}

		//S.print();
		//system("Pause");
		//system("cls");

	}
	//print();
	//BFS();
}

void Maze::fromFile(ifstream & input)
{

	int in = 0;
	int n = sqrt((double)size);
	int i = 0;
	int j = 0;
	while(!input.eof())
	{
		for(int j = 0; j < 4; j++)
		{
			input>>in;
			if(in == 0)
			{
				/*door 0 - north, door 1 - south, door 2 - east, and door 3 - west*/
				int x = 0;
				//if(i != 0 && i != size-1)
				{
					x = adjacent(j, i);

					if(x >= 0 && x < size && i >= 0 && i < size)
					{
						//system("Pause");
						//system("cls");
						//cout<<"\n\ni: "<<i<<"\nx: "<<x<<"\n\n";
						if(S.find(i) != S.find(x))
						{
							int m = oppositeWall(j);
							doors[(i*4)+j] = true;
							doors[(x*4)+m] = true;
							S.unionSets(S.find(i), S.find(x));
						}
						//print();
					}
				}
			}

		}
		i++;
		//S.print();
		//system("Pause");
		//system("cls");
	}
	//print();
	//BFS(S, n);
}


void Maze::print() const
{
	int x = sqrt((double)size);
	int c = x;

	/*cout<<"\n";
	for(int i = 0; i < size; i++)
	{
		cout<<S.getS(i)<<" ";
	}
	cout<<"\n";
	for(int i = 0; i < size; i++)
	{
		cout<<visited[i]<<" ";
	}*/
	cout<<"\n\n      ";
	for(int i = 1; i < x; i++)
	{
		cout<<"-- ";
	}
	cout<<"\n  ";
	while(x <= size)
	{
		cout<<"| ";
		for(int i = x-c; i < x; i++)
		{
			if(i < size - 1)
			{
				if(path[i])
				{
					cout<<"#";
				}
				else if(visited[i])
				{
					cout<<".";
				}
				else
				{
					cout<<" ";
				}
				//if(find(i) != find(i+1))
				if(!doors[i*4+2])
				{
					cout<<"| ";
				}
				else
				{
					cout<<"  ";
				}


			}
			else
			{
				if(visited[size-1])
				{
					cout<<"#";
				}
				else
				{
					cout<<" ";
				}
				cout<<"| ";
			}
		}
		//cout<<" |  ";
		cout<<"\n   ";
		for(int i = x-c; i < x; i++)
		{
			if(i < size - c)
			{
				//if(find(i) != find(i+c))
				if(!doors[i*4+1])
				{
					cout<<"-- ";
				}
				else
				{
					cout<<"   ";
				}
			}
		}
		x += c;
		if(x <= size)
		{

			cout<<"\n  ";
		}

	}

	for(int i = 1; i < c; i++)
	{
		cout<<"-- ";
	}
	cout<<"\n";
}

//#endif