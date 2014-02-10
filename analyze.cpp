//
//  analyze.cpp
//  YemenData
//
//  Created by David Hallac on 1/28/14.
//  Copyright (c) 2014 David Hallac. All rights reserved.
//


#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <string>
#include "../../snap-core/Snap.h"
#include "process.h"
using namespace std;

int main(int argc, const char * argv[])
{

	TVec<TPhoneCall> PhoneLoad;
	//TFIn fin("OldFiles/20100430"); 
	TFIn fin("20100501"); 
	PhoneLoad.Load(fin);


	//DURATION

	/*int total = 6610258; //Total number of non-texts on 
	//int total = PhoneLoad.Len();
	int counter = 0;
	int thresholds [] = {1780, 1799, 1800, 1801,3500,3599,3601};

	for(int j=0; j < sizeof(thresholds)/sizeof(int); j++)
	{
		counter = 0;
		for (int i=0; i <= PhoneLoad.Len(); i++) 
		{
			if (PhoneLoad[i].getDuration() >= thresholds[j])
			{
				counter++;
			}
		}
		float percentage = counter*100;
		percentage = percentage/total;
		cout << percentage << ", " << counter << ", " << thresholds[j] << "\n";
		//cout << counter << "\n";
	}*/
	

	//START TIME
	/*int total = PhoneLoad.Len();
	int counter = 0;
	int thresholds [] = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000,240000};

	for(int j=0; j < sizeof(thresholds)/sizeof(int); j++)
	{
		counter = 0;
		for (int i=0; i <= PhoneLoad.Len(); i++) 
		{
			if (PhoneLoad[i].getTime() >= thresholds[j])
			{
				counter++;
			}
		}
		float percentage = counter*100;
		percentage = percentage/total;
		//cout << percentage << ", " << counter << ", " << thresholds[j] << "\n";
		cout << percentage << "\n";
	}*/


	//SOURCE ID
	/*int total = PhoneLoad.Len();
	TVec<TUInt64> sources(total, 0);
	for (int i=0; i <= PhoneLoad.Len(); i++) 
	{
		sources.Add(PhoneLoad[i].getSource());
	}	
	sources.Sort(true);
	cout << sources.Len() << "\n";

	//Count number of elements matching a certain condition
	int counter = 0;
	for (int i = 0; i<= sources.Len(); i++)
	{
		if(sources[i] >= 967730000000 && sources[i] <= 967740000000)
			counter++;


	}
	cout << counter << "\n";*/



	//DESTINATION ID
	/*int total = PhoneLoad.Len();
	TVec<TUInt64> sources(total, 0);
	for (int i=0; i <= PhoneLoad.Len(); i++) 
	{
		if(PhoneLoad[i].getDuration() == 1)	
			sources.Add(PhoneLoad[i].getDest());
	}	
	sources.Sort(true);
	cout << sources.Len() << "\n";

	//Count number of unique elements
	int counter = 0; //First element is always unique
	for (int i = 1; i<= sources.Len(); i++)
	{
		if(sources[i] != sources[i-1])
			counter++;

	}
	cout << counter << "\n";

	counter = 0;
	for (int i = 0; i<= sources.Len(); i++)
	{
		if(sources[i] > 730000000 && sources[i] < 740000000 )
			counter++;

	}
	cout << counter << "\n";*/




	//DESTINATION LOCATION INFO
	int counter = 0;
	for (int i=0; i <= PhoneLoad.Len(); i++) 
	{
		if (PhoneLoad[i].getLocDest() == 1 && PhoneLoad[i].getDuration() > 1)
		{
			counter++;
		}
	}	
	cout << counter << "\n";
}



