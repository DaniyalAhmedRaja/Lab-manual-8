						//TASK 1
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int s;
//	cout<<"Enter the size of array : ";
//	cin>>s;
//	int arr[s];
//	for (int i=0;i<s;++i){
//		cout<<"Enter "<<i+1<<" value of array : ";
//		cin>>arr[i];
//	}
//	int value , repeated , max=1 , count ;
//	for(int i=0;i<s;++i){
//		value = arr[i];
//		count = 0;
//		for(int j=0;j<s;++j){
//			if(arr[j]==value){
//				++count;
//			}
//		}
//		if(count>max){
//			max = count;
//			repeated = value;
//		}
//	} 	
//	cout<<"The most repeated number is "<<repeated<<" .It is in the array "<<max<<" times.";
//	return 0;
//}

					//TASK 2
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int  a[8] = {13, 15, 17, 9, 99, 77, 65, 43} ;
//	int  largest = a[0] , smallest = a[0];
//	for(int i=1 ; i<8 ; ++i){
//		if(a[i] < smallest){
//			smallest = a[i];
//		}
//		if(a[i] > largest){
//			largest = a[i];
//		}
//	}
//	cout<<"The largest value in this array is "<<largest<<endl;
//	cout<<"The smallest value in the array is "<<smallest;
//	return 0;
//}

					//TASK 3
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int temp;
//	cout<<"Enter the values in array : \n";
//	for(int i=0 ; i<5 ; ++i){
//		cin>>arr[i];
//	}
//	cout<<"Before swapping :"<<endl;
//	for(int j=0 ; j<5 ; ++j){
//		cout<<arr[j]<<"\t";
//	}
//	cout<<endl;
//	temp = arr[2];
//	arr[2] = arr[4];
//	arr[4] = temp;
//	cout<<"After swapping :"<<endl;
//	for(int k=0 ; k<5 ; ++k){
//		cout<<arr[k]<<"\t";
//	}	
//	
//	return  0;
//}
